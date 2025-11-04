#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string teks = "Halo Dunia!";
    string besar = teks;
    string kecil = teks;
    for (char &c : besar) c = toupper(c);
    for (char &c : kecil) c = tolower(c);
    cout << "Teks asli: " << teks << endl;
    cout << "Uppercase: " << besar << endl;
    cout << "Lowercase: " << kecil << endl;
    return 0;
}