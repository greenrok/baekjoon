#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b, max;

  cin>>a>>b;

  for (int i=2; i>=0; i--) {
    if (a[i] > b[i]) {
      max = a;
    } else if (a[i] < b[i]) {
      max = b;
    }
  }

  for (int i=2; i>=0; i--) {
    cout<<max[i];
  }

  return 0;
}

// string ch_num(string x) {
//   char temp;
//   temp = x[0];
//   x[0] = x[2];
//   x[2] = temp;

//   return x;
// }

// int ret_max(int x, int y) {
//   if (x > y) {
//     return x;
//   } else {
//     return y;
//   }
// }

// int main() {
//   int a, b, result;
//   string c, d;

//   cin>>c>>d;

//   c = ch_num(c);
//   d = ch_num(d);

//   a = stoi(c);
//   b = stoi(d);

//   result = ret_max(a, b);

//   cout<<result<<endl;

//   return 0;
// }

