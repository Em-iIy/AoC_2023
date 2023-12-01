#include "Data.hpp"
#include <cassert>

Data::Data(const std::string &filename)
{
	std::ifstream	file(filename);
	std::string		temp;

	if (file.is_open() != true)
		throw std::runtime_error("couldn't open data file");
	while (std::getline(file, temp))
	{
		lines.push_back(temp);
	}
	file.close();
}

Data::~Data()
{
}

DataIt	Data::begin(void)
{
	return (this->lines.begin());
}

DataIt	Data::end(void)
{
	return (this->lines.end());
}

std::size_t	Data::size(void)
{
	return (this->lines.size());
}


std::string	&Data::operator[](size_t i)
{
	assert(i < this->lines.size());
	return (this->lines[i]);
}
