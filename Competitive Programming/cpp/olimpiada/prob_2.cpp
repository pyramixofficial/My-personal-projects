#include<bits/stdc++.h>
using namespace std;

bool check(char arr[20][20], int nowi, int nowj){
    bool first, second, third;
    first = (arr[abs(nowi-1)][abs(nowj-1)] == 'R') and (arr[abs(nowi)][abs(nowj-1)] == 'R') and (arr[abs(nowi+1)][abs(nowj-1)] == 'R');
    second = (arr[abs(nowi-1)][abs(nowj)] == 'R') and (arr[abs(nowi)][abs(nowj)] == 'N') and (arr[abs(nowi+1)][nowj] == 'R');
    third = (arr[abs(nowi-1)][abs(nowj+1)] == 'R') and (arr[abs(nowi)][abs(nowj+1)] == 'R') and (arr[abs(nowi+1)][abs(nowj+1)] == 'R');

    return  first and second and third;
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
            if (check(arr, i, j)){
                k += 10;
            }
        }
    }
    fout<< k;
    fin.close();
    fout.close();
    return 0;
}
