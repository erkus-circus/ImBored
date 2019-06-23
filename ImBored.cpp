#include <iostream>
#include <Windows.h>

void HideConsole()
{
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}

//https://en.wikipedia.org/wiki/Special:Random
int main()
{
	size_t numPages = 1;

	std::cout << "Pages?=";
	std::cin >> numPages;
	HideConsole();
	for (size_t i = 0; i < numPages; i++)
	{
		system("start https://en.wikipedia.org/wiki/Special:Random");
	}


	
}