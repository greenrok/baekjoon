#include <iostream>


using namespace std;


int main() {
    long long n, m, sum;

    cin >> n >> m;

    sum = n-m;

    if(sum < 0) {
        sum *= -1;
    }

    cout << sum << '\n';

    return 0;
}