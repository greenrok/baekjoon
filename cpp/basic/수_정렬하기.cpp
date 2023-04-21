#include <iostream>
using namespace std;

int main()
{
   int n, m[1001];
   cin >> n;

   for (int i = 0; i < n; i++)
   {
      cin >> m[i];
   }

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < i; j++)
      {
         int temp;
         if (m[j] > m[i])
         {
            temp = m[j];
            m[j] = m[i];
            m[i] = temp;
         }
      }
   }

   for (int i = 0; i < n; i++)
   {
      cout << m[i] << endl;
   }

   return 0;
}