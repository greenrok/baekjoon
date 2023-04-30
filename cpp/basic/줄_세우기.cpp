#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int n;
   cin >> n;

   vector<int> student;

   for (int i = 1; i <= n; i++)
   {
      int getNum;
      cin >> getNum;

      auto it = student.end() - getNum;
      student.insert(it, i);
   }

   for (int num : student)
   {
      cout << num << ' ';
   }
   cout << endl;

   return 0;
}