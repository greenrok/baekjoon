#include <iostream>
using namespace std;

int main()
{
  string s;
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  int key = 0;
  cin >> s;

  for (int i = 0; i < alphabet.length(); i++)
  {
    for (int j = 0; j < s.length(); j++)
    {
      if (alphabet[i] == s[j])
      {
        cout << j << " ";
        key = 0;
        break;
      }
      else
      {
        key = 1;
      }
    }

    if (key == 1)
    {
      cout << -1 << " ";
    }
  }

  return 0;
}