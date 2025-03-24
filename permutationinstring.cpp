#include <iostream>
using namespace std;

class solution{
    private:
    bool checkequal(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }
    public:
    bool checkInclusion(string s1,string s2){
        int count[26]={0};
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count[index]++;
        }

        int i=0;
        int windowsize=s1.length();
        int count1[26]={0};
        while(i<windowsize && i<s2.length()){
            int index=s2[i]-'a';
            count1[index]++;
            i+++
        }
        if(checkequal(count,count1)){
            return 1;
        }
        while(i<s2.length()){
            char ch=s2[i];
            int index=ch-'a';
            count1[index]++;
            char oldch=s2[i-windowsize];
            index=oldch-'a';
            count2[index--];
            i++;
            if(checkequal(count,count1)){
                return 1;
            }

        }
        return 0;
    }
}
int main(){
    
    return 0;
}