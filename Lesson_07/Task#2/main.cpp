#include <iostream>


#define SUB(a,b,c) ((a)-(b))

int main (int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}

/*#define MAX(a, b) ((a) >= (b) ? (a) : (b)) 
int main(int argc, char** argv)
{
	int num1 = 5;
	int num2 = 10;
	std::cout << "Максимальное число: " << MAX(num1, num2);
}
*/

/*
Макрос SUB
В этом задании вы создадите простой макрос.
Ваша задача — определить макрос SUB, который должен вычитать числа друг из друга и использоваться следующим образом:
Программа должна выводить результат, указанный ниже:
Пример работы программы
Консоль
1
2
-2
*/