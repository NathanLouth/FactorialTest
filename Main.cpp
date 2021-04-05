#include<iostream>
using namespace std;

unsigned long long int fac(int num){

    if(num == 2){
        return 2;
    }else{
        return (num * fac(num-1));
    }
}

int main(){

    unsigned long long int num;
    cout << "Please enter a number and this program will find the factorial:" << endl;
    cin >> num;

    cout << fac(num) << endl;

    return 0;
}

