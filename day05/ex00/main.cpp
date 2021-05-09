#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat* bureaucrat = new Bureaucrat("Bob", 2);
    Bureaucrat* stagiaire = new Bureaucrat("Cafe", 149);
    
    try
    {
        std::cout << *bureaucrat;
        bureaucrat->increment();
        std::cout << *bureaucrat;
        bureaucrat->increment();
    }
    catch (std::exception & e)
    {
        std::cerr << "[1] Exception : " << e.what() << std::endl;
    }
    
    try
    {
        std::cout << *stagiaire;
        stagiaire->decrement();
        std::cout << *stagiaire;
        stagiaire->decrement();
    }
    catch (std::exception & e)
    {
        std::cerr << "[2] Exception : " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat* tooHigh = new Bureaucrat("TooHigh", 0);
        (void)tooHigh;
    }
    catch (std::exception & e)
    {
        std::cerr << "[3] Exception : " << e.what() << std::endl;
    }
    
    try
    {
        Bureaucrat* tooLow = new Bureaucrat("TooLow", 420);
        (void)tooLow;
    }
    catch (std::exception & e)
    {
        std::cerr << "[4] Exception : " << e.what() << std::endl;
    }
    
    delete bureaucrat;
    delete stagiaire;
}