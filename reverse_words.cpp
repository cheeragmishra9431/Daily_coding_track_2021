#include<iostream>
using namespace std;
void reverse(string &str, int start, int end){
    while (start<=end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    } 
}
void reverse_words(string str){
    int start=0;
    reverse(str, 0, str.length()-1);
    for(int i=0; i<str.length(); i++){
        if(str[i]==1){
            reverse(str,start,i);
            start=i+1;
        }
    }
    for (int i = 0; i < str.length(); i++)
    {
        /* code */
        cout<<str[i];
    }
    

}
int main(){
//code;
string str="asd asda sda";
reverse_words(str);
return 0;
}