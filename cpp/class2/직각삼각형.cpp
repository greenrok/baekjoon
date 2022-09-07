#include <iostream>
using namespace std;

int main()
{
   int a, b, c;
   int temp;

   while (true)
   {
      cin >> a >> b >> c;

      if (a == 0 && b == 0 && c == 0)
      {
         break;
      }
      else
      {
         if (a > b)
         {
            temp = a;
            a = b;
            b = temp;
         }
         if (b > c)
         {
            temp = b;
            b = c;
            c = temp;
         }
         a *= a;
         b *= b;
         c *= c;
         if (c == a + b)
         {
            cout << "right" << '\n';
         }
         else
         {
            cout << "wrong" << '\n';
         }
      }
   }

   return 0;
}