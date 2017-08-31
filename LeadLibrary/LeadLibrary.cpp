// LeadLibrary.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "LeadLibrary.h"
#include <iostream>
#include <fstream>
#include <string>

// Check if the string has a comma in it, if so handle it
std::string Lead::handleComma(std::string name)
{
	std::size_t found = name.find(',');
	if (found != std::string::npos)
	{
		name.insert(name.begin(), '"');
		name.push_back('"');
	}
	return name;
}

void Lead::getLeadData()
{
	std::cout << "First Name: ";
	std::cin >> fname;
	std::cout << "Last Name: ";
	std::cin >> lname;
	std::cout << "Title: ";
	std::cin.get();
	std::getline(std::cin, title);
	title = handleComma(title);
	std::cout << "Phone: ";
	std::getline(std::cin, phone);
	std::cout << "Company: ";
	std::getline(std::cin, company);
	company = handleComma(company);
	std::cout << "City: ";
	std::getline(std::cin, city);
	std::cout << "State: ";
	std::getline(std::cin, state);
	std::cout << "Country: ";
	std::getline(std::cin, country);
	std::cout << "Email: ";
	std::cin >> email;
	std::cout << "Source: ";
	std::cin.get();
	std::getline(std::cin, source);
}
std::ostream& operator<<(std::ostream& os, Lead& l)
{
	os << l.fname << ",";
	os << l.lname << ",";
	os << l.phone << ",";
	os << l.title << ",";
	os << l.company << ",";
	os << l.city << ",";
	os << l.state << ",";
	os << l.country << ",";
	os << l.email << ",";
	os << l.source << ",";
	os << std::endl;
	return os;
}
