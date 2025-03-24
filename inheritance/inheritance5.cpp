#include <iostream>
using namespace std;
//multilevel inheritance
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student ::set_roll_number(int r)
{
    roll_number = r;
};
void student ::get_roll_number()
{
    cout << "The roll number is  " << roll_number << endl;
};

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
};
void exam::get_marks()
{
    cout << "the maths marks are " << maths << endl;
    cout << "the physics marks are " << physics << endl;
};
class result : public exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "The percentage is " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    result ruhi, sachit;
    sachit.set_roll_number(432);
    sachit.set_marks(34.6, 78.9);
    sachit.display_result();
    ruhi.set_roll_number(420);
    ruhi.set_marks(94.0, 90.0);
    ruhi.display_result();
    return 0;
}