#include <iostream>
#include <vector>
using namespace std;

// struct Stru {
//     int i1, i2;
//     char c1, c2;
// };

// int main(){
//     Stru a = {1, 2, 'a', 'b'};
//     Stru b = {5, 6, 'x', 'y'};
//     cout << static_cast<char>(b.c1 + a.i1) << endl;
//     cout << static_cast<int>(a.c2 - a.c1) << endl;
//     cout << static_cast<int>(b.c2 - b.c1) << endl;
// }


// int main(){
//     ejercicio 17
//     for(float val=-10.0; val < 100.0; val = -val * 2){
//         if(val < 0 && -val >= 20){
//             break;
//         }
//         cout << "*";
//     }

//     ejercicio 18
//     vector<int> v = {8,4,3,2,1};
//     int i;
//     for(i=v[4]; i< v[3]; i++){
//         v[i-1] = -v[3];
//     }
//     cout << i;

//     ejercicio 19
//     float val = 100.0;
//     do{
//         val = val /5;
//         cout << "*";
//     } while( val > 1.0);
// }


// ejercicio 16
// struct S{
//     int t;
// };
// struct SS{
//     S t;
// };
// int main(){
//     vector<SS> t = {{1}, {2}};
//     cout << t[0].t.t << t[1].t.t << endl;
// }



// int main(){
//     ejercicio 7
//     int a=2;
//     switch(a << a){
//         case 8 : a++;
//         case 4 : a++;
//         case 1 : a--;
//         case 2 : break;
//     }
//     cout << a << endl;


//     ejercicio 8
//     int i=0, j=i++, k=--i;
//     if(i>0){
//         j++;
//     }else{
//         k++;
//     }
//     if(k==0){
//         i++;
//     }else if(k>0){
//         k--;
//     }else{
//         k++;
//     }
//     cout << i * j * k << endl;


//     ejercicio 9
//     vector<char> arr = {'a', 'b', 'c'};
//     for(int i=1; i< arr.size();i++){
//         cout << "*";
//         if((arr[i]- arr[i-1])%2){
//             continue;
//         }
//         cout << "*";
//     }

//     ejercicio 10
//     for(float val =-10.0 ; val < 20.0 ; val = -val *2){
//         cout << "*";
//     }


//     ejercicio 11
//     vector<bool> v(2);
//     for(int i=0; i<2; i++){
//         v[1-i] = !(i%2);
//     }
//     cout << v[0] && v[1];
//     return 0;


//     ejercicio 12
//     vector<int> a = {2,0,1};
//     vector<int> b = {1,2,3};
//     for(int i=0; i<3;i++){
//         b[a[i]] = b[2-i];
//     }
//     cout << b[0] << b[2] << endl;


//     ejercicio 13
//     double big = 1e15;
//     double small = 1e-15;
//     cout << fixed << big + small << endl;

//     ejerciio 14
//     int i = 3 , j= 0;
//     do{
//         i--;
//         j++;
//     } while(i>=0);
//     cout << j << endl;

//     ejercicio 15
//     int a = 1, b = 2;
//     int c = a << b;
//     int d = 1 << c;
//     int e = d >> d;
//     cout << e << endl;
// }



// ejercicio 6
// struct Str {
//     int in;
//     char ch;
// };
// int main(){
//     vector<Str> v = {{1, 'a'}, {2, 'b'}};
//     for(int i = 0; i < 2; i++){
//         v[i].in += (v[1-i].ch -v[i].ch);
//     }
//     cout << v[0].in << v[1].in<< endl;
// }



//int main(){
    // ejercicio 1
    // int a = 5 , j = 0;

    // while(a>0){
    //     a--;
    //     j++;
    // }
    // cout << j << endl;

    // ejercicio 2
    // int i = 1 , j = i++ , k= --i;

    // if(i>0){
    //     j++;
    //     k++;
    // }else{
    //     k++;
    //     i++;
    // }
    // if( k==0){
    //     i++;
    //     j++;
    // }else{
    //     if(k>0){
    //         k--;
    //     }else{
    //         k++;
    //     }
    //     i++;
    // }
    // cout << i * j * k << endl;

    // ejercicio 3
    // int a = 1, b = 2;
    // int c = a | b;
    // int d = c & a;
    // int e = d ^ 0;
    // cout << e << d << c << endl;

    // ejercicio 4
    // vector<vector<int>> g = {{2,4}, {3,6}, {5, 10}};
    // for(int i = 1; i >= 0 ; i--){
    //     for(int j=0; j<2; j++){
    //         g[i][j] += g[j][i];
    //     }
    // }
    // cout << g[1][1] << endl;

    // ejercicio 5
    // bool yes = !false;
    // bool no = !yes;
    // if (!no){
    //     cout << "true" << endl;
    // }else{
    //     cout << "false" << endl;
    // }
//}

