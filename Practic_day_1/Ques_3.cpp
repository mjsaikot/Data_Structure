/*Given a number N and an array A of N numbers. Print the array after doing the following operations:
Replace every positive number by 1.
Replace every negative number by 2.*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector < int > a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      a[i] = 1;
    } else if (a[i] < 0) {
      a[i] = 2;
    } else {
      a[i] = 0;
    }
  }
  for (int b: a) {
    cout << b << " ";
  }

  return 0;
}