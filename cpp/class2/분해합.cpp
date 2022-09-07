#include <iostream>
using namespace std;

int main()
{
   int n, result, some;

   cin >> n;

   for (int i = 0; i < n; i++)
   {
      result = some = i;

      while (some)
      {
         result += some % 10;
         some /= 10;
      }

      if (result == n)
      {
         cout << i << endl;
         return 0;
      }
   }

   cout << 0 << endl;

   return 0;
}