#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n;
   string str;

   cin >> n;

   for (int i = 0; i < n; i++)
   {
      cin >> str;

      int sum = 0, cnt = 1;

      for (int j = 0; j < str.length(); j++)
      {
         if (str[j] == 'O')
         {
            sum += cnt;
            cnt++;
         }
         else if (str[j] == 'X')
         {
            cnt = 1;
         }
      }

      cout << sum << endl;
   }

   return 0;
}