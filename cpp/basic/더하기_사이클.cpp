#include <iostream>
using namespace std;

int main() {
    int N;
    int ten, one, sum;

    cin >> N;

    int result = N;
    int count = 0;

    while(1) {
        ten = result / 10;
        one = result % 10;
        
        if(one > 9) {
            one %= 10;
        }

        sum = (ten + one) % 10;

        result = (one * 10) + sum;
        count++;

        if(result == N) break;
    }

    cout << count << endl;



    return 0;
}