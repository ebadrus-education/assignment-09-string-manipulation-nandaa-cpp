#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "Belajar ";
    string b = "C++";
    string gabung1 = a;
    gabung1.append(b);
    string gabung2 = a + b;
    cout << "Menggunakan append(): " << gabung1 << endl;
    cout << "Menggunakan +: " << gabung2 << endl;
    return 0;
}