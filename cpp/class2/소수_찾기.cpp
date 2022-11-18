#include <iostream>

using namespace std;

int main() {
    int N;
    int arr[100];
    int count = 0;
    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> arr[i];

        int half = arr[i]/2;
        int check;

        while(half > 0) {
            if(arr[i] == 1) break;

            if(arr[i] % half == 0 && half != 1) {
                break;
            } else {
                half--;
            }

            if(half == 0) count++;
        }
    }

    cout << count << '\n';

    return 0;
}