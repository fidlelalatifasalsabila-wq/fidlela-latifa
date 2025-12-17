#include <iostream>
using namespace std;
int main() {
	int baris = 6;

	for (int i = baris; i >= 1; i--) {
		for (int l = 0; l < baris - i; l++) {
			cout << " ";
		}

		for (int j = 1; j <= (2 * i - 1); j++) {
			cout << ",";
		}
		cout << endl;
	}

}