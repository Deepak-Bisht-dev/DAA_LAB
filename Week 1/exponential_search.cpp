#include<iostream>
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		int n, i , key, count = 1, flag = 0;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		cin >> key;

		if(a[0] == key){
			cout << "Present \n" << count;
			continue;
		}
		i = 1;
		while( i < n && arr[i] <= key){
			count++;
			i = i * 2;
		}
		int k = i < n-1 ? i : n-1;
		for(int j = i/2; j <= k; j++){
			count++;
			if(arr[j] == key){
				cout << "Present " << count << endl;
				flag = 1;
				break;
			}
		}
		if(flag == 0)  cout << "Not Present " << count << endl;
	}
	
	return 0;
}