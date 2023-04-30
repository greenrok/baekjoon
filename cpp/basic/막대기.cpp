#include <iostream>
using namespace std;

int main()
{
   int arr[100001];
   int n, standard = 0, cnt = 0;
   cin >> n;

   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   for (int i = n - 1; i >= 0; i--)
   {
      if (standard < arr[i])
      {
         cnt++;
         standard = arr[i];
      }
   }

   cout << cnt << endl;

   return 0;
}