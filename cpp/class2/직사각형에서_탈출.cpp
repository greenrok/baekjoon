#include <iostream>
using namespace std;

int main()
{
   int x, y, w, h;
   int a, b;
   cin >> x >> y >> w >> h;

   a = min(x, y);
   b = min(w - x, h - y);
   cout << min(a, b) << endl;
}

// int main()
// {
//    int arr[4];

//    for (int i = 0; i < 4; i++)
//    {
//       cin >> arr[i];
//    }

//    arr[2] -= arr[0];
//    arr[3] -= arr[1];

//    int min = 1001;

//    for (int i = 0; i < 4; i++)
//    {
//       if (min > arr[i])
//       {
//          min = arr[i];
//       }
//    }

//    cout << min;

//    return 0;
// }