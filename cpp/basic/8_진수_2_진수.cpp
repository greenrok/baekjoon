#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string change8to2(char c)
{
   string result = "";
   int num = c - '0';

   if (num == 0)
   {
      return "0";
   }

   while (num != 0)
   {
      result += to_string(num % 2);
      num /= 2;
   }

   reverse(result.begin(), result.end());

   return result;
}

int main()
{
   string octal;
   cin >> octal;

   for (int i = 0; i < octal.length(); i++)
   {
      if (i == 0)
      {
         cout << change8to2(octal[i]);
      }
      else
      {
         string temp;
         temp = change8to2(octal[i]);
         while (temp.length() != 3)
         {
            temp = '0' + temp;
         }
         cout << temp;
      }
   }

   return 0;
}