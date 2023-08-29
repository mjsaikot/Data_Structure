#include <bits/stdc++.h>
/*Given a number N and an array A of N numbers. Print the array in a reversed order.
Note: Don't use built-in-functions.*/
using namespace std;

int main() {
   int n;
   cin >> n;
   vector < int > a(n);
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
   for (int i = 0; i < n - 1; i++) {
      for (int j = i; j < n; j++) {
         int tmp = a[i];
         a[i] = a[j];
         a[j] = tmp;
      }
   }
   for (int b: a) {
      cout << b << " ";
   }

   return 0;
}
