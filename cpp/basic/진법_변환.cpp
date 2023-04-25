#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   string n;
   int b, sum = 0;
   cin >> n >> b;

   for (int i = 0; i < n.length(); i++)
   {
      if (n[i] >= '0' && n[i] <= '9')
      {
         sum += ((n[i] - '0') * (int)pow(b, n.length() - i - 1));
      }
      else
      {
         sum += ((n[i] - 55) * (int)pow(b, n.length() - i - 1));
      }
   }

   cout << sum << endl;

   return 0;
}