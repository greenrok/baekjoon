#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int m, n;
   cin >> m >> n;
   vector<int> v;
   int cnt = 0, sum = 0;
   ;

   for (int i = m; i < n + 1; i++)
   {
      for (int j = 1; j < i + 1; j++)
      {
         if (j * j == i)
         {
            int num;
            num = i;
            cnt++;
            sum += num;
            v.push_back(num);
         }
      }
   }

   if (cnt == 0)
   {
      cout << -1 << endl;
      return 0;
   }
   else
   {
      for (int i = 0; i < v.size(); i++)
      {
         for (int j = 0; j < i; j++)
         {
            if (v[i] < v[j])
            {
               int temp;
               temp = v[i];
               v[i] = v[j];
               v[j] = temp;
            }
         }
      }
   }

   cout << sum << '\n'
        << v[0] << endl;
   return 0;
}