#include <iostream>


using namespace std;


int main() {
    int n, m;
    int num;
    cin >> n >> m;

    int ar1[n][m];
    int ar2[n][m];


    for (int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> ar1[i][j];       
        }
    }

    for (int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> ar2[i][j];       
        }
    }
    
    for (int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << ar1[i][j] + ar2[i][j] << ' ';
        }
        cout << '\n';
    }





    return 0;
}