#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int numOfplayer;
   cin >> numOfplayer;

   vector<int> count(26, 0);

   for (int i = 0; i < numOfplayer; i++)
   {
      string player;
      cin >> player;
      count[player[0] - 'a']++;
   }

   bool flag = true;

   for (int i = 0; i < count.size(); i++)
   {
      if (count[i] >= 5)
      {
         cout << (char)(i + 97);
         flag = false;
      }
   }

   if (flag)
   {
      cout << "PREDAJA" << endl;
   }

   return 0;
}