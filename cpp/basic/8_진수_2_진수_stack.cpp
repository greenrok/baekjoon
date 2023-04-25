#include <iostream>
#include <stack>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   stack<int> sk;
   string octal;
   cin >> octal;

   if (octal == "0")
   {
      cout << 0 << '\n';
   }
   else
   {
      int len = octal.length();
      for (int i = len - 1; i >= 0; i--)
      {
         int num = octal[i] - '0';
         for (int j = 0; j < 3; j++)
         {
            sk.push(num % 2);
            num /= 2;
         }
      }

      while (!sk.top())
      {
         sk.pop();
      }

      while (!sk.empty())
      {
         cout << sk.top();
         sk.pop();
      }
   }

   return 0;
}