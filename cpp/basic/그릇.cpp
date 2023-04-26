#include <iostream>
#include <vector>
using namespace std;

int main()
{
   string bowl;
   cin >> bowl;
   int cnt = 10;

   for (int i = 1; i < bowl.length(); i++)
   {
      if (bowl[i] == bowl[i - 1])
      {
         cnt += 5;
      }
      else
      {
         cnt += 10;
      }
   }

   cout << cnt << endl;

   return 0;
}