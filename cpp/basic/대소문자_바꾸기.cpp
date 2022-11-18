#include <iostream>


using namespace std;


int main() {
    char c[100];
    char word;
    int i;

    while(cin >> word) {
        if(word >= 97) {
            c[i] = word - 32;
        } else {
            c[i] = word + 32;
        }

        cout << c[i];
        i++;
    }

    




    return 0;
}