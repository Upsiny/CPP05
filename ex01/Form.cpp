# include "Form.hpp"
#include <iostream>


// constructors
Form::Form( void ): _name("Taxes"), _gradeExc(150), _gradeReq(150), _signed(1) {
    std::cout << "A form about taxes as been created and need to be signed by someone at grade 150" << std::endl;
    return ;
}

Form::Form(const std::string &name, int gradeExc, int gradeReq) {

}

Form::Form(Form const &src): _name(src._name), _gradeExc(src._gradeExc), _gradeReq(src._gradeReq), _signed(src._signed) {
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
