#include "Data.hpp"

static std::string	search(std::string &str)
{
	std::string	ret = "";
	char		digit;
	std::size_t	found;
	std::size_t	temp;
	// Find first occurance
	found = str.find_first_of("0123456789");
	if (found == std::string::npos)
		found = str.length() + 1;
	else
		digit = str[found];
	temp = str.find("one");
	if (temp != std::string::npos && temp < found)
	{
		digit = '1';
		found = temp;
	}
	temp = str.find("two");
	if (temp != std::string::npos && temp < found)
	{
		digit = '2';
		found = temp;
	}
	temp = str.find("three");
	if (temp != std::string::npos && temp < found)
	{
		digit = '3';
		found = temp;
	}
	temp = str.find("four");
	if (temp != std::string::npos && temp < found)
	{
		digit = '4';
		found = temp;
	}
	temp = str.find("five");
	if (temp != std::string::npos && temp < found)
	{
		digit = '5';
		found = temp;
	}
	temp = str.find("six");
	if (temp != std::string::npos && temp < found)
	{
		digit = '6';
		found = temp;
	}
	temp = str.find("seven");
	if (temp != std::string::npos && temp < found)
	{
		digit = '7';
		found = temp;
	}
	temp = str.find("eight");
	if (temp != std::string::npos && temp < found)
	{
		digit = '8';
		found = temp;
	}
	temp = str.find("nine");
	if (temp != std::string::npos && temp < found)
	{
		digit = '9';
		found = temp;
	}
	ret = digit;

	found = str.find_last_of("0123456789");
	if (found == std::string::npos)
		found = 0;
	else
		digit = str[found];

	temp = str.rfind("one");
	if (temp != std::string::npos && temp > found)
	{
		digit = '1';
		found = temp;
	}
	temp = str.rfind("two");
	if (temp != std::string::npos && temp > found)
	{
		digit = '2';
		found = temp;
	}
	temp = str.rfind("three");
	if (temp != std::string::npos && temp > found)
	{
		digit = '3';
		found = temp;
	}
	temp = str.rfind("four");
	if (temp != std::string::npos && temp > found)
	{
		digit = '4';
		found = temp;
	}
	temp = str.rfind("five");
	if (temp != std::string::npos && temp > found)
	{
		digit = '5';
		found = temp;
	}
	temp = str.rfind("six");
	if (temp != std::string::npos && temp > found)
	{
		digit = '6';
		found = temp;
	}
	temp = str.rfind("seven");
	if (temp != std::string::npos && temp > found)
	{
		digit = '7';
		found = temp;
	}
	temp = str.rfind("eight");
	if (temp != std::string::npos && temp > found)
	{
		digit = '8';
		found = temp;
	}
	temp = str.rfind("nine");
	if (temp != std::string::npos && temp > found)
	{
		digit = '9';
		found = temp;
	}
	ret += digit;
	std::cout << "ret: " << ret << std::endl;
	return (ret);
}

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
			std::string	temp = search(*it);
			result += std::stoi(temp);
		}
		std::cout << "result:\t" << result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}