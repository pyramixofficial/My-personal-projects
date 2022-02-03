#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, m, i, j;
    cin>>n>>m;
    string a[m], b[m], temp;
    for (i=0;i<m;i++){
        cin>>a[i]>>b[i];
    }
    for (i=0;i<n;i++){
        cin>>temp;
        j = distance(a, find(a, a+m, temp));
        if(a[j].size()<=b[j].size()){
            cout<<a[j]<<" ";
        }else {
            cout<<b[j]<<" ";
        }
    }

}
