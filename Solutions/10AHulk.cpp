#include <iostream>
using namespace std;

int main(){

    string love = "I love that ";
    string love1 = "I love it ";
    string hate = "I hate that ";
    string hate1 = "I hate it ";


    int n;
    cin >> n ;

    //My dumb@$$ brain said that if it's even it's love and 
    if(n % 2 == 0){
        for(int i = 1; i < n; ++i ){
            
            if(i % 2 != 0){
                cout << hate;
            }else if(i %2 == 0){
                cout << love;
            }
        }                                                        
        cout << love1;                   //I don't have any girlfriend:
    }

    //if it's odd it's hate, odd numbers were considered as bad omen in patrinonum dynasty 

    else if(n % 2 != 0){
        for(int j = 1; j < n; ++j){

            if(j % 2 != 0){
                cout << hate;
            }else if(j % 2 == 0){
                cout << love;
            }
             
        }

        cout << hate1;
    }

    return 0;
}