#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int numbers[5];

    for(int i = 0; i < 4; ++i){
        cin >> numbers[i];
    }

    sort(numbers, numbers + 4);

    cout << numbers[3] - numbers[2] << " " << numbers[3] - numbers[1] << " " << numbers[3] - numbers[0];

//i submitted two solutions of this problem one without using brain and one without using my own logic and both 
// without using chatgpt, ChatGPT Sucks, tbh i asked for the solution but the solution of chatgpt sucks 
    

    return 0;
}