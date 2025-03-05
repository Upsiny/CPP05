#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
private:
    const   std::string _name;
    int                 _grade;

public:
    Bureaucrat ( void );
    Bureaucrat (const Bureaucrat &src);
    virtual ~Bureaucrat ( void );

//operator
    Bureaucrat&          operator=(const Bureaucrat &src);

//get & set
    void        setName(std::string Name);
    void        setGrade(int grade);
    std::string getName( void );
    int         getGrade( void );

//functions
    void incrementGrade(/* arguments */);
    void decrementGrade(/* arguments */);
    void outOfBound(/* arguments */);
};

#endif
