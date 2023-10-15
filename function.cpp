#include <iostream>
using namespace std;


int luaslingkaran(){
	float phi = 3.14;
	int r;
	cout << "Luas lingkaran : " << endl;
	cout << "Masukkan jari-jari dalam cm" << endl;
	cin >> r;
	cout << "Hasil luas lingkaran adalah " << phi*r*r << endl;
}

int main(){
	luaslingkaran();
}
