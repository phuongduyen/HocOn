#define _CRT_SECURE_NO_WARNINGS																															
#include <iostream>
using namespace std;


struct person
{
	string name, phoneNumber, address;
	char avd[100];
};

person admin;

void printM() {
	cout << "-------ngoai-----------" << '\n';
	cout << admin.name << '\n';
	cout << admin.phoneNumber << '\n';
	cout << admin.address << '\n';
	cout << admin.avd << '\n';
}

//char name[4] = { 'p', 'b', 'c', 'd'};
char name[] = "poli";


void editM() {
	admin.name = "name 2";
	admin.phoneNumber = "6666";
	admin.address = "1.1.0.0";
	*admin.avd = *name;
}

//int main()
//{
//	// Gán giá trị vào biến thành phần
//	admin.name = "Admin Tong Quan";
//	admin.phoneNumber = "113";
//	admin.address = "The Internet";
//	*admin.avd = 'a';
//
//
//	// In ra giá trị của biến thành phần
//	cout << "-------trong-----------" << '\n';
//	cout << admin.name << '\n';
//	cout << admin.phoneNumber << '\n';
//	cout << admin.address << '\n';
//	cout << admin.avd << '\n';
//
//	printM();
//	editM();
//	printM();
//	return 0;
//}




