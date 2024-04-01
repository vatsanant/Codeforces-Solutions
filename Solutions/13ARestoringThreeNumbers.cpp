#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int numbers[4];

    for(int i = 0; i < 4; ++i){
        cin >> numbers[i];
    }

    int largest_int = numbers[0];
    int largest_int_index = 0;

    int subtracted_int[3];

    for(int i = 0; i < 4; ++i){
        if(numbers[i] > largest_int){
            largest_int = numbers[i];
            largest_int_index = i;
        }
    }

    int j = 0;

      for (int i = 0; i < 4; ++i) {
        if (i != largest_int_index) {
            subtracted_int[j] = largest_int - numbers[i];
            ++j;
        }
    }

    for(int i = 0; i < 3; ++i){
        cout << subtracted_int[i] << " ";
    }


    return 0;
}