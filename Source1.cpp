#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    int a, b, c;
    setlocale(LC_ALL, "");
    cout << "������� �������� a: ";
    cin >> a;

    cout << "������� �������� b: ";
    cin >> b;

    c = a + b;

    cout << "��������� ��������: " << c << endl;

    return 0;
}
