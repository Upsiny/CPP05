# include "Bureaucrat.hpp"
#include <iostream>

//constructors
Bureaucrat::Bureaucrat( void ): _name("Billy Bob"), _grade(150) {
    std::cout << "Billy Bob as been created at grade 150." << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name) {
    if (grade > 150)
        throw (GradeTooLowException());
    else if (grade < 1)
        throw (GradeTooHighException());
    else {
        this->_grade = grade;
        std::cout << "A Bureaucrat named : " << name << " as been created on grade : " << grade << " !" << std::endl;
    }
    return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name), _grade(src._grade) {
    std::cout << "A copy of " << src.getName() << " as been created !" << std::endl;
    return ;
}

//destructor
Bureaucrat::~Bureaucrat( void ) {
    std::cout << this->_name << " as been killed" << std::endl;
    return ;
}

//operator
Bureaucrat&     Bureaucrat::operator=(const Bureaucrat &src) {
    this->_grade = src.getGrade();
    return *this;
}

//getter
std::string Bureaucrat::getName( void ) const {
    return this->_name;
}

int         Bureaucrat::getGrade( void ) const {
    return this->_grade;
}

// functions
const char *Bureaucrat::GradeTooLowException::what() const throw() {
        return ("The grade is too low : > 150");
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
        return ("The grade is too High : < 1");
}
void Bureaucrat::incrementGrade() {
    std::cout << this->_name << " rank is increased by 1" << std::endl;
    if ((this->_grade - 1) < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade() {
    std::cout << this->_name << " rank is decreased by 1" << std::endl;
    if ((this->_grade + 1) > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

// operator <<

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return os;
}
