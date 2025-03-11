#include <iostream>
using namespace std;

int arr[20];           //deklarasi array a dengan ukuran 20
int n;                 //deklarasi variabel n untuk menyimpan banyaknya elemen

void input() {         //prosedur untuk input
	while (true) {
		cout << "masukan banyaknya elemen pada array : ";   
		cin >> n; 
		if (n <= 20) 
			break; 
		else {     
			cout << "\narray dapat mempunyai maksimal 20 elemen.\n"; 
		}
	}
	cout << endl;                          
	cout << "===================" << endl; 
	cout << "masukan elemen array" << endl;
	cout << "===================" << endl; 

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}