#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks = "Saya suka kopi";
    cout << "Sebelum replace: " << teks << endl;
    teks.replace(10, 4, "teh");
    cout << "Sesudah replace: " << teks << endl;
    return 0;
}