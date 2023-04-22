#include <iostream>
using namespace std;

int main()
{
   int h, m, cook;
   cin >> h >> m >> cook;

   int min;
   min = (h * 60) + m + cook;

   h = (min / 60) % 24;
   m = min % 60;

   cout << h << ' ' << m << endl;

   return 0;
}