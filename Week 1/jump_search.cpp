#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, i, key, count = 1, flag = 0;
        cin >> n;
        int arr[n];
        for(i = 0; i < n; i++) cin >> arr[i];
        cin >> key;
        i = 0;
        if(arr[i] == key){
            cout << "Present " << count << endl;
            continue;
        }
        int m = sqrt(n);
        i = i + m;
        while(i < n && a[i] < key){
            count++;
            i = i + m;
        }
        if(arr[i] == key){
            count++;
            cout << "Present " << count << endl;
            continue;
        }

        int k = i < n -1 ? i : n-1;

        for(int j = i-m+1; j < k; j++){
            count++;
            if(arr[j] == key){
                cout << "Present " << count << endl;
                flag = 1;
                break;
            }
        }

        if(flag == 0) cout << "Not Present " << count << endl;
    }


    return 0;
}