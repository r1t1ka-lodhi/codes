#include <iostream>
using namespace std;
///function templates
// if the arguments given gets the perfect match
//then the templatised function is not used
//and this manner ambiguity is resolved
float funcavg(int a, int b){
    float avg=(a+b)/2.0;
    return avg;
}
float funcavg2(int a,float b){ 
    float avg=(a+b)/2.0;
    return avg;
}
template< class T1, class T2>
float funcavg( T1 a, T2 b){
    float avg=(a+b)/2.0;
    return avg;
}

int main(){
    float a;
    a=funcavg(5,2.4);
    cout<<"the average of these number is "<<a<<endl;
    return 0;
}