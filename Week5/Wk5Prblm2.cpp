#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){

    int n1, n2, i, j, k;
    n1 = m-1+1; n2 = r-m;
    int l[n1], r[n2];
    
    for(i = 0; i < n1; i++)  l[i] = arr[i+1];
    for(j = 0; j < n2; j++)  r[j] = arr[j+m+1];

    i = j = 0;
    k = 1;

    while(i < n1 && j < n2){
        if(l[i] <= r[j]){
            a[k] = l[i];
            i++;
        }
        else {
            arr[k] = r[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = l[i];
        i++; k++;

    }
    while(j < n2){
        arr[k] = r[j];
        j++; k++;
    }
}

void sort(int arr[], int l, int r){
    if(l < r){
        int m = (l+r/2);
        sort(arr, l, m);
        sort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main(){

    int t; cin >> t;
    while(t--){
        int n, i, key, flag = 0;
        cin >> n;
        int arr[n];
        for(i = 0; i < n; i++)  cin >> arr[i];
        cin >> key;
        sort(arr, 0, n-1);
        int j = n-1; i = 0;
        
        while(i < j){
            if (arr[i] + arr[j] > key) j--;
            else if (arr[i] + arr[j] < key) i++;
            else{
                cout << arr[i] << " " << arr[j] << endl;
                flag = 1;
                i++; j--;
            }
        }
        cout << endl;
        if(flag == 0)  cout << "No Such Pair Exist !!" << endl;
    }

    return 0;
}