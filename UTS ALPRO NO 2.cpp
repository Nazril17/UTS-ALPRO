#include <iostream>
using namespace std;

int main () {
    int n;

    cout << "Masukkan Panjang Pola Bintang: ";
    cin >> n;

    cout << "Pola 1\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cin.get();
    return 0;
}
