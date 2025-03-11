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

void bubbleshortarray() { 
	int pass = 1;
	do {
		for (int j = 0; j <= n - 1 - pass; j++) { 
			if (arr[j] > arr[j + 1]) {           
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		pass = pass + 1;     

		cout << "\npass " << pass - 1 << ": "; // output ke layar
		for (int k = 0; k < n; k++) {        // looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";           //output ke layar

		}
		cout << endl;
	} while (pass <= n - 1);   //step 5
}
