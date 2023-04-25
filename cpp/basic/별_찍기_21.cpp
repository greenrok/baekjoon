#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int num;
   cin >> num;
   vector<vector<char>> v(num * 2, vector<char>(num, ' '));

   if (num == 1)
   {
      cout << "*";
   }
   else
   {
      for (int i = 0; i < num * 2; i++)
      {
         for (int j = 0; j < num; j++)
         {
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0))
            {
               v[i][j] = '*';
            }
            else
            {
               v[i][j] = ' ';
            }

            cout << v[i][j];
         }
         cout << '\n';
      }
   }

   return 0;
}