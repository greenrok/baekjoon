#include <iostream>
#include <map>
using namespace std;

// map을 사용하는 방법

int main()
{
   int arr[10];
   int sum = 0;
   map<int, int> freq;

   for (int i = 0; i < 10; i++)
   {
      cin >> arr[i];
      sum += arr[i];
      freq[arr[i]]++;
   }

   int max_freq = 0, mode;
   for (auto it = freq.begin(); it != freq.end(); it++)
   {
      if (it->second > max_freq)
      {
         max_freq = it->second;
         mode = it->first;
      }
   }

   cout << sum / 10 << '\n'
        << mode << endl;

   return 0;
}