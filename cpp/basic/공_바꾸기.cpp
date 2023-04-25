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
   }

   for (int i = 0; i < m; i++)
   {
      int a, b, temp;
      cin >> a >> b;
      temp = v[a - 1];
      v[a - 1] = v[b - 1];
      v[b - 1] = temp;
   }

   for (int k = 0; k < n; k++)
   {
      cout << v[k] << ' ';
   }

   return 0;
}