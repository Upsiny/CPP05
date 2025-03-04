# include "Bureaucrat.hpp"

//constructors
Bureaucrat::Bureaucrat( void ) {
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
    *this = src;
    return ;
}

//destructor
Bureaucrat::~Bureaucrat( void ) {
    return ;
}

//operator
Bureaucrat&     Bureaucrat::operator=(const Bureaucrat &src) {
    this->_name = src.getName();
    this->_grade = src.getGrade();
    return *this;
}

//setter
void        Bureaucrat::setName(std::string name) {
    this->_name = name;
    return ;
}

void Bureaucrat::setGrade(int grade) {
    this->_grade = grade;
    return ;
}

//getter
std::string Bureaucrat::getName( void ) const {
    return this->_name;
}

int         Bureaucrat::getGrade( void ) {
    return this->_grade;
}

// functions
void Bureaucrat::incrementGrade(/* arguments */) {

}

void Bureaucrat::decrementGrade(/* arguments */) {

}
