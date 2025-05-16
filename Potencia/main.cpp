#include "iostream"

using namespace std;

int mult(int base, int exp);

int main() {
    int base, exp;
    cout << "Digite a base e o expoente inteiros: ";
    cin >> base >> exp;
    cout << "Resultado: " << mult(base, exp) << endl;
    return 0;
}

int mult(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * mult(base, (exp - 1));
}