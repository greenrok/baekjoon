#include <iostream>
#include <vector>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int t, n;
   cin >> t;

   while (t--)
   {
      cin >> n;
      int escape = 0;
      vector<bool> prison(n + 1, false);

      for (int i = 1; i <= n; i++)
      {
         for (int j = i; j <= n; j += i)
         {
            prison[j] = !prison[j];
         }
      }

      for (int i = 1; i <= n; i++)
      {
         if (prison[i])
         {
            escape++;
         }
      }

      cout << escape << endl;
   }

   return 0;
}