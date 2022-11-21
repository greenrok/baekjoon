#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, i;
    string str[50];
    char c;

    cin >> N;

    for (i = 0; i < N; i++)
    {
        cin >> str[i];
    }

    if (N == 1)
    {
        for (i = 0; i < str[0].length(); i++)
        {
            cout << str[0][i];
        }
    }
    else
    {
        for (i = 0; i < str[0].length(); i++)
        {
            c = str[0][i];
            for (int j = 0; j < N; j++)
            {
                if (c != str[j][i])
                {
                    c = '?';
                    break;
                }
            }
            cout << c;
        }
    }

    return 0;
}