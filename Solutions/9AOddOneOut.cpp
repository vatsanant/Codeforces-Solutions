#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int a, b, c;
                     //LOL i am a stupid. 

    for(int i = 1; i <= n; ++i){

        cin >> a >> b >>c;

        if(a == b && a != c){
            cout << c << '\n';
        }

        else if(a == c && a != b){
            cout << b << '\n';
        }

        else{
            cout << a << '\n';
        }

    }
    return 0;
}