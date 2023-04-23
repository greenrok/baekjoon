#include <iostream>
#include <string>
using namespace std;

int main()
{
   string word;
   cin >> word;
   bool flag = true;

   for (int i = 0; i < word.length() / 2; i++)
   {
      if (word[i] != word[word.length() - i - 1])
      {
         flag = false;
         break;
      }
   }

   if (flag == true)
   {
      cout << 1 << endl;
   }
   else
   {
      cout << 0 << endl;
   }

   return 0;
}