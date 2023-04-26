#include <iostream>
using namespace std;

int main()
{
   int n, k, s, y;
   cin >> n >> k;

   int arr[6][2] = {
       0,
   }; // 2차원 배열 0으로 초기화

   for (int i = 0; i < n; i++)
   {
      cin >> s >> y;
      arr[y - 1][s]++;
   }

   int cnt = 0; // 카운터 생성

   for (int i = 0; i < 6; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         if (arr[i][j] != 0)
         {
            if (arr[i][j] % k != 0)
            {
               cnt += (arr[i][j] / k) + 1;
            }
            else if (arr[i][j] / k == 0)
            {
               cnt++;
            }
            else
            {
               cnt += arr[i][j] / k;
            }
         }
      }
   }

   cout << cnt << endl;

   return 0;
}