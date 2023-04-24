#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<int> v;
   int n, k;

   cin >> n >> k;
   for (int i = 0; i < n; i++)
   {
      int num;
      cin >> num;
      v.push_back(num);
   }

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < i; j++)
      {
         if (v[i] > v[j])
         {
            int temp;
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
         }
      }
   }

   cout << v[k - 1] << endl;

   return 0;
}