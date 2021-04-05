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
    
    unsigned long long int num;
    string exit;

    cout << "Please enter a number and this program will find the factorial:" << endl;
    cin >> num;
    
    clock_t tStart = clock();

    cout << fac(num) << endl;

    printf("Time taken: %.20fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    cin >> exit;
    
    return 0;
}

