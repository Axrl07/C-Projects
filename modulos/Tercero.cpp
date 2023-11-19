#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> t = {"alpha", "beta", "gamma"};
    int *cnt = new int[3], *p = &cnt[0];
    for(int i = 0; i < t.size(); i++){
        *p++ = t[i].length();
    }
    cout << cnt[0] << cnt[1] << cnt[2] << endl;
    delete [] cnt;
}


// ejercicio 20
// int *make(int v){
//     int *p = new int;
//     *p = v +1;
//     return p;
// }
// int *play(int &v){
//     cout << ++v;
//     return &v;
// }
// int remove(int *v){
//     delete v;
// }
// int main(){
//     remove(play(*make(3)));
// }



// ejercicio 19
// int fun(long a){
//     return a / a;
// }
// int fun(int a){
//     return 2 * a;
// }
// int fun(double a = 3.0){
//     return a;
// }
// int main(){
//     cout << fun(1000000000L) << fun(1L) << fun(1.f) << endl;
// }



// ejercicio 18
// int fun(int* t){
//     t[0] += t[1];
//     return  t[0];
// }
// int main(){
//     vector<int> t = {5,6,7};
//     cout << fun(&t[1]);
//     cout << t[0];
// }



// ejercicio 17
// float Float(float x){
//     return 2 * x / (.5 * x);
// }
// void Void(int n){
//     float v = n;
//     v = Float(v);
//     cout << v;
// }
// int main(){
//     Void(1);
// }



// ejercicio 16
// string fun(string &t, string s = "", int r = 1){
//     while(--r){
//         s += s;
//     }
//     t = t + s;
//     return s;
// }
// int main(){
//     string name = "x";
//     cout << fun(name, name);
//     cout << name << endl;
// }



// ejercicio 15
// int main(){
//     int *val = new int;
//     *val = sizeof(val) / sizeof(int *);
//     int *tab = new int[*val];
//     tab[0] = *val;
//     delete val;
//     cout << *tab;
//     delete [] tab;
// }



// ejerciciio 14
// int f1(int *a){
//     return *a;
// }
// int *f2(int *a){
//     return a;
// }
// int *f3(int &a){
//     return &a;
// }
// int main(){
//     int value = 2;
//     cout << f1(f2(f3(value))) << endl;
// }



// ejercicio 13
// int main(){
//     float x =  3.14, *p = &x;
//     p[0] = ++x;
//     cout << x << endl;
// }



// ejercicio 12
// int fun(int p1 = 1, int p2 = 1){
//     return p2 + p1;
// }
// int main(){
//     cout << fun(fun(), fun(2)) << endl;
// }



// ejercicio 11
// float fun(float arg){
//     return arg * arg + arg +1;
// }
// int main(){
//     cout << fun(fun(1.0));
// }


// ejercicio 10
// int main(){
//     vector<float> f(2);
//     float *p1 = f.data(), *p2 = p1 +1;
//     cout << (p2 - p1) / sizeof(float) << endl;
// }



// ejercicio 9
// int main(){
//     vector<int> t = {3,2,1};
//     int *ptr = t.data() +1;
//     (*(ptr+1))++;
//     (*(ptr-1))++;
//     cout << t[0] << t[1] << t[2] << endl;
// }



// ejercicio 8
// int f1(int *a){
//     return *a +1;
// }
// int *f2(int *a){
//     return a +1;
// }
// int *f3(int &a){
//     return &a +1;
// }
// int main(){
//     vector<int> t = {0,1,2,3};
//     cout << f1(f3(*f2(t.data())));
// }

// ejercicio 7
// int fun(long a, long b = 1){
//     return a << b;
// }
// int fun(int a , char b = 'z'){
//     return b -a;
// }
// int fun(float a, float b = 0){
//     return a * b;
// }
// int main(){
//     cout << fun(1L) << fun('x') << fun(2e0f) << endl;
// }



// ejercicio 6
// int fun(float a, float b){
//     return a / b;
// }
// int main(){
//     cout << fun(fun(1.,2.), fun(2.,1.)) << endl;
// }



// ejercicio 5
// string fun(string t, string s="x", int r=1){
//     while(--r){
//         s += s;
//     }
//     t = t + s;
//     return s;
// }
// int main(){
//     string name = "a";
//     cout << fun(name) << endl;
//     cout << name << endl;
// }



// ejercicio 4
// int main(){
//     vector<int> tab= {1,2,4};
//     int *p1 = &tab[0], *p2 = p1 +2;
//     tab[1] = p2[-1] + *p1;
//     cout << tab[1] << endl;
// }




//ejercicio 3
// int f1(int a){
//     return ++a;
// }
// int f2(int &a){
//     return ++a;
// }
// int f3(int *a){
//     return *a + 1;
// }
// int main(){
//     int value = 2;
//     cout << f1(value) << endl;
//     cout << f2(value) << endl;
//     cout << f3(&value) << endl;
//     return 0;
// }


// ejercicio 2
// int fun(int a, int b){
//     return a + b;
// }
// int fun(int a, char b){
//     return b - a;
// }
// int fun(float a, float b){
//     return a * b;
// }
// int main(){
//     cout << fun(1,0) << fun('a', 'c') << fun(2.f, 2.f) << endl;   
// }



//ejercicio 1
// struct S{
//     int *f;
// };

// void make(S *algo, float x = 10){
//     float *f = new float;
//     *f = sizeof(*f) / sizeof(float) * 10;
//     algo->f = f;
// }

// int main(){
//     S *ss = new S;
//     make(ss);
//     cout << *(*ss).f << endl;
//     delete ss->f;
//     delete ss;
// }