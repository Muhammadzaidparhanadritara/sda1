#include <iostream>
using namespace std;

int main() {
    char operasi;
    float angka1, angka2;

    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operasi;

    cout << "masukkan angka pertama : " << endl; cin >> angka1;
    cout << "masukkan angka kedua : " << endl; cin >> angka2;

    switch (operasi) {
        case '+':
            cout << angka1 << " + " << angka2 << " = " << angka1 + angka2;
            break;
        case '-':
            cout << angka1 << " - " << angka2 << " = " << angka1 - angka2;
            break;
        case '*':
            cout << angka1 << " * " << angka2 << " = " << angka1 * angka2;
            break;
        case '/':
            if (angka2 != 0)
                 cout << angka1 << " / " << angka2 << " = " << angka1 / angka2;
            else
                 cout << "Error: Pembagian dengan nol!";
            break;
        default:
            cout << "Error: Operator yang dimasukkan tidak valid.";
            break;
    }

    return 0;
}

