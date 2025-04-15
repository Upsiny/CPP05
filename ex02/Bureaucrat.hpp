#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
private:
    const   std::string _name;
    int                 _grade;

public:
    Bureaucrat ( void );
    Bureaucrat (const std::string &name, int grade);
    Bureaucrat (Bureaucrat const &src);
    virtual ~Bureaucrat ( void );

//operator
    Bureaucrat&         operator=(const Bureaucrat &src);

//getter
    std::string getName( void ) const;
    int         getGrade( void ) const;

//functions
    void incrementGrade();
    void decrementGrade();
    void signForm(AForm &AForm);
    class	GradeTooHighException : public std::exception { // < 1
			public:
				virtual const char* what() const throw();
		};

	class	GradeTooLowException : public std::exception { // >150
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
