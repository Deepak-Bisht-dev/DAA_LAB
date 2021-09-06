#include<iostream>
using namespace std;

void quick_sort(int arr[], int l, int r, int k){
    
    if(l < r){
        int p = partition(arr, l, r);
        if(p+1 == k) cout << "\n" << arr[p] << endl;

        quick_sort(arr, l, p-1, k);
        quick_sort(arr, P+1, r, k);
    }
}

int partition(int arr[], int l, int r){
    int p = arr[r];
    int i = l-1;
    for(int j = 1; j < r; j++){
        if(arr[j] < p){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

        }
    }
    
    arr[l] = arr[i+1];
    arr[i+1] = p;

    return i+1;
}

int main(){

    int t; cin >> t;
    while(t--){
        comp = swap = 0;
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        int k; cin >> k;
        if(k > n-1){
            cout << "NOT PRESENT !!" << endl;
            return;
        }

        quick_sort(arr, 0, n-1, k);
    }

    return 0;
}