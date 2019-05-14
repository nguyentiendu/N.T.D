#include<bits/stdc++.h>
using namespace std;

int main() 
{
   int a[2][2], b[2][1], d[2][2], c[2][1], i, j, k;
   int sum = 0;
   int n;
   cout<<"Ban muon tim so fibo thu: ";
   cin>>n;
   cout<<"Nhap ma tran dau tien:"<<endl;
   for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
         cin>>a[i][j];
      }
   }

   for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
         cin>>d[i][j];
      }
   }

   cout<<"Nhap ma tran thu hai:"<<endl;
   for (i = 0; i < 2; i++) {
      for (j = 0; j < 1; j++) {
         cin>>b[i][j];
      }
   }
   if (n!=1)
   {
      while(n>1)
      {
         for (i = 0; i <= 1; i++) {
            for (j = 0; j <= 1; j++) {
               sum = 0;
               for (k = 0; k <= 1; k++) {
                  sum = sum + a[i][k] * d[k][j];
               }
               d[i][j] = sum;
            }
         }
         n--;
      }
      for (i = 0; i <= 1; i++) {
         for (j = 0; j <= 1; j++) {
            sum = 0;
            for (k = 0; k <= 1; k++) {
               sum = sum + d[i][k] * b[k][j];
            }
            c[i][j] = sum;
         }
      }
   }
   else
   {
      for (i = 0; i <= 1; i++) {
         for (j = 0; j <= 1; j++) {
            sum = 0;
            for (k = 0; k <= 1; k++) {
               sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
         }
      }
   }
   cout<<"Tich cua hai ma tran la:"<<endl;
   for (i = 0; i < 2; i++) {
      for (j = 0; j < 1; j++) {
         cout<<c[i][j]<<" ";
      }
      cout<<endl;
   }

   return (0);
}