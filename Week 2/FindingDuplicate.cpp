#include<iostream>
using namespace std;

int main(){

    int t;    cin >> t;
    while(t--){

        int n;    cin >> n;
        int arr[n], i , count = 0;
        for(i = 0; i < n; i++) cin >> arr[i];
        int key; cin >> key;

        int lo = 0, hi = n -1 , mid;
        while(lo <= hi){
            mid = (lo + hi)/2;
            if(arr[mid] == key){
                i = mid;
                while(arr[i++] == key)  count++;
                i = mid - 1;
                while(arr[i--] == key)  count ++;

                cout << key <<" " << count << endl;
                break;
            }
            else if(key < arr[mid])  hi = mid - 1;
            else lo = mid + 1;
        }

        if(count == 0) cout << "Key not Present" << endl;

    }

    return 0;
}