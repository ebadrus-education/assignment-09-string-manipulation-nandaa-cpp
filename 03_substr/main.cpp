#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Belajar string di C++";
    string potongan = teks.substr(8, 6); 
    cout << "Teks asli: " << teks << endl;
    cout << "Hasil substr(8,6): " << potongan << endl;
    return 0;
}