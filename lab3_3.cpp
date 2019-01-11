#include<iostream>

using namespace std;

int main(){

    float x;
    float sum;
    float y = 6;
    while (y <=19){
        x = 1/y;
        y++;
        sum=sum + x;
    }
    cout << sum;
    return 0;
}