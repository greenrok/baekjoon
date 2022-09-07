#include <iostream>
using namespace std; 

int main() {
	int arr1[8] = {1,2,3,4,5,6,7,8};
	int arr2[8];
	int n, i=0;
	int m=0;

	while (cin>>n) {
   	arr2[i] = n;
   	i++;
	} 

	for (int i=0; i<8; i++) {
		if (arr1[i] == arr2[i]) {
			m++;
		} else if (arr1[i] == arr2[7-i]) {
			m--;
   	} else {
      	continue;
    	}
   }

   if(m==8) {
   	cout<<"ascending\n";
   } else if (m==-8) {
   	cout<<"descending\n";
   } else {
   	cout<<"mixed";
   }

	return 0;
}