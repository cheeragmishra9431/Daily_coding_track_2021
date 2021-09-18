#include<iostream>
#include<queue>
using namespace std;
struct person{
    int age;
    int height;
    person(int a, int b){
        age=a;
        height=b;
    }
};
struct cmp{
    bool opera(person const& p1, person const & p2){
        return p1.age>p2.age;
    }

};

int main(){
//code;
    priority_queue<int,vector<int> ,greater<int>> pq;
    pq.push(1011);
    pq.push(101);
    pq.push(102);
    pq.push(1012121);
    priority_queue<person,vector<int> , cmp>;
    while (pq.empty()==false)
    {
        /* code */
        cout<<pq.top()<<endl;
        pq.pop();
    }
    
return 0;
}
