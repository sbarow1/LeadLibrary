#pragma once

#ifdef LEADLIBRARY_EXPORTS
#define LEADLIBRARY_API __declspec(dllexport)
#else
#define LEADLIBRARY_API __declspec(dllimport)
#endif // LEADLIBRARY_EXPORTS

#include <iostream>
#include <fstream>
#include <string>

template class LEADLIBRARY_API std::basic_string<char, std::char_traits<char>, std::allocator<char>>;

class LEADLIBRARY_API Lead
{
private:
	std::string fname;
	std::string lname;
	std::string title;
	std::string phone;
	std::string company;
	std::string email;
	std::string city;
	std::string state;
	std::string country;
	std::string source;
public:
	std::string handleComma(std::string name);
	void getLeadData();
	__declspec(dllexport) friend std::ostream& operator<<(std::ostream& os, Lead& l);
};

