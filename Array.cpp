#include <iostream>
using namespace std;


int main(){
//deklarasi dg inisialisasi
   int aku [5] = {10,20,30,40,50};
//deklarasi tanpa inisialisasi  
   int kamu[5];
//data pa
   cout << "Data pada index 1 = " << aku[1] << endl;
//ganti index ke 1
   aku[1] = 200;
   cout << "Data pada index 1 = " << aku[1] << endl;
   cout << "Data index 1 = " << aku[1] << endl;
   cout << "Data index 0 = ";
   cin >> kamu[0];
   cout << "Data index 1 = ";
   cin >> kamu[1];
   cout << "Data index 2 = ";
   cin >> kamu[2];
   cout << "Data index 3 = ";
   cin >> kamu[3];
   cout << "Data index 4 = ";
   cin >> kamu[4];
   cout << endl;
       


}
