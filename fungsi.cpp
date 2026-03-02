//library
#include <iostream>
using namespace std;

//deklarasi variabel
int p, l;

//implementasi fungsi dan prosedur
void input(){
    cout << "masukkan panjang : ";
    cin >> p;
    cout << "masukkan lebar : ";
    cin >> l;
}
int luasPersegi(){
    return p * l;
}
void output(){
    cout << "hasilnya : " << luasPersegi();
}
int main(){ //mulai
    input();
output();
 } //selesai