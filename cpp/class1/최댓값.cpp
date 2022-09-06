#include <iostream>
using namespace std;


int main() {
  int arr[10];
  int max, n;
  int i=0, cnt=1;


  while (cin>>n) {
    arr[i] = n;
    i++; 
  }

  max = arr[0];

  for (int i=1; i<9; i++) {
    if (max<arr[i]) {
      max = arr[i];
      cnt = i+1;
    } 
  }

  cout<<max<<'\n'<<cnt;

  return 0;
}