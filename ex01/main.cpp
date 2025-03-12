#include "Bureaucrat.hpp"
#include <iostream>

// les grades vont de 1, grade le plus haut a 150, grade le plus bas

int main() {
    //////////////// test 0 : creer un bureaucrat par default, l'afficher et le detruire
    Bureaucrat a;
    std::cout << a << std::endl;

    //////////////// test 1 : decrementer un grade trop bas
    // Bureaucrat a;
    // std::cout << a << std::endl;
    // try {
    //     a.decrementGrade();
    // }
    // catch (std::exception &e) {
    //     std::cerr << "Execption : " << e.what() << std::endl;
    // }

    //////////////// test 2 : incrementer le grade du bureaucrat a
    // Bureaucrat a;
    // std::cout << a << std::endl;
    // a.incrementGrade();
    // std::cout << a << std::endl;

    //////////////// test 3 : creer un bureaucrat a un grade trop haut
    // try {
    //     Bureaucrat b("Franck", 0);
    // }
    // catch (std::exception &e) {
    //     std::cerr << "Exception : " << e .what()<< std::endl;
    // }

    //////////////// test 4 : creer un bureaucrat avec un bon grade et le manipuler
    // try {
    //     Bureaucrat b("Franck", 42);
    //     b.incrementGrade();
    //     std::cout << b << std::endl;
    //     b.incrementGrade();
    //     std::cout << b << std::endl;
    //     b.incrementGrade();
    //     std::cout << b << std::endl;
    //     b.decrementGrade();
    //     std::cout << b << std::endl;
    //     b.decrementGrade();
    //     std::cout << b << std::endl;
    //     b.decrementGrade();
    //     std::cout << b << std::endl;
    // }
    // catch (std::exception &e) {
    //     std::cerr << "Exception : " << e .what()<< std::endl;
    // }

    //////////////// test 5 : creer un bureaucrat et sa copie et manipuler les 2
    // Bureaucrat a("John", 42);
    // Bureaucrat b(a);
    // try {
    //     std::cout << "John 1: ";
    //     a.decrementGrade();
    //     std::cout << "John 2: ";
    //     b.incrementGrade();
    // }
    // catch (std::exception &e) {
    //     std::cerr << "Execption : " << e.what() << std::endl;
    // }
    // std::cout << "John 1 ";
    // std::cout << a << std::endl;
    // std::cout << "John 2 ";
    // std::cout << b << std::endl;
    return 0;
}
