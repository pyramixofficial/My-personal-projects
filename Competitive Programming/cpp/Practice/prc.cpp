#include<bits/stdc++.h>
using namespace std;

int main(){
vector<string> line = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
long long int n, i;
cin>>n;
for (i=0;i<n;i++){
    line.push_back(line.front());
    line.push_back(line.front());
    line.erase(line.begin());
}
cout<<line.back();

return 0;
}
