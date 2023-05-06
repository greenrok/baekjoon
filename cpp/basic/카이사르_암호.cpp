#include <iostream>
#include <string>
using namespace std;

int main()
{
   char crypto[26] = {'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C'};
   char solved[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

   string s;
   cin >> s;

   for (int i = 0; i < s.length(); i++)
   {
      for (int j = 0; j < 26; j++)
      {
         if (s[i] == crypto[j])
         {
            cout << solved[j];
         }
      }
   }

   return 0;
}