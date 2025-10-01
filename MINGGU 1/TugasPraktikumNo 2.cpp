#include <iostream>
using namespace std;

void hitunganmatematika(int *x , int y, int *z){
  *x = 0;
  *z = 1;
  for (int n=1; n<=y; n++){
      *x += n*n;
      *z *= (2*n-1);
  }
}

int main()
{
  int x;
  int z;
  int y;


  cout << "Masukkan Y";
  cin >> y;


  hitunganmatematika(&x, y, &z);
  cout << "Hasil penjumlahan kuadrat " <<x << endl;
  cout << "Hasil perkalian kuadrat " <<z << endl;


  return 0;
}
