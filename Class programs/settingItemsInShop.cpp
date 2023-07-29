#include <iostream>
using namespace std;

class shop
{
private:
    int itemId[100];
    int price[100];
    int cnt;

public:
    void initializingCount()
    {
        cnt = 0;
    }
    void setItem();
    void displayItem();
};
void shop::setItem()
{
    cout << "Enter the ID of an item:";
    cin >> itemId[cnt];
    cout << "Enter the price of that item:";
    cin >> price[cnt];
    cnt++;
}
void shop::displayItem()
{
    for (int i = 0; i < cnt; i++)
    {
        cout << "The Price of an item with id " << itemId[i] << " is " << price[i] << endl;
    }
}
int main()
{
    shop marutiKiranaStore;
    int x;
    marutiKiranaStore.initializingCount(); // It will initalize the value of cnt to 0;
    cout << "How many items you want to add in your shop:";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        marutiKiranaStore.setItem();
    }
    marutiKiranaStore.displayItem();
    // We are not calling this displayItem() function in for loop because we already put the for loop in the function defination.

    return 0;
}
