#include <iostream>
using namespace std;


void balikArray(int *arr, int n) {
   int *poin1 = arr;
   int *poin2 = arr + n - 1;


   for (int i = 0; i < n / 2; i++) {
       int temp = *(poin1 + i);
       *(poin1 + i) = *(poin2 - i);
       *(poin2 - i) = temp;
   }
}


void cetakArray(int *arr, int n) {
   for (int i = 0; i < n; i++) {
       cout << *(arr + i) << " ";
   }
   cout << endl;
}
int main() {
   int n;
   cout << "Masukkan ukuran array (maks 99): ";
   cin >> n;


   if (n > 99 || n <= 0) {
       cout << "Ukuran array tidak valid!" << endl;
       return 1;
   }


   int array[99];


   cout << "Masukkan elemen array: ";
   for (int i = 0; i < n; i++) {
       cin >> *(array + i);
   }


   cout << "Array sebelum dibalik: ";
   cetakArray(array, n);


   balikArray(array, n);


   cout << "Array sesudah dibalik: ";
   cetakArray(array, n);


   return 0;
}
