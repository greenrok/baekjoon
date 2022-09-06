#include <iostream>
using namespace std;

// int main() {
//   int n;
//   cin>>n;

//   int arr[1000001];

//   for (int i=0; i<n; i++) {
//     cin>>arr[i];
//   }

//   int max, min;

//   max = min = arr[0];

//   for (int i=1; i<n; i++) {
//     if (max<arr[i]) {
//       max = arr[i];
//     }

//     if (min>arr[i]) {
//       min = arr[i];
//     }
//   }

//   cout << min << ' ' << max;

//   return 0;
// }

int main() {
  int n;
  cin>>n;

  int max = -1000001;
  int min = 1000000;

  for (int i=0; i<n; i++) {
    int x;
    cin >> x;

    if (max < x) {
      max = x;
    }

    if (min > x) {
      min = x;
    }
  }

  cout<<min<<' '<<max;

  return 0;
}