#include <iostream>
using namespace std;
int main(){
    int n,w,count;
    count = 0;
    w = 2;
    cin >> n;
    while(w > 0){
        w = n / 2;
        n = w;
        count += 1;
        
    }
    cout << count ;
}