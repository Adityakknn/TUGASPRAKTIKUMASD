#include <iostream>
using namespace std;

void hitungganjil(int *x, int y){
   *x=0;
   for(int i=1; i<=y; i+=2){
       *x +=i;
   }
}

int main()
{
   int y;
   int jumlah;
  
   cout << "inputkan Y";
   cin >> y;
  
   hitungganjil(&jumlah, y);
  
   cout<< "Jumlah bilangan ganjil dari 1 sampai"<<y<< " adalah " << jumlah;
  
   return 0;
}
