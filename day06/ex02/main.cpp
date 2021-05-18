
# include "identify.hpp"
int     main( void )
{
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
	{
		Base *o = generate();
		std::cout << "Test " << i << ": ";
		identify_from_pointer(o);
		std::cout << ", ";
		identify_from_reference(*o);
		std::cout << std::endl;
		delete o;
	}

	return (0);
}