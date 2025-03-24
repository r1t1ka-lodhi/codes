#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; };
    void getprice();
    void setprice();
    void displayprice();
};

void shop::setprice()
{
    cout << "Enter id of your item" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter id of your price" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout << "the price of item with id" << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukhan;
    dukhan.initcounter();
    dukhan.setprice();
    dukhan.setprice();
    dukhan.setprice();
    dukhan.displayprice();
    return 0;
}