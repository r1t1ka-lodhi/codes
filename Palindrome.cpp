#include <iostream>
#include<vector>
using namespace std;

bool checkpalindrome(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(name[s++]!=name[e--]){
            return 0;
        }
    }
    return true;
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;

    }
    return count;
}
char isLower(char ch){
    char temp=ch+'a'- 'A';
    return temp;
}
int main(){
	char name[20];
    cout<<"Enter your name"<<endl;
    cin>> name;
    cout<<"your name is "<<name<<endl;
    int len=getLength(name);
    cout<<"length is "<<len<<endl;
    reverse(name,len);
    cout<<"your reverse  name is "<<name<<endl;
    cout<<checkpalindrome(name,len)<<endl;
    cout<<isLower('C');
	return 0;
}
