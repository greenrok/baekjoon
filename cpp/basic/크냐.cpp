#include <iostream>


using namespace std;


int main() {
    int n, m;

    while(cin>>n>>m) {

    if(n>m) cout<<"Yes"<<'\n';
    else if (n<=m && n != 0 && m != 0) cout<<"No"<<'\n';
    else break;
    }

    return 0;
}