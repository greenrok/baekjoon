#include <iostream>
using namespace std;


int main() {
  int cnt, sum=0;
  char c;

  cin>>cnt;
  for(int i=0; i<cnt; i++) {
    cin>>c;
    sum += (int)c - 48;
  }

  cout<<sum;

  return 0;
}