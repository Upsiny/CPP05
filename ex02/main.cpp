#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

// les grades vont de 1, grade le plus haut a 150, grade le plus bas

int main() {
    //////////////// test 0 : creer un bureaucrat et un AForm par default, les afficher et le detruire
    //Bureaucrat a;
    //std::cout << a << std::endl;
    //AForm b;
    //std::cout << b << std::endl;
    

    //////////////// test 1 : incrementer d'un grade un bureaucrat par default et lui faire signer le AForm par default
    // Bureaucrat a;
    // std::cout << a << std::endl;
    // try {
    //     a.incrementGrade();
    // }
    // catch (std::exception &e) {
    //     std::cerr << "Execption : " << e.what() << std::endl;
    // }
    // AForm b;
    // try {
    //     a.signAForm(b);
    // }
    // catch (std::exception &e){
    //     std::cerr << "Execption : " << e.what() << std::endl;
    // }

    ////////////// test 2 : creer un bureaucrat et un AForm perso et faire signer le AForm
    // Bureaucrat a("Jean", 23);
    // AForm b("l'Etat", 25, 32);
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // try {
    //     a.signAForm(b);
    // }
    // catch (std::exception &e) {
    //     std::cerr << "Execption : " << e.what() << std::endl;
    // }

    //////////////// test 3 : test 2 mais avec un AForm qu'il ne peut signer
    Bureaucrat a("Jean", 23);
    AForm b("l'Etat", 15, 12);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    try {
        a.signAForm(b);
    }
    catch (std::exception &e) {
        std::cerr << "Execption : " << e.what() << std::endl;
    }

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
