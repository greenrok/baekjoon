#include <iostream>
using namespace std;

int n;

int main()
{
   cin >> n;
   double arr[1000] = {};
   double max, sum = 0;

   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
      if (max < arr[i])
      {
         max = arr[i];
      }
   }

   for (int i = 0; i < n; i++)
   {
      arr[i] = arr[i] / max * 100.0;
      sum += arr[i];
   }

   cout << sum / (double)n;

   return 0;
}