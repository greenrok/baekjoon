#include <iostream>
using namespace std;

int main()
{
   char arr[50][50];
   int N, M, i, j;
   cin >> N >> M;
   bool flag;

   int row = N, col = M;

   for (i = 0; i < N; i++)
   {
      flag = true;
      for (j = 0; j < M; j++)
      {
         cin >> arr[i][j];
         if (arr[i][j] == 'X')
         {
            flag = false;
         }
      }
      if (flag == false)
         row--;
   }

   for (j = 0; j < M; j++)
   {
      flag = true;
      for (i = 0; i < N; i++)
      {
         if (arr[i][j] == 'X')
         {
            flag = false;
            break;
         }
      }
      if (flag == false)
         col--;
   }

   cout << max(row, col) << endl;

   return 0;
}