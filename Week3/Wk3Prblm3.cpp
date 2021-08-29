#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int i, j, k, n, m;
    n = mid - start + 1; m = end - mid;
    int left[n], right[m];

    for(i = 0; i < n; i++)  left[i] = arr[start+i];
    for(j = 0; j < m; j++)  right[j] = arr[mid+1+j];

    i = j = 0;  k = start;

    while(i < n && j < m){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < n){
        arr[k] = left[i];
        i++; k++;
    }

    while(j < m){
        arr[k] = right[j];
        j++; k++;
    }
}

void merge_sort(int arr[], int start, int end){
    while(start < end){
        int mid = (start + end) / 2;
        merge_sort(arr, start,mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main(){

    int t; cin >> t;
    while(t--){
        int n, flag = 0;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)   cin >> arr[i];

        merge_sort(arr, 0, n-1);

        for(int i = 0; i < n; i++){
            if(arr[i] == arr[i+1]){
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }

        if(flag == 0) cout << "NO" << endl;
    }

    return 0;
}