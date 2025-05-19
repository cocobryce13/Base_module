#include <iostream>
#include <windows.h>

#define MODE 1

#ifndef MODE
#error Завершение работы, необходимо определить MODE
#endif


int add(int a, int b)
{
	return a + b;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

#if MODE == 0
	std::cout << "Работаю в режиме тренировки:" << std::endl;

#elif MODE == 1
	std::cout << "Работаю в боевом режиме:" << std::endl;

	int a, b;

	std::cout << "Enter number 1: ";
	std::cin >> a;

	std::cout << std::endl;

	std::cout << "Enter number 2: ";
	std::cin >> b;
	std::cout << std::endl;
	int result = add(a, b);

	std::cout << "Результат сложения: " << result << std::endl;
#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif

}

/*
Работаю в боевом режиме
Введите число 1: 4
Введите число 2: 6
Результат сложения: 10
*/