#include <iostream>
using namespace std;

int tinhtong(int so1, int so2) {
	return so1 + so2;
}

int main() {
	int so1, so2,tong;
	cout << "Chuong trinh tinh Tong 2 so\n";
	cout << " Nhap so thu nhat : ";
	cin >> so1;
	cout << "Nhap so thu hai : ";
	cin >> so2;
	tong = tinhtong(so1, so2);
	cout << so1 << " + " << so2 << " = " << tong << endl;
	return 0;
}
