#include <iostream>
using namespace std;

int main()
{
   int arr[5];

   for (int i = 0; i < 3; i++)
   {
      cin >> arr[i];
   }

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < i; j++)
      {
         int temp;
         if (arr[i] < arr[j])
         {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
   }

   cout << arr[1] << endl;

   return 0;
}