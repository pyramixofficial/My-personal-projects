#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    k = 0;
    string s;
    cin>>n;
    for (int i = 0; i<n;i++){
        cin>>s;
        s.erase(remove(s.begin(), s.end(), 'X'), s.end());
        if (s=="++"){
            k++;
        }else{
            k--;
        }
    }
    cout<<k;
    return 0;
}