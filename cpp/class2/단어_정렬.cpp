#include <iostream>
#include <algorithm>

using namespace std;

int compare(string s1, string s2)
{
   if (s1.length() == s2.length())
   {
      return s1 < s2;
   }
   else
   {
      return s1.length() < s2.length();
   }
}

int main()
{
   int n;
   string word[20000];

   cin >> n;

   for (int i = 0; i < n; i++)
   {
      cin >> word[i];
   }

   sort(word, word + n, compare);

   for (int i = 0; i < n; i++)
   {
      if (word[i] == word[i - 1])
      {
         continue;
      }
      cout << word[i] << '\n';
   }

   return 0;
}