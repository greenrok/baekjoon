#include <iostream>
using namespace std;

int x(int n, int k)
{
   if (k == 0 || k == n)
   {
      return 1;
   }
   return x(n - 1, k - 1) + x(n - 1, k);
}

int main()
{
   int n, k;
   cin >> n >> k;

   cout << x(n, k) << endl;

   return 0;
}