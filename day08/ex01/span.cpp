# include "span.hpp"

Span::Span(unsigned int n) : _n(n)
{
    this->_count = 0;
}

Span::~Span()
{

}

void Span::addNumber(int n)
{
    this->_count++;
    if (this->_count <= this->_n)
        _lst.push_back(n);
    else
        throw ContainerFull();
}

int Span::shortestSpan()
{
    if (this->_lst.size() <= 1)
        throw ContainerEmpty();
    unsigned int shortest = this->_lst[1] - this->_lst[0];
    for (int i = 0; i < this->_lst.size() - 1; i++)
    {
        if (this->_lst[i + 1] - this->_lst[i] < shortest)
            shortest = this->_lst[i + 1] - this->_lst[i];
    }
    return (shortest);
}

int Span::longestSpan()
{
    if (this->_lst.size() <= 1)
        throw ContainerEmpty();
    int max = *std::max_element(this->_lst.begin(), this->_lst.end());
    int min = *std::min_element(this->_lst.begin(), this->_lst.end());
    return (max - min);
}