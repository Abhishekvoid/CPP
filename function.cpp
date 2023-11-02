#include<bits/stdc++.h>
using namespace std;


/*void printName(string name){
    cout << "hey!!" << name ;
}
int main()
{
    string name;
    cin>>name;
    printName(name);

    string name2;
    cin>> name2;
    printName(name2);

}*/


 int sum(int num1, int num2){
     int num3 = num1+num2;
     return num3;
}

int main(){
    int num1, num2;
    cin>> num1 >> num2;
    int res = sum(num1, num2);
    cout<< res << endl;

    return 0;


