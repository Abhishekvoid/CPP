#include<bits/stdc++.h>
using namespace std;
// write a program that takes an input of age
// and prints if you are adult or not
// >= 18, Yes
// < 18, No


/*int main(){

    int age;
    cout<< "Enter youe age";
    cin >> age; 
    if( age >= 18)
    {
        cout << "your now a adult";
    }
    else {
        cout << "you are teen";
    }

} */

 /*int main(){
    int marks;
    cout<<"Enter your marks here: ";
    cin >> marks;

    if(marks < 25){
        cout << "F";
    }

    else if(marks <= 44){
        cout<<"E";
    }

    else if(marks <= 49 ){
        cout<<"D";
    }

    else if(marks <= 59){
        cout <<"C";
    }
    else if(marks <= 79){
        cout <<"B";
    }
    else if(marks <= 100){
        cout <<"A";
    }
 }*/

 int main(){
    int age;
    cout << "enter your age: ";
    cin >> age;

    if ( age < 18 ){
        cout << "not eligible for job";
    }

    else if(age <= 57){
        cout<< "eligible for job";
        if( age >= 55){
           cout<< ", but retirement soon";
        }
    }
    else {
        cout << "retirement time";
    }

 }
 