#include <iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void set_roll_no(int a){
        roll_no=a;
    }
    void print_number(){
        cout<<"your roll number is"<<
            roll_no<<endl;
    }
};

class test:virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(){
        cout<<"your result is here :"<<endl
            <<"maths"<<maths<<endl
            <<"physics"<<physics<<endl;
    }
};

class sports: virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(){
        cout<<"your PT score is"<<endl
            <<score<<endl;
    }
};

class result : public test,public sports{
    float total;
    public:
    void display(){
        total=physics+maths+score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is"<<total<<endl;
    }
} ;
int main(){
    result re;
    re.set_roll_no(23);
    re.set_marks(67,89);
    re.set_score(45);
    re.display();

    return 0;
}