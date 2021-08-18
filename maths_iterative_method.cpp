#include<iostream>
#include<conio.h>
using namespace std;
int main(void) {
   float a[10][10], b[10], m[10], n[10];
   int p = 0, q = 0, i = 0, j = 0;
   cout << "Enter size of 2D array : ";
   cin >> p;
   for (i = 0; i < p; i++) {
      for (j = 0; j < p; j++) {
         cout << "a[" << i << ", " << j << " ]=";
         cin >> a[i][j];
      }
   }
   cout << "\nEnter values to the right side of equation\n";
   for (i = 0; i < p; i++) {
      cout << "b[" << i << ", " << j << " ]=";
      cin >> b[i];
   }
   cout << "Enter initial values of x\n";
   for (i = 0; i < p; i++) {
      cout << "x:[" << i<<"]=";
      cin >> m[i];
   }
   cout << "\nEnter the no. of iteration : ";
   cin >> q;
   while (q> 0) {
      for (i = 0; i < p; i++) {
         n[i] = (b[i] / a[i][i]);
         for (j = 0; j < p; j++) {
            if (j == i)
               continue;
            n[i] = n[i] - ((a[i][j] / a[i][i]) * m[j]);
            m[i] = n[i];
         }
         cout<<"x"<<i + 1 << "="<<n[i]<<" ";
      }
      cout << "\n";
      q--;
   }
   return 0;
}