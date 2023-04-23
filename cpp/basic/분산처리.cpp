#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
   int t, value;
   cin >> t;

   for (int i = 0; i < t; i++)
   {
      int n1, n2;
      cin >> n1 >> n2;

      if (n2 % 4 == 0)
         n2 = 4;
      else
         n2 %= 4;

      value = pow(n1, n2);

      if (value % 10 == 0)
      {
         cout << 10 << endl;
      }
      else
      {
         cout << value % 10 << endl;
      }
   }

   return 0;
}