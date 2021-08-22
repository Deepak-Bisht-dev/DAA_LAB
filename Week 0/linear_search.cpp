#include<iostream>
using namespace std;

int main(){
	int t;
	cout << "Enter no. of test cases\n";
	cin >> t;
	while(t--){
		int n, key, i;
		cout << "Enter array size\n";
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		cout << "Enter the key element\n";
		cin >> key;
		for(int i = 0; i < n; i++){
			if(arr[i] == key){
				cout << "Key found\n";
				cout << "Total comparison : " << i+1 << endl;
				break;
			}
		}
		if(i == n) cout << " Key not found\n"; 
	}

  return 0;

}