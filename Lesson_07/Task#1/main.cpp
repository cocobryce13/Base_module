#include <iostream>
#include <windows.h>

#define MODE 1

#ifndef MODE
#error ���������� ������, ���������� ���������� MODE
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
	std::cout << "������� � ������ ����������:" << std::endl;

#elif MODE == 1
	std::cout << "������� � ������ ������:" << std::endl;

	int a, b;

	std::cout << "Enter number 1: ";
	std::cin >> a;

	std::cout << std::endl;

	std::cout << "Enter number 2: ";
	std::cin >> b;
	std::cout << std::endl;
	int result = add(a, b);

	std::cout << "��������� ��������: " << result << std::endl;
#else
	std::cout << "����������� �����. ���������� ������" << std::endl;
#endif

}

/*
������� � ������ ������
������� ����� 1: 4
������� ����� 2: 6
��������� ��������: 10
*/