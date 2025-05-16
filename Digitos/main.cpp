#include "iostream"

using namespace std;

int Digitos(int n);

int main () {
    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;
    cout << "Resultado: " << Digitos(n) << endl;
    return 0;
}

int Digitos (int n) {
    if (n <= 10)
        return 1;
    return 1 + Digitos(n/10);
}