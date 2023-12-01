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
		int result = 0;

		Data data(argv[1]);
		for (DataIt it = data.begin(); it != data.end(); it++)
		{
			std::string	temp = "";
			std::size_t pos1 = it->find_first_of("0123456789");
			if (pos1 == std::string::npos)
				continue ;
			std::size_t pos2 = it->find_last_of("0123456789");
			temp = (*it)[pos1];
			temp += (*it)[pos2];
			result += std::stoi(temp);
		}
		std::cout << "result:\t" << result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}