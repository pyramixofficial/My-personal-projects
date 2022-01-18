#include<bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin("date.txt");
    ofstream fout("date.out");
    char c;
    fin >> c;
    cout << c << endl;
    fout << c << endl;
    fin.close();
    fout.close();

    return 0;
}
