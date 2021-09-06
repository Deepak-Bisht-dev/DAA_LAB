#include<iostream>
using namespacse std;

int swap, comp;

void quick_sort(int arr[], int l, int r){

    if(l < r){
        int p = partition(arr, l, r);
        quick_sort(arr, l, p-1);
        quick_sort(arr, p+1, r);
    }
}

int partition(int arr[], int l, int r){

    int p = arr[r]; int i = l-1;
    for(int j = 1; j < r; j++){
        if(++comp && arr[j] < p){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            swap++;
        }
    }

    arr[r] = arr[i+1];
    arr[i+1] = p;
    swap++;
    

    return i+1;
}

int main(){

    int t; cin >> t;
    while(t--){
        comp = swap = 0;
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)  cin >> arr[i];
        
        quick_sort(arr, 0, n-1);
        for(int i = 0; i < n; i++) cout << arr[i];

        cout << "Comparisons: " << comp << endl;
        cout <<"Swaps: " << swap << endl;
    }

    return 0;
}