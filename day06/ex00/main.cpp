# include <iostream>
# include <string>
# include <cstring>
# include <cctype>

// char
void    convert_char(std::string input)
{
    std::cout << "char: ";
    int c = stoi(input);
    if (c == 0 || !isprint(c))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << c << std::endl;
}
// int
void    convert_int(std::string input)
{
    std::cout << "int: ";
    int n = stoi(input);
    std::cout << n << std::endl;
}
// float
void    convert_float(std::string input)
{
    std::cout << "float: ";
    float f = stof(input);
    if (isdigit(input[0]) && (input.find(".") == std::string::npos || input.find(".0") != std::string::npos))
        std::cout << (f) <<  ".0f" << std::endl;
    else
        std::cout << (f) <<  "f" << std::endl;
}
// double
void    convert_double(std::string input)
{
     std::cout << "double: ";
    double d = stod(input);
    if (isdigit(input[0]) && (input.find(".") == std::string::npos || input.find(".0") != std::string::npos))
        std::cout << (d) <<  ".0" << std::endl;
    else
        std::cout << (d) << std::endl;
}
int     main(int argc, char **argv)
{
    std::string input;

    if (argc == 2)
    {
        input = argv[1];
        try
        {
            convert_char(input);
        }
        catch (std::exception & e)
        {
            std::cout << "impossible" << std::endl;
        }
        try
        {
            convert_int(input);
        }
        catch (std::exception & e)
        {
            std::cout << "impossible" << std::endl;
        }
         try
        {
            convert_float(input);
        }
        catch (std::exception & e)
        {
            std::cout << "impossible" << std::endl;
        }
        try
        {
            convert_double(input);
        }
        catch (std::exception & e)
        {
            std::cout << "impossible" << std::endl;
        }
    }
    else
        std::cout << "invalid number of args!" << std::endl;
    return (0);
}