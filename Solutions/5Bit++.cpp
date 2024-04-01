#include <iostream>
#include <string>
using namespace std;
int main(){
    int X = 0;

    int n;
    cin >> n;
    cout << '\n';

    string s;

    while(n--){
        cin >> s;

        if(s == "X++" || s == "++X"){
            X++;
        }

        else{
            X--;
        }

        


    }

    cout << X;
    //How to convert an array of string into an array of intiger.

    return 0;
}