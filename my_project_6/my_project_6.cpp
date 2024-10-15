#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int num;

	cin >> num;

	switch (num) {
	case 0:cout << "+"; break;
	case 1:cout << "_"; break;
	case 2:cout << "АБВГҐ"; break;
	case 3:cout << "ДЕЄЖЗ"; break;
	case 4:cout << "ИІЇЙКЛ"; break;
	case 5:cout << "МНОП"; break;
	case 6:cout << "РСТУ"; break;
	case 7:cout << "ФХЦЧ"; break;
	case 8:cout << "ШЩ"; break;
	case 9:cout << "ЬЮЯ"; break;
	default:cout << "Це число";
	}
}