#include <iostream>
using namespace std;

int main()
{
   int arr[42] = {}; // 초기화 필수
   int n, cnt = 0;

   for (int i = 0; i < 10; i++)
   {
      cin >> n;
      arr[n % 42]++;
   }

   for (int v : arr)
   {
      if (v != 0)
      {
         cnt++;
      }
   }

   cout << cnt;

   return 0;
}