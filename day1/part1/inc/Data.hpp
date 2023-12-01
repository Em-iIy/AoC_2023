#pragma once

#include <iostream>
#include <exception>
#include <fstream>
#include <vector>

typedef	std::vector<std::string>::iterator DataIt;

class Data {
private:
	std::vector<std::string>	lines;

public:
	Data(const std::string &filename);
	~Data();

	DataIt		begin(void);
	DataIt		end(void);
	std::size_t	size(void);
	std::string	&operator[](size_t i);
};