#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> v;
   int sum = 0;

   for (int i = 0; i < 5; i++)
   {
      int num;
      cin >> num;
      sum += num;
      v.push_back(num);
   }

   for (int i = 1; i < 5; i++)
   {
      for (int j = 0; j < i; j++)
      {
         int temp;
         if (v[j] > v[i])
         {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
         }
      }
   }

   cout << sum / 5 << '\n'
        << v[2] << endl;

   return 0;
}