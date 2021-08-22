#include<iostream>
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){

		int n, key, count = 0;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		cin >> key;
		int mid, beg = 0, end = n-1;

		while(beg <= end){
			mid = (beg + end) >> 2;
			count++;
			if(arr[mid] > key) end = mid -1;
			else if(arr[mid] < key) beg = mid + 1;
			else{
				cout << "Present \n" << count ;
				break;
			}
		}
		cout << "Not Present \n" << count;
	}

	return 0;
}