#include<iostream>
#include<set>
using namespace std;
void sd(set<int> s){
    for(auto it=s.begin(); it !=s.end(); it++){
        cout<<*it<<endl;
    }
}
int main(){
//code;
set<int> s;
s.insert(10);
s.insert(210);
s.insert(120);
s.insert(102);
sd(s);
return 0;
}