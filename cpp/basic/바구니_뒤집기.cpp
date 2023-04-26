#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;

   vector<int> v;

   for (int i = 1; i < n + 1; i++)
   {
      v.push_back(i);
   } // vector v 1~5까지 초기화

   for (int i = 0; i < m; i++)
   {
      int a, b, num;
      cin >> a >> b;
      a -= 1;
      b -= 1;

      if ((b - a) % 2 == 1)
      {
         num = (b - a) / 2 + 1;
      }
      else
      {
         num = (b - a) / 2;
      }

      for (int j = 0; j < num; j++)
      {
         int temp;
         temp = v[a + j];
         v[a + j] = v[b - j];
         v[b - j] = temp;
      }
   }
   for (int i = 0; i < n; i++)
   {
      cout << v[i] << ' ';
   }

   return 0;
}