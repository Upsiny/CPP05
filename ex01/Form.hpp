#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat ;

class Form {
private:
    const   std::string _name;
    int                 _gradeReq;
    int                 _gradeExc;
    bool                _signed;

public:
    Form ( void );
    Form (const std::string &name, int gradeReq, int gradeExc);
    Form (Form const &src);
    virtual ~Form ( void );

//operator
    Form&         operator=(const Form &src);

//getter
    std::string getName( void ) const;
    int         getGradeReq( void ) const;
    int         getGradeExc( void ) const;

//functions
    void        beSigned(const Bureaucrat &bureaucrat);
    class	GradeTooHighException : public std::exception { // < 1
			public:
				virtual const char* what() const throw();
		};

	class	GradeTooLowException : public std::exception { // >150
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
