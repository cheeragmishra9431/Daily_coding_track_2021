#include<iostream>
using namespace std;
// class abc
// {
//     int a, b, c;

// public:
//     void put_data(int x, int y, int z)
//     {
//         a = x;
//         b = y;
//         c = z;
//     }
//     void print_data()
//     {
//         cout << a << ' ' << b << ' ' << c;
//     }
// }; 
class y;
class x{
    int a;
    public:
        friend void swap(x,y);
        x(int x){
            a=x;
        }
    
};
class y{
    int b;
    public:
    friend void swap(x,y);
    y(int x){
            b=x;
        }
};
void swap(x obj1, y obj2){
    cout<<obj1.a<< " "<< obj2.b<<endl;;
    int x=obj1.a;
    obj1.a=obj2.b;
    obj2.b=x;
    cout<<obj1.a<< " "<< obj2.b;

    
}


int main(){
    x kls(1);
    y kl(2);
    swap(kls,kl);
    return 0;
}