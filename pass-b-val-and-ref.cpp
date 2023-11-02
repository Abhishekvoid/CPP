#include<bits/stdc++.h>
using namespace std;


// pass by value 
void doSomething(int num){
    cout<< num <<endl;
    num += 5;
    cout<< num <<endl;
    num += 5;
    cout<< num << endl;
}

// pass by reference
void doRefrence(string &s){
    s[0] = 'b';
    cout<< s << endl;
}

void doarr(int arr[], int n){
    arr[0] += 100;
    cout<< arr[0] <<endl;
}

int main(){
    int num = 10;
    doSomething(num);
    cout<< num <<endl;
   

    string s ="Abhishek";
    doRefrence(s);
    cout<< s <<endl;
    
    int n =5 ;
    int arr[n];
    for(int i=0; i<=5; i++){
        cout<< i <<endl;
        cin>> arr[i];
    }

    doarr(arr, n);
    cout<< arr[0] <<endl;


    return 0;
}




