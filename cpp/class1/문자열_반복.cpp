#include <iostream>
#include <string>
using namespace std;


int main() {
  int cnt, n;
  string s;

  cin>>cnt;

  for (int i=0; i<cnt; i++) {
    cin>>n>>s;

    for (int j=0; j<s.length(); j++) {
      for (int k=0; k<n; k++) {
        cout<<s[j];
      }
    }
    cout<<'\n';
  }

  return 0;
}