#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a)
{
   long long add = 0;

   for (int i = 0; i < a.size(); i++)
   {
      add += a[i];
   }

   return add;
}

int main()
{
   vector<int> v;
   int n;

   cin >> n;

   for (int i = 0; i < n; i++)
   {
      cin >> v[i];
   }

   cout << sum(v);

   return 0;
}