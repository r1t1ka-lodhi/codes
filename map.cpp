#include <iostream>
#include<map>
#include<string>
using namespace std;
//Map is an associative array
int main(){
    map<string,int> marks;
    marks["harry"]=67;
    marks["sukkhi"]=67;
    marks["dhurivi"]=67;
    marks.insert({{"ruhi",56},{"aruhi",89}});
    map<string,int> ::iterator iter;
    for(iter=marks.begin(); iter!=marks.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";

    }
    cout<<marks.size()<<endl;
    cout<<marks.max_size()<<endl;
    cout<<marks.empty()<<endl;
    return 0;
}