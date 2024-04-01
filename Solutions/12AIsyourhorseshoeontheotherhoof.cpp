// #include <iostream>
// using namespace std;
// int main(){

//     int a, b, c, d;

//     int fck = 0;

//     cin >> a >> b >> c >> d;

//     int arr[4] = {a, b, c, d};

//     for(int i = 1; i < 4; ++i){
//         if(arr[i] != arr[i-1]){
//             fck++;
//         }


//     }


//     if(fck == 3){
//         cout << 0;
//     }

//     else if(fck == 2){
//         cout << 1;
//     }

//     else if(fck == 1){
//         cout << 2;
//     }
//     else{
//         cout << 3;
//     }


    


//     return 0;

// }


#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> colors; 

    int horseshoes;
    for (int i = 0; i < 4; ++i) {
        cin >> horseshoes;
        colors.insert(horseshoes);
    }

    int uniqueColors = colors.size();

    int minAdditional = 4 - uniqueColors;

    cout << minAdditional << endl;

    return 0;
}
