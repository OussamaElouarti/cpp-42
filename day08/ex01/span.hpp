# pragma once

# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>

class Span
{
    private :
        std::vector<int> _lst;
        unsigned int _n;
        unsigned int _count;
    public :
        Span(unsigned int n);
        ~Span();
        void addNumber(int );
        class ContainerFull : public std::exception
        {
            public :
                ContainerFull () throw() {} ;
                ContainerFull (const ContainerFull&) throw() {} ;
                virtual ~ContainerFull() throw() {} ;
                virtual const char* what() const throw() { return "Container is full!"; };
        };
        class ContainerEmpty : public std::exception
        {
            public :
                ContainerEmpty () throw() {} ;
                ContainerEmpty (const ContainerEmpty&) throw() {} ;
                virtual ~ContainerEmpty() throw() {} ;
                virtual const char* what() const throw() { return "Container is empty or contain only one number!"; };
        };
        int shortestSpan();
        int longestSpan();
};