#include <iostream>

using namespace std;

int main () {
		char bidang;
	double p,L,a,t,l;
	cout << "Pilih bidang : ";
	cin >> bidang;
	 if (bidang == 'P' || bidang == 'p') {
	 	
	 	cout << "Masukkan panjangnya : ";
	 	cin >> l;
		cout << "Masukkan lebarnya   : ";
	 	cin >> p;
	 	L = p*l;
	 	cout <<"Luas persegi panjang : "<< L<<endl;	 	
}
 else if (bidang == 'S' || bidang == 's') {
	 	
	 	cout << "Masukkan alasnya   : ";
	 	cin >> a;
		cout << "Masukkan tingginya : ";
	 	cin >> t;
	 	L = 0.5*a*t;
	 	cout <<"Luas segitiga : "<< L<<endl;
	 	
	 }
 else {
	 	cout << "Maaf, Kesalahan dalam menentukan bidang";
	 }
}
