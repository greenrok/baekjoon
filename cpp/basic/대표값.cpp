#include <iostream>
using namespace std;

int main()
{
   int arr[10], check[1001] = {
                    0,
                },
                sum = 0, num = 0;

   for (int i = 0; i < 10; i++)
   {
      cin >> arr[i];
      sum += arr[i];
      check[arr[i]]++;

      int max = 0;

      for (int i = 0; i < 1001; i++)
      {
         if (max < check[i])
         {
            max = check[i];
            num = i;
         }
      }
   }

   cout << sum / 10 << '\n'
        << num << endl;

   return 0;
}