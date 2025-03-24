#include <iostream>
#include<list>
using namespace std;
//list->bidirectional linear list that shows the efficient operations of insertion and deletion

template <class T>
void display( list<T> &lst){
    list<int>:: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<"  ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;//list of 0 length    
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    //list<int>:: iterator iter;
    //iter=list1.begin();
    //cout<<*iter;
    display(list1);

    //list1.pop_back();
    //list1.pop_front();
    //list1.remove(9);
    display(list1);
    
    list<int> list2(7);//empty list of 7 length 
    list<int>:: iterator iter;
    iter=list2.begin();
    *iter=45;
    *iter++;
    *iter=45;
    *iter++;
    *iter=45;
    *iter++;
    display(list2);
    
    //list1.sort();
    //list1.revese();
    cout<<"after merging the two";
    list1.merge(list2);
    display(list1);

    return 0;
}