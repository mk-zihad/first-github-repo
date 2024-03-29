#include<iostream>
using namespace std;

void greeting(string name){
    cout<<"Welcome "<<name <<" !\n";
}

int sqr (int n){
    return n*n;
}

int main(){
    cout<<"Hello world!\n";
    greeting("Zihad");
    cout<< sqr(9) << endl;
    greeting("Rafi");
}