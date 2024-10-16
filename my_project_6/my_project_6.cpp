#include <iostream>
//Доданий коментар
using namespace std;

int main()
{
	float a, b, c, x, F;
	bool toggle = true;
	cin >> a >> b >> c >> x;
	if (x + c < 0 && a != 0) {
		F = -a * pow(x, 3) - b;
	}
	else {
		if (x + c > 0 && a == 0 && x - c != 0) {
			F = (x - a) / (x - c);
		}
		else {
			if (c != 0 && x != 0) {
				F = x / c + c / x;
			}
			else {
				toggle = false;
			}
		}
	}
	if (toggle) {
		cout << F;
	}
	else {
		cout << "Error";
	}
}