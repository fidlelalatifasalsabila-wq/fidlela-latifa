#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int counter = 1;
    int baris = 4;
    int kolom = 4;

    cout << "Matriks 4x4 :" << endl;
   
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << setw(4) << counter;
            counter++;
        }
        cout << endl;
    }

    return 0;
}