#include<iostream>
using namespace std;
int comp, inv;

void inv_count(int a[], int b[], int n1, int n2){
    for(int i = 0; i < n1; i++){
        for(int j = i+1; j < n2; j++){
            if(a[i] > b[j])  count++;
        }
    }
}

void merge(int arr[], int s, int m, int e){
    int i, j, k;
    int n1 = m-s+1;  int n2 = e - m;
    int l[n1], r[n2];
    for(i = 0; i < n1; i++)  l[i] = arr[s+i];

    for(j = 0; j < n2; j++)  r[j] = arr[m+1+j];

    i = j = 0; k = s;
    while(i < n1 && j < n2){
        comp++;
        if(l[i] <= r[j]){
            arr[k] = l[i];
            i++;
        }
        else{
            arr[k] = r[j];
            j++;
        }
        k++
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

void merge_sort(int arr[], int start, int end){
    if(start < end){
        int mid = (start + end)/2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        comp = inv = 0;
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)  cin >> arr[i];
        
        merge_sort(arr, 0, n-1);
        for(int i = 0; i < n; i++)  cout << arr[i] << endl;

        cout << "Comparisons: " << comp << endl;
        cout << "Inversion: " << inv << endl;
    }

    return 0;
}