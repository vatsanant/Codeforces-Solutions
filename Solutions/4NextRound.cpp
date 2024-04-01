#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int total_solves = 0;

    int marks[n];
    
    //Read Marks
    for(int i = 0; i < n; ++i){
        cin >> marks[i];
    }


    //Count the number greater than k 
    for(int j = 0; j < n; ++j){
        if(marks[j] >= marks[k-1] && marks[j] > 0){
            total_solves++;
        } 
    }

            cout << total_solves << endl;

    return 0;

    //name[2] = {"aric", "john", "bob"};
    //cout << name[2] <<'\n';
}