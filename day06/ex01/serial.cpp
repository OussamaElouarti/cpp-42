# include "serial.hpp"

void    *serialize(void)
{
    char *tab;
    tab = new char[20];
    static std::string str1 = "abcdefjhigklmnopqrstvwxz0123456789";
    for (int i = 0; i < 8; i++)
        tab[i] = str1[rand() % 34];
    *reinterpret_cast<int*>(tab + 8) = rand() % 1234;
    for (int i = 0; i < 8; i++)
        tab[12+i] = str1[rand() % 34];
    return (tab);
}

Data    *deserialize(void * raw)
{
    Data *data = new Data;
    data->str1 = std::string(static_cast<char*>(raw), 8);
    data->str2 = std::string(static_cast<char*>(raw) + 12, 8);
    data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
    return (data);
}