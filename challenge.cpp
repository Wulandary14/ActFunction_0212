#include <iostream>
using namespace std;

//deklarasi variabel global
int D1, D2, luas;

//implementasi procedure
void input(){
    cout << "masukkan diagonal 1 : ";
    cin >> D1;
    cout << "masukkan diagonal 2 : ";
    cin >> D2;
}

//implementasi fungsi
int ProsedureHitungLuas(int D1, int D2){
    return 0.5 * D1 * D2;
}

//implementasi procedure
void output(){
    cout << "Luas Belah Ketupat : " << ProsedureHitungLuas(D1, D2) << endl;
}

int main(){
    input ();
    output ();
    return 0;
}