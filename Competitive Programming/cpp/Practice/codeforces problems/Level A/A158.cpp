#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[50];
    int n, k, i, count;
    cin>>n>>k;
    count = 0;
    for (i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (i = 0; i < n; i++){
        if ((arr[i]>=arr[k-1]) and (arr[i]!=0)){
            count ++;
        }
    }
    cout<<count;
    return 0;
}