#include<iostream>
#include<stack>
using namespace std;

bool pathDFS(int **g, int n, int source, int dest){
    stack <int> st;
    int mark[n] = {0};
    st.push(source);
    mark[0] = 1;
    while(!st.empty()){
        int v = st.top();
        st.pop();
        for(int i = 0; i < n; i++){
            if(g[v][i] == 1){
                if(i == dest)  return true;
                if(mark[i] == 0){
                    st.push(i);
                    mark[i] = 1;
                }
            }
        }
    }
    return false;
}

int main(){

    int n; cin >> n;
    int **g = new int*[n];
    for(int i = 0; i < n; i++) g[i] = new int[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
         cin >> g[i][j];
    }

    int s, d; cin >> s >> d;
    
    if(pathDFS(g, n, s-1, d-1)) cout << "Path Exists " << endl;
    else cout << "Path doesn't Exist "<< endl;

    return 0;
}