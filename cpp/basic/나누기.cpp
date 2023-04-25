#include <iostream>
#include <string>

using namespace std;

int main()
{
   int n, f;
   cin >> n >> f;

   n /= 100;
   n *= 100;

   for (int i = 0; i < 100; i++)
   {
      if ((n + i) % f == 0)
      {
         if (i < 10)
         {
            cout << 0 << i << endl;
            return 0;
         }
         else
         {
            cout << i << endl;
            return 0;
         }
      }
   }
}