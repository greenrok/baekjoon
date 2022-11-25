#include <iostream>
using namespace std;

int main()
{
   int N, i = 1;

   cin >> N;

   while (N > i)
   {
      N -= i;
      i++;
   }

   if (i % 2 == 0)
   {
      cout << 1 + (N - 1) << '/' << i - (N - 1) << endl;
   }
   else
   {
      cout << i - (N - 1) << '/' << 1 + (N - 1) << endl;
   }

   return 0;
}