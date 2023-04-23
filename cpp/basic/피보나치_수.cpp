#include <iostream>
using namespace std;

int memo[50];

int fibo(int n)
{
   if (n <= 1)
   {
      return n;
   }
   else if (memo[n])
   {
      return memo[n];
   }
   else
   {
      return memo[n] = fibo(n - 1) + fibo(n - 2);
   }
}

int main()
{
   int num, result;
   cin >> num;

   result = fibo(num);

   cout << result << endl;

   return 0;
}