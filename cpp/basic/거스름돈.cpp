#include <iostream>
using namespace std;

int main()
{
   int price;
   cin >> price;

   price = 1000 - price;

   int change[6] = {500, 100, 50, 10, 5, 1};
   int cnt = 0;

   for (int i = 0; i < 6; i++)
   {
      if (price - change[i] >= 0)
      {
         cnt += (price / change[i]);
         price -= change[i] * (price / change[i]);
      }
   }

   cout << cnt << endl;

   return 0;
}