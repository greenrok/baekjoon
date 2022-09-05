#include <iostream>
using namespace std;


int main() {
  int n, m;

  cin>>n;
  m = n;

  for (int i=0; i<m; i++) {
    cout<<n<<'\n';
    n--;
  }

  return 0;
}