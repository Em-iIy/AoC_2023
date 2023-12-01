#include "Data.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "ERROR\nUsage: out <input file>" << std::endl;
		return (1);
	}
	try
	{
		Data data(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}