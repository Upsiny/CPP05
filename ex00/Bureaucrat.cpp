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
void outOfBound(int a) {
    if (a < 1 || a > 150)
        throw "The grade is out of bound";
    this->_grade = a;
}

void Bureaucrat::incrementGrade(int i) {
    try
        outOfBound(this->_grade - i);
    catch (const char* e)
        std::cout << "Error :" << e << std::endl;
}

void Bureaucrat::decrementGrade(int i) {
    try
        outOfBound(this->_grade + i);
    catch (const char* e)
        std::cout << "Error :" << e << std::endl;
}
