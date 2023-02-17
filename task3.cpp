#include <iostream>
#include <string>
#include <cctype>

using namespace std;

std::string operator*(const std::string s, int n)
{
	std::string st = s;
	for (int i = 1; i < n; i++)
	{
		st += s;
	}

	return st;
}

int main()
{
	std::string string = "String";
	int n = 4;
	std::cout << string * n << std::endl; 
}