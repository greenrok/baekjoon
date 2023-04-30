#include <iostream>
#include <stack>
using namespace std;

int main()
{
   int n;
   cin >> n;

   stack<int> stack;

   for (int i = 0; i < n; i++)
   {
      int length;
      cin >> length;

      while (!stack.empty() && stack.top() <= length)
      {
         stack.pop();
      }

      stack.push(length);
   }

   cout << stack.size() << endl;

   return 0;
}