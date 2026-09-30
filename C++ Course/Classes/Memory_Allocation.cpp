#include <iostream>

using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initialCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your Item No " << counter + 1 << " : ";
    cin >> itemId[counter];
    cout << "Enter Price of your Item: ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{

    Shop shop;
    shop.initialCounter();
    for (int i = 0; i < 4; i++)
    {
        shop.setPrice();
    }
    shop.displayPrice();

    return 0;
}