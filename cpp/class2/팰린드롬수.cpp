#include <iostream>
using namespace std;

int main()
{
   string s;

   while (true)
   {
      cin >> s;

      if (s == "0")
      {
         return 0;
      }

      int temp = 0;

      for (int i = 0; i < s.length() / 2; i++)
      {
         if (s[i] == s[s.length() - 1 - i])
         {
            temp++;
         }
      }

      if (temp == (int)(s.length() / 2))
      {
         cout << "yes" << '\n';
      }
      else
      {
         cout << "no" << '\n';
      }
   }

   return 0;
}