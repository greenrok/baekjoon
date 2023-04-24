#include <iostream>
// #include <stdlib.h>
using namespace std;

int main()
{
   char ch[8];
   cin >> ch;

   int num = (int)strtol(ch, NULL, 16);

   cout << num << endl;

   return 0;
}