#include <iostream>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    int year = 0;

    while(a < b || a == b){
        a = a * 3;
        b = b * 2;

        year++;

        if(a > b){
            break;
        }
    }

    cout << year;

    return 0;
    
        }