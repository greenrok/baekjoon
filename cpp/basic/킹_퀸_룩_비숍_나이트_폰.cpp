#include <iostream>

using namespace std;

int main() {
    int arr[6] = {1, 1, 2, 2, 2, 8};
    int piece[6];
    int n;


    for(int i=0; i<6; i++) {
        cin >> piece[i];

        cout << arr[i] - piece[i] << ' ';
    }


    return 0;
}