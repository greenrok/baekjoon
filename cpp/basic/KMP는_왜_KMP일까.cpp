#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
   string s;
   cin >> s;

   vector<char> v;

   v.push_back(s[0]);

   for (int i = 1; i < s.length(); i++)
   {
      if (s[i] == '-')
      {
         v.push_back(s[i + 1]);
      }
   }

   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i];
   }

   return 0;
}