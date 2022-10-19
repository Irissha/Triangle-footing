#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int s;
	cout << "Введите размер катета, больше 1: ";
	cin >> s;
	while (s < 2) {
		cout << "Вы ввели число небольше 1, введито число заново:";
		cin >> s; }
	int p = s - 1;
	int z = 1;
	for (int i = 0; i < s; i++) {
		for (int j = 1; j <= p; j++)
			cout << " ";
		for (int j = 1; j <= z; j++)
			cout << " *";
		z++; p--;
		cout << endl; }
	return 0;
}
