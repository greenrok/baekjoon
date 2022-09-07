#include <iostream>
using namespace std;

int alpha[26], cnt = 0;
string str;

int main()
{
   cin >> str;

   // 글자 수 카운트
   for (int i = 0; i < str.length(); i++)
   {
      if (str[i] < 97)
      {
         alpha[str[i] - 65]++;
      }
      else
      {
         alpha[str[i] - 97]++;
      }
   }

   // 글자 수 비교하기
   int max = 0, num = 0;

   for (int i = 0; i < 26; i++)
   {
      if (max < alpha[i])
      {
         max = alpha[i];
         num = i;
      }
   }
   for (int i = 0; i < 26; i++)
   {
      if (max == alpha[i])
      {
         cnt++;
      }
   }

   if (cnt > 1)
   {
      cout << '?';
   }
   else
   {
      cout << (char)(num + 65);
   }

   return 0;
}