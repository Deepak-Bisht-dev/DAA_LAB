#include<iostream>
using namespace std;

int main(){

    int t; cin >> t;
    while(t--){

        int n, i, flag = 0;
        cin >> n;
        char arr[n];
        for(i = 0; i < n; i++) cin >> arr[i];
        
        int count[26] = {0};
        for(i = 0; i < n; i++) count[arr[i] - 97]++;

        int max_index = 0;
        for(i = 0; i < n; i++){
            if(count[i] > 1){
                if(count[i] > count[max_index])  max_index = i;

                flag = 1; 
            }
        }

        if(flag == 0) cout << "No Duplicate element found !!" << endl;
        else cout << max_index + 97 << " " << count[max_index] << endl;
    }

    return 0;
}