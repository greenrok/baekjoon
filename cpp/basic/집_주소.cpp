#include <iostream>
using namespace std;

int main()
{
   int N;
   int cnt, len;

   while (cin >> N)
   {
      cnt = 0;
      len = 0;
      if (N == 0)
         break;

      while (1)
      {
         if (N % 10 == 0)
         {
            len += 4;
         }
         else if (N % 10 == 1)
         {
            len += 2;
         }
         else
         {
            len += 3;
         }

         N /= 10;
         cnt++;

         if (N <= 0)
            break;
      }
      cout << len + cnt + 1 << endl;
   }

   return 0;
}