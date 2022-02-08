#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("magic.in");
    set<char> numbers;
    int n;
    char ch;
    fin>>n;
    for(int i=0;i<n;i++){
        fin>>ch;
        if (isalpha(ch)){
            cout<<char(toupper(ch));
        }else{
        numbers.insert(ch);
        }
    }
    cout<<endl;
    vector<char> numeric;
    copy(numbers.begin(), numbers.end(), back_inserter(numeric));
    if (numeric[0]=='0'){
        cout<<numeric[1]<<numeric[0];
        for(int j=2; j<numeric.size(); j++){
        cout<<numeric[j];
    }
    }
    else{
    for(int j=0; j<numeric.size(); j++){
        cout<<numeric[j];
    }
    }


    fin.close();
    return 0;
}
