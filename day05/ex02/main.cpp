# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

static void testForm(Bureaucrat* bur, Form* form)
{
    std::cout << std::endl << "Sign & Execute \033[33m" << form->getName() << "\033[0m : " << std::endl;
    bur->signForm(*form);
    bur->executeForm(*form);
}

int main()
{
    srand(time(NULL));

    ShrubberyCreationForm* shrub = new ShrubberyCreationForm("Patrick");
    RobotomyRequestForm* robot = new RobotomyRequestForm("Bob");
    PresidentialPardonForm* pardon = new PresidentialPardonForm("Pef");

    Bureaucrat* bob = new Bureaucrat("Bob", 120);
    Bureaucrat* james = new Bureaucrat("James", 33);
    Bureaucrat* meg = new Bureaucrat("Meg", 1);

    std::cout << "\033[31mNormal\033[0m tests : " << std::endl;

    testForm(bob, shrub);
    testForm(james, robot);
    testForm(meg, pardon);

    std::cout << std::endl << "\033[31mAlreadySigned & ToLow\033[0m tests : " << std::endl;

    testForm(bob, pardon);

    delete shrub;
    delete robot;
    delete pardon;

    delete bob;
    delete james;
    delete meg;

    return (0);
}