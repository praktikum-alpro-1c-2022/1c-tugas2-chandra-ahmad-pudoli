#include <iostream>

using namespace std;

int main(){
    int a, b, t;
    float hitungLuas;

    cout << "Masukan nilai sisi a: ";
    cin >> a;

    cout << "Masukan nilai sisi b: ";
    cin >> b;

    cout << "Masukan Tinggi: ";
    cin >> t;

    hitungLuas = 0.5 * (a + b) * t;

    cout << "Luas trapesium adalah: " << hitungLuas << endl;

  return 0;
}
