#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {
		cout << "Masukan banyaknya alasan pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";
		}
		
	}

		cout << endl;
		cout << "====================" << endl;
		cout << "Masukan Elemen Array" << endl;
		cout << "====================" << endl;

		for (int i = 0; i < n; i++) {
			cout << "Data ke-" << (i + 1) << "; ";
			cin >> arr[i];
		}
	
}

