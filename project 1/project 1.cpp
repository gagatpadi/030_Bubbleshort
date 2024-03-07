#include <iostream>
using namespace std;

int arr[20];
int n;



void bubbleShortArray() {
	int pass = 1;

	do {
		for (int j = 0; j <= n - 1 - pass; j ++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		pass = pass + 1;

		cout << "\nPass " << pass - 1 << "; ";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";

		}
		cout << endl;

	} while (pass <= n - 1);    //step 5
}

void display() {
	cout << endl;
	cout << "============================" << endl;
	cout << "ELement Array yang telah tersusun" << endl;
	cout << "============================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j];
		if (j < n - 1) {
			cout << " -->";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main() {
	input();   // call the input function to get user input
	bubbleShortArray();  //call the selection sort function
	display();  // display the sorted array
	system("pause");

	return 0;
}