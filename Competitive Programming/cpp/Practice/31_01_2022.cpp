#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n;
    cin>>k>>n;
    long current[3];
    current [0] = k;
    current[1] = 0;
    current[2] = 0;
    long long total = 0;
    total = accumulate(current, current+3, total);

    for(int i=0; i<n; i++ ){
            current[2] = current[1];
            current[1] = current[0];
        switch (total%3){
    case 0:
        current[0] = (total/3)*5;
        break;
    case 1:
        current[0] = ((total/3)-2)*5 + 18;
        break;
    case 2:
        current[0] = ((total/3)-1)*5 + 9;
        break;
        }
    total = current[0]+current[1]+current[2];
    }

    cout<<total;
    return 0;
}
