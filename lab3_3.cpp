#include<iostream>

using namespace std;

int main(){

    float x;
    float sum;
    float y = 2;
    while (y <=69){
        x = 1/y;
        y++;
        sum=sum + x;
    }
    cout << sum;
    return 0;
}