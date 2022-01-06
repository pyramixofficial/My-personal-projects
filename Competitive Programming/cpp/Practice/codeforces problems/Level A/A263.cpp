#include<bits/stdc++.h>
using namespace std;

int main(){
    int matrices[5][5];
    int i, j;
    for (i = 0; i<5;i++){
        for (j = 0; j<5;j++){
            cin>>matrices[i][j];
            if (matrices[i][j] == 1){
                break;
            }
        }
        if (matrices[i][j] == 1){
                break;
            }
    }
    cout<<abs(i-2)+abs(j-2);
    return 0;
}