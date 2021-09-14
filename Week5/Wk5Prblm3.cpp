#include<iostream>
using namespace std;

int main(){

    int n, m, i, j, flag = 0;
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++)  cin >> arr[i];

    cin >> m;
    int arr2[m];
    for(i = 0; i< m; i++) cin >> arr2[i];

    i = j = 0;
    while(i < n && j < m){
        if(arr[i] == arr2[j]){
            cout << arr[i] << endl;
            i++; j++;
            flag = 1;
        }
        else if(arr[i] < arr2[j]) i++;
        else j++;
    }

    if(flag == 0)  cout << "No Common Element" << endl;

    return 0;
}