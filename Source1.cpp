#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    int a, b, c;
    setlocale(LC_ALL, "");
    cout << "¬ведите значение a: ";
    cin >> a;

    cout << "¬ведите значение b: ";
    cin >> b;

    c = a + b;

    cout << "–езультат сложени€: " << c << endl;

    return 0;
}
