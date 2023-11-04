#include<bits/stdc++.h>
using namespace std;

void side_triangle(int n){
    for(int i = 0; i < n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        side_triangle(n);
    }
    
}