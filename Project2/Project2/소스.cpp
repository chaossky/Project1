#include<iostream>
#include"Class.h"
int main() {

	Person John;
	std::cout <<John.age  << std::endl;
	std::cout << John.height << std::endl;
	std::cout << John.weight << std::endl;

	Person Cathy(15, 22.4, 33.4);
	std::cout << Cathy.age << std::endl;
	std::cout << Cathy.height << std::endl;
	std::cout << Cathy.weight << std::endl;

	return 0;
}