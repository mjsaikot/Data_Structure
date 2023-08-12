#include <bits/stdc++.h>

using namespace std;

int main() {
   int n;
   cin >> n;
   int a[n];
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
    //O_(N*N) time complexity use in nested loop;
   for (int i = 0; i < n - 1; i++) {
      for (int j = i; j < n; j++) {
         int tmp = a[i];
         a[i] = a[j];
         a[j] = tmp;
      }
   }
   for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
   }
   return 0;
}