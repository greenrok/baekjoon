#include <iostream>
#include <string>

using namespace std;

int getNum(int n) {

    int i = 666;
    int series = 0;

    string target;

    while(true) {
        target = to_string(i);
        for(int j = 0 ; j < target.length() - 2; j++) {
            if(target[j] == '6' && target[j+1] == '6' && target[j+2] == '6') {
                series++;
                if(series == n) return i;
                break;
            }
        }
        i++;
    }
}

int main() {
    int N;

    cin>>N;

    cout << getNum(N);

    return 0;
}