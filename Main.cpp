#include<iostream>
#include <time.h>
using namespace std;

unsigned long long int fac(int num){

    if(num == 2){
        return 2;
    }else{
        return (num * fac(num-1));
    }
}

int main(){

    clock_t tStart = clock();
    
    unsigned long long int num;
    cout << "Please enter a number and this program will find the factorial:" << endl;
    cin >> num;

    cout << fac(num) << endl;

    printf("Time taken: %.5fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    cin.ignore(); 
    
    return 0;
}

