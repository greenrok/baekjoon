#include <iostream>
#include <string>
using namespace std;

int main()
{
   int min, max;
   string a, b;

   cin >> a >> b;

   for (int i = 0; i < a.length(); i++)
   {
      if (a[i] == '6')
      {
         a[i] = '5';
      }
      if (b[i] == '6')
      {
         b[i] = '5';
      }
   }

   min = stoi(a) + stoi(b);

   for (int i = 0; i < a.length(); i++)
   {
      if (a[i] == '5')
      {
         a[i] = '6';
      }
      if (b[i] == '5')
      {
         b[i] = '6';
      }
   }

   max = stoi(a) + stoi(b);

   cout << min << ' ' << max << endl;

   return 0;
}