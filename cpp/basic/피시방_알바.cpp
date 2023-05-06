#include <iostream>
using namespace std;

int main()
{
   int n, deny = 0;

   int arr[101] = {
       0,
   };

   cin >> n;

   for (int i = 0; i < n; i++)
   {
      int seat;
      cin >> seat;

      if (arr[seat] == 0)
      {
         arr[seat] = 1;
      }
      else if (arr[seat] != 0)
      {
         deny++;
      }
   }

   cout << deny << endl;

   return 0;
}