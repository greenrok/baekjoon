
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int d, h, w;
   cin >> d >> h >> w;

   double x;

   x = d / sqrt(w * w + h * h);

   cout << (int)(x * h) << ' ' << (int)(x * w) << endl;

   return 0;
}