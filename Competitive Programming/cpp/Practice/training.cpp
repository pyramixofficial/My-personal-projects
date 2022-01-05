#include<bits/stdc++.h>
using namespace std;
 
void unu(){
    int n;
    cin>>n;
    for ( int i = 1; i <= n; i++)
    {
        cout<<i<<' ';
    }
}

void doi(){
    for ( char i = 'a'; i <= 'z'; i++)
    {
        cout<<i<<' ';
    }
    
}

void trei(){
    for (char i = 'A'; i <= 'Z'; i++)
    {
        cout<<i<<' ';
    }
    
}

void patru(){
    for (char i = 'a'; i <= 'z'; i++)
    {
        cout<<char(toupper(i))<<i<<' ';
    }
    
}

void cinci(){
    int n;
    cin>>n;
    for (int i = 1; i < n; i++){
        for (int j = 1; j < i+1; j++){
            cout<<i<<' ';
        }
    }
    
}

void sase(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++){    
        for (int j = 1; j < i; j++){
            cout<<j<<' ';
        }
    }   
}

void sapte(){
    for (int i = 1; i <= 9; i++){   
        cout<<"      ";
        for (int j = 0; j < 7; j++){
            cout<<i<<' ';
        }
    }
}

void opt(){
    int n, k;
    cin>>n>>k;
    for (int i = 1; i <= k; i++){
        for (int j = 1; j <= n; j++){
            cout<<j<<' ';
        }
        cout<<endl;
    }
}

void noua(){
    int k;
    cin>>k;
    for (int i = 0; i < k; i++){
        for (char j = 'a'; j <= 'z'; j++){
            cout<<j;
        }
        cout<<endl;
    }
    
}

void zece(){
    int k;
    cin>>k;
    for (int i = 0; i < k; i++){
        for (char j = 'A'; j <= 'Z'; j++){
            cout<<j<<' ';
        }
    cout<<endl;
    }
}

void unspe(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
}

void doispe(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = i; j >= 1; j--){
            cout<<j<<' ';
        }
        cout<<endl;
    }
    
}

void treispe(){
    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= i; j++){
            cout<<i<<' ';
        }
        cout<<"    ";
    }
    
}

void paispe(){
    cout<<"                            ";
    for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= i; j++){
            cout<<i<<' ';
        }
        cout<<"                            ";
    }
    
}

void cinspe(){
    int num = 0;
    for (int i = 5; i >= 0; i--){
        if (i%2!=0){num = 1;
        }else{num = 2;}
        for (int k = 0; k < 10-i*2; k++){
            cout<<" ";
        }
        
       for (int j = 0; j <= i*2; j++){
           cout<<num;
    }
    cout<<endl;
    }    
}

void saispe(){
    int n;
    cin>>n;
    for (int i = n; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            cout<<'a';
        }
        cout<<endl;
    }  
}

void saptispe(){
    int n;
    cin>>n;
    for (int i = n; i > 0; i-=2){
        for (int j = 0; j < i; j++){
            cout<<'a';
        }
        cout<<endl;
        for (int j = 0; j < i; j++){
            cout<<'e';
        }
        cout<<endl;
    }  
}

void optispe(){
    int n;
    cin>>n;
    for (int i = n; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout<<'a';
        }
        for (int j = 0; j < i; j++){
            cout<<'b';
        }
        cout<<endl;
    }  
}

void nouaspe(){
    for (int i = 0; i < 4; i++){
        for (char j = 'a'; j <= 'm'; j++){
            cout<<j;
        }
        cout<<endl;
        for (char j = 'n'; j <= 'z'; j++){
            cout<<j;
        }
        cout<<endl;
    }  
}

void douazeci(){
    int n, i, j;
    cin>>n;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++)
        {
            cout<<j<<' ';
        }
        cout<<endl;}

    for (i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout<<j<<' ';
        }
        cout<<endl;        
    }
    
}

void douaunu(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++){
        if (i%11 == 0){
            cout<<i<<' ';
        }
    }
    
}

void fib(int n)
{
    int f1 = 0, f2 = 1, i;
 
    if (n < 1)
        return;
    cout << f1 << " ";
    for (i = 1; i < n; i++) {
        cout << f2 << " ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}

int main(){
    fib(10);
    return 0;
}

