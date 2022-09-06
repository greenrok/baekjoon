#include <iostream>
#include <string>
using namespace std;


int main() {
  int a,b,c;
  string result;
  cin>>a>>b>>c;

  result = to_string(a*b*c);

  int arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

  for (int i=0; i<10; i++) {
    int cnt=0;
    for (int j=0; j<result.length(); j++) {
      if (arr[i] == result[j]) {
        cnt++;
      }
    }

    cout<<cnt<<'\n';
  }

  return 0;
}