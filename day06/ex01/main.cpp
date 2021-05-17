# include "serial.hpp"

int         main( void )
{
    srand(time(NULL));
    for (int i = 0; i < 3; i++)
    {
        void *raw = serialize();
        Data *data = deserialize(raw);
        std::cout << data->str1 << std::endl;
        std::cout << data->str2 << std::endl;
        std::cout << data->n << std::endl;
        delete data;
        delete static_cast<char*>(raw);
    }
    return (0);
}