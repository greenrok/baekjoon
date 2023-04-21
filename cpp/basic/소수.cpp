#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int m, n;      // define m, n
   cin >> m >> n; // get m, n

   vector<int> v; // create vector

   int sum = 0; // define sum;

   for (int i = m; i < n + 1; i++)
   {
      int count = 0;

      for (int j = 1; j < i + 1; j++)
      {
         if (i % j == 0)
         {
            count++;
         }

         if (count > 2)
         {
            break;
         }
      }

      if (count == 2)
      {
         v.push_back(i); // push the value for vector 'v'
      }
   }

   if (v.empty())
   {
      cout << -1;
      return 0;
   }
   else
   {
      for (int i = 0; i < v.size(); i++)
      {
         sum += v[i];
      }
   }

   cout << sum << '\n'
        << v[0] << endl;

   return 0;
}