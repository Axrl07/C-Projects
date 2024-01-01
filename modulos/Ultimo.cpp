#include <iostream>
#include <vector>

using namespace std;

int main(){
    int i=1, k=1 & 0;
    do{
        k++;
        if(k>1){
            i = k;
        }
    }while(i < 2);
    cout << k << endl;
}