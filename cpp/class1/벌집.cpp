#include <iostream>
using namespace std;

int main()
{
   int n, cnt = 1, sum = 1;
   int i = 1;

   cin >> n;

   if (n == 1)
   {
      cout << sum << endl;
      return 0;
   }

   while (n > sum)
   {
      sum += 6 * i;
      i++;
   }

   cout << i << endl;

   return 0;
}
