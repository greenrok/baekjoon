#include <iostream>
using namespace std;

int main()
{
   int n1;
   char n2[4];

   cin >> n1 >> n2;

   cout << n1 * (n2[2] - '0') << '\n';
   cout << n1 * (n2[1] - '0') << '\n';
   cout << n1 * (n2[0] - '0') << '\n';
   cout << n1 * atoi(n2) << endl;

   return 0;
}