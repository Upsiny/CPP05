#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
# include "bureaucrat.hpp"

class form {
private:
    const   std::string _name;
    int                 _grade;

public:
    form ( void );
    form (const std::string &name, int grade);
    form (form const &src);
    virtual ~form ( void );

//operator
    form&         operator=(const form &src);

//getter
    std::string getName( void ) const;
    int         getGrade( void ) const;

//functions
    void incrementGrade();
    void decrementGrade();
    class	GradeTooHighException : public std::exception { // < 1
			public:
				virtual const char* what() const throw();
		};

	class	GradeTooLowException : public std::exception { // >150
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const form& form);

#endif
