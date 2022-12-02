#include <iostream>
using namespace std;


int main() {
    int N, time, y=0, m=0;

    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> time;
        y += (time/30 +1) * 10;
        m += (time/60 + 1) * 15;
    }

    if(y>m) {
        cout << "M " << m<< endl;
    } else if (y==m){
        cout << "Y M " << y << endl;
    } else {
        cout << "Y " << y << endl;
    }


    return 0;
}