/*	Adicion
	Programa para realizar la suma de dos numeros.
	Emanuel Villanueva - 159583-0
	23/04/2019
*/

#include <iostream>

int main()
	{
	std::cout << "Programa para realizar suma de dos numeros enteros. \n";
	int n1;
	std::cout << "Ingrese el primer numero: ";
	std::cin >> n1;
	int n2;
	std::cout << "Ingrese el segundo numero a sumar: ";
	std::cin >> n2;
	std::cout << "La suma de ambos numeros es: " << n1 + n2;
	std::cin.get();
}