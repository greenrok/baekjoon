#include <iostream>
using namespace std;

int get_num(int k, int n)
{
   if (n == 1)
   {
      return 1;
   }
   if (k == 0)
   {
      return n;
   }
   return (get_num(k - 1, n) + get_num(k, n - 1));
}

int main()
{
   int num, k, n;

   cin >> num;

   for (int i = 0; i < num; i++)
   {
      cin >> k >> n;
      cout << get_num(k, n) << endl;
   }

   return 0;
}