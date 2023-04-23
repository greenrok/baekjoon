#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n, b, c;
   long long cnt = 0;
   vector<int> a;

   // 입력
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      int num;
      cin >> num;
      a.push_back(num);
   }
   cin >> b >> c;

   cnt = n;

   for (int i = 0; i < n; i++)
   {
      if (a[i] > b)
      {
         if ((a[i] - b) % c > 0)
         {
            cnt += (a[i] - b) / c + 1;
         }
         else
         {
            cnt += (a[i] - b) / c;
         }
      }
   }

   cout << cnt << endl;

   return 0;
}