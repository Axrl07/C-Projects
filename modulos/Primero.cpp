#include <iostream>

using namespace std;

int main(){
    int i = 3, j = ++i , k = ++i;
    cin >> i;
    cout << k + i << j - i << i*i;
}


// int main(){
//     int i=3,j=++i, k=++i;
//     cout << k << j << i;
// }


// int main(){
//     int i = 3, j, k;
//     if(i > 0) j=2+i*i;
//     if(i <= 0) j=2*i-1;
//     if(j >= 0) k=j%i+2;
//     if(j<0) k=i%j+2;
//     if(k < 0) k= k%i%j;
//     if(k>=0) k= j%i%k;
//     cout << k << endl;
// }


// int main()
// {
//     int i = 3, j = 2, k = -1;
//     if(i > 0){
//         if(j <= 0){
//             if(k<0){
//                 k++;
//             }
//             if(k <= 0){
//                 k--;
//             }
//         }
//         if(j>0){
//             i++;
//         }
//     }
//     if(i <= 0){
//         j++;
//     }
//     k= i+j+k;
//     cout << k << endl;
// }
