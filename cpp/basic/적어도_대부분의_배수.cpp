#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int i, count = 0, result;
   int arr[5];

   for (i = 0; i < 5; i++)
   {
      cin >> arr[i];
   }

   sort(arr, arr + 5);

   result = arr[0];

   while (count < 3)
   {
      count = 0;

      for (i = 0; i < 5; i++)
      {
         if (result % arr[i] == 0)
         {
            count++;

            if (count >= 3)
            {
               cout << result << endl;
               return 0;
            }
         }
      }

      result++;
   }

   return 0;
}