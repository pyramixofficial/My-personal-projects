#include<bits/stdc++.h>
using namespace std;


long long fib(int n){
    return (pow((1+sqrt(5)), n)-pow((1-sqrt(5)), n))/(pow(2, n)*sqrt(5));
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;

}
