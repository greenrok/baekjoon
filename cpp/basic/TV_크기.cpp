#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double d, h, w, x;
   cin >> d >> h >> w;

   x = d / sqrt(1 + ((h * h) / (w * w)));

   cout << (int)(x * h / w) << ' ' << (int)x << endl;

   return 0;
}
