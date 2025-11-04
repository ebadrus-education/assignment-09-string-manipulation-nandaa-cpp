#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Belajar bahasa C++";
    cout << "Sebelum erase: " << teks << endl;
    teks.erase(8, 7);
    cout << "Sesudah erase: " << teks << endl;
    return 0;
}