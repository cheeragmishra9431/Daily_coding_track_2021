#include<iostream>
#include<string>
using namespace std;
void generatesubs(string st, int a=0, string ty ="")
{
    if(a== st.length()){
        cout<< ty<<endl;;
        return;

    }
generatesubs(st,a+1, ty);
generatesubs(st,a+1, ty+st[a]);
}
int main(){
    
    string as;
    cout<<"enter the string and the number as well"<< endl;
    cin>>as;
    generatesubs(as);
    return 0;
}