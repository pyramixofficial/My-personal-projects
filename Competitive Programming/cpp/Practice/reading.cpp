#include<bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin("date.txt");
    ofstream fout("date.out");
    char c, n, k; string s;
    fin >> c >> n >> k>> s;
    cout << s << c << k << n << endl;
    fout << s << c << k << n << endl;
    fin.close();
    fout.close();

    return 0;
}