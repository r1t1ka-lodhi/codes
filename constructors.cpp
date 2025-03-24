#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;
    friend void distance(point o1, point o2);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The ponts are (" << x << "," << y << ")" << endl;
    }
 
};
void distance(point o1, point o2)
{
    int dist;
    int x = o2.x - o1.x;
    int y = o2.y - o1.y;
    dist = sqrt(pow(x, 2) + pow(y, 2));
    cout << "The distance between points is" << dist << endl;
}
int main()
{
    point p1(0,6);
    p1.display();

    point p2(0,56);
    p2.display();
    distance(p1, p2);
    return 0;
}