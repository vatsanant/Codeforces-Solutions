#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n; 
    cin >> n;

    cin.ignore();

    string marbles;

    int min_stones = 0;

    cin >> marbles;

    //actual problem starts here i was just messing up there 

    for(int i = 1; i < n; ++i){
        if(marbles[i] == marbles[i-1]){

            min_stones = min_stones + 1;}
            
            }
            
    cout << min_stones ;

    return 0;
}