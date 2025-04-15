# include "Form.hpp"
#include <iostream>


// constructors
Form::Form( void ): _name("Taxes"), _gradeReq(150), _gradeExc(150), _signed(1) {
    std::cout << "A form about taxes as been created and need to be signed by someone at grade 150" << std::endl;
    return ;
}

Form::Form(const std::string &name, int gradeExc, int gradeReq): _name(name), _signed(1) {
    if (gradeExc > 150 || gradeReq > 150)
        throw (GradeTooLowException());
    if (gradeExc < 1 || gradeReq < 1)
        throw (GradeTooHighException());
    this->_gradeExc = gradeExc;
    this->_gradeReq = gradeReq;
    return ;
}

Form::Form(Form const &src): _name(src._name), _gradeReq(src._gradeReq), _gradeExc(src._gradeExc), _signed(src._signed) {
    std::cout << "A copy of " << src.getName() << " Form as been created." << std::endl;
    return ;
}

// destructor
Form::~Form( void ) {
    std::cout << this->_name << " as been trashed in the Form shredder" << std::endl;
    return ;
}

//operator
Form& Form::operator=(const Form &src) {
    this->_gradeExc = src.getGradeExc();
    this->_gradeReq = src.getGradeReq();
    return *this;
}

//getter
std::string Form::getName( void ) const {
    return this->_name;
}

int         Form::getGradeExc( void ) const {
    return this->_gradeExc;
}

int         Form::getGradeReq( void ) const {
    return this->_gradeReq;
}

//exceptions
const char*Form::GradeTooLowException::what() const throw() {
    return ("The grade is too low : < Grade expected");
}

const char*Form::GradeTooHighException::what() const throw() {
    return ("The grade is too high : > Grade expected");
}

//functions
void    Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() < this->getGradeReq()) {
        this->_signed = true;
    }
    else {
        throw GradeTooLowException();
    }
}

//operator
std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << form.getName() << ", form that need a grade " << form.getGradeReq() << " to be signed and a grade " << form.getGradeExc() << " to be executed !";
    return (os);
}