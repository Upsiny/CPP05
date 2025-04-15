# include "AForm.hpp"
#include <iostream>


// constructors
AForm::AForm( void ): _name("Taxes"), _gradeReq(150), _gradeExc(150), _signed(1) {
    std::cout << "A nAForm about taxes as been created and need to be signed by someone at grade 150" << std::endl;
    return ;
}

AForm::AForm(const std::string &name, int gradeExc, int gradeReq): _name(name), _signed(1) {
    if (gradeExc > 150 || gradeReq > 150)
        throw (GradeTooLowException());
    if (gradeExc < 1 || gradeReq < 1)
        throw (GradeTooHighException());
    this->_gradeExc = gradeExc;
    this->_gradeReq = gradeReq;
    return ;
}

AForm::AForm(AForm const &src): _name(src._name), _gradeReq(src._gradeReq), _gradeExc(src._gradeExc), _signed(src._signed) {
    std::cout << "A copy of " << src.getName() << " AForm as been created." << std::endl;
    return ;
}

// destructor
AForm::~AForm( void ) {
    std::cout << this->_name << " as been trashed in the AForm shredder" << std::endl;
    return ;
}

//operator
AForm& AForm::operator=(const AForm &src) {
    this->_gradeExc = src.getGradeExc();
    this->_gradeReq = src.getGradeReq();
    return *this;
}

//getter
std::string AForm::getName( void ) const {
    return this->_name;
}

int         AForm::getGradeExc( void ) const {
    return this->_gradeExc;
}

int         AForm::getGradeReq( void ) const {
    return this->_gradeReq;
}

//exceptions
const char*AForm::GradeTooLowException::what() const throw() {
    return ("The grade is too low : < Grade expected");
}

const char*AForm::GradeTooHighException::what() const throw() {
    return ("The grade is too high : > Grade expected");
}

//functions
void    AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() < this->getGradeReq()) {
        this->_signed = true;
    }
    else {
        throw GradeTooLowException();
    }
}

//operator
std::ostream& operator<<(std::ostream& os, const AForm& AForm) {
    os << AForm.getName() << ", AForm that need a grade " << AForm.getGradeReq() << " to be signed and a grade " << AForm.getGradeExc() << " to be executed !";
    return (os);
}