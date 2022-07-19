#include<iostream> //declare which library you want to use
using namespace std;

 int main(){ //code's body
    string name; //variable declaration
    cout<<"Enter your Name:"<<endl; //msg to ask user to enter name
    cin>>name; //take user input 
    cout<<"Hello, "<<name<<"."<<endl; //concatenate hello string with user's string
    return 0;
 }
