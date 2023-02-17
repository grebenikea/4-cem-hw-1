#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void truncateToDot(std::string& s)
{
	int i = s.size();
	std::string newS = "";

	while(s[i] =! ".")
	{
		newS[i] = s[i]; 
	}

	return newS;
}

int main()
{
	std::string st = "cat.dog.fish";
	truncateToDot(st);

	std::cout << st << std::endl;
}