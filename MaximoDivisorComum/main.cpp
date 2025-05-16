#include "iostream"

using namespace std;

int mdc(int a, int b);

int main () {
    int a, b;
    cout << "Digite dois numeros inteiros: ";
    cin >> a >> b;
    cout << "Resultado: " << mdc(a, b) << endl;
    return 0;
}

int mdc (int a, int b) {
    if (b > a) {
        return a;
    }
    return mdc((a - b), b);
}