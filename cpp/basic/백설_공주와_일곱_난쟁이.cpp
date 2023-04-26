#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> v;
   int sum = 0;
   int del1, del2;

   for (int i = 0; i < 9; i++)
   {
      int num;
      cin >> num;
      sum += num;
      v.push_back(num);
   } // vector v에 데이터 입력

   for (int i = 0; i < 9; i++)
   {
      for (int j = 0; j < 9; j++)
      {
         if (sum - v[i] - v[j] == 100)
         {
            del1 = i;
            del2 = j;
         }
      }
   }

   v.erase(v.begin() + del1);
   v.erase(v.begin() + del2);

   for (int i = 0; i < 7; i++)
   {
      cout << v[i] << '\n';
   }

   return 0;
}