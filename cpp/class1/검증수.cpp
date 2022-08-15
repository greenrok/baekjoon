#include <iostream>
using namespace std;

int main()
{
  int arr[5];
  int i, c = 0;

  for (i = 0; i < 5; i++)
  {
    cin >> arr[i];
  }

  for (i = 0; i < 5; i++)
  {
    c += (arr[i] * arr[i]);
  }

  cout << c % 10 << endl;

  return 0;
}