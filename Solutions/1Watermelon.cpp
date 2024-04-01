#include <iostream>
#include <cmath>
using namespace std;

int main(){
int w;
cin >> w;

if(w >= 4 && (w % 2 == 0 || w == 2)){
   cout << "YES" << endl;
}

else {
    cout << "NO" << endl;
}


return 0;
}
