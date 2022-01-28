#include<bits/stdc++.h>
using namespace std;

bool check(char arr[20][20], int nowi, int nowj, int n, int m){
    bool first = false;
    if (arr[abs(nowi-1)][abs(nowj-1)] == 'R'){
        first = first || true;
    }
    if (arr[abs(nowi)][abs(nowj-1)] == 'R'){
        first = first && true;
    }
    if (nowi+1<n && arr[abs(nowi+1)][abs(nowj-1)] == 'R'){
        first = first && true;
    }
    if (arr[abs(nowi-1)][abs(nowj)] == 'R'){
        first = first && true;
    }
    if (nowi+1<n && arr[abs(nowi+1)][nowj] == 'R'){
        first = first && true;
    }
    if (nowj+1<m && arr[abs(nowi-1)][abs(nowj+1)] == 'R'){
        first = first && true;
    }
    if (nowj+1<m && arr[abs(nowi)][abs(nowj+1)] == 'R'){
        first = first && true;
    }
    if (nowi+1<n && nowj+1<m && arr[abs(nowi+1)][abs(nowj+1)] == 'R'){
        first = first && true;
    }

    return  first;
}

int main(){
    ifstream fin("date.txt");
    ofstream fout("date_out.txt");
    char arr[20][20];
    int i, j, k, n, m;
    k = 0;
    fin>>n>>m;
    for (i = 0; i<n; i++){
        for (j = 0; j<m; j++){
            fin>>arr[i][j];
        }
    }

    for (i = 0; i<n; i++){
        for (j = 0; j<m; j++){
            if (arr[i][j] == 'N'){
                if (check(arr, i, j, n, m)){
                        k += 10;
                }
            }
        }
    }
    fout<< k;
    fin.close();
    fout.close();
    return 0;
}

