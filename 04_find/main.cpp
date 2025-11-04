#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Saya belajar C++ di sekolah";
    size_t posisi = teks.find("C++");
    if (posisi != string::npos) {
        cout << "\"C++\" ditemukan pada indeks ke-" << posisi << endl;
    } else {
        cout << "Teks tidak ditemukan" << endl;
    }
    return 0;
}