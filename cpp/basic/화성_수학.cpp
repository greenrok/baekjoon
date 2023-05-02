#include <iostream>
#include <string>
using namespace std;

int main()
{
   double num, t;
   string s;
   cin >> t;

   while (t--)
   {
      cin >> num;
      getline(cin, s);

      for (int i = 0; i < s.length(); i++)
      {
         if (s[i] == '@')
         {
            num *= 3;
         }
         else if (s[i] == '%')
         {
            num += 5;
         }
         else if (s[i] == '#')
         {
            num -= 7;
         }
      }

      printf("%.2f\n", num);
   }

   return 0;
}