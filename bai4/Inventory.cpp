#include <iostream>
#include <iomanip>
using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
   
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }


    Inventory(int itemNumber, int quantity, double cost) {
        setItemNumber(itemNumber);
        setQuantity(quantity);
        setCost(cost);
        setTotalCost();
    }

    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    double getTotalCost() const {
        return totalCost;
    }

    void setItemNumber(int itemNumber) {
        if (itemNumber >= 0)
            this->itemNumber = itemNumber;
        else {
            cout << "Error: item number cannot be negative." << endl;
            exit(EXIT_FAILURE);
        }
    }

    void setQuantity(int quantity) {
        if (quantity >= 0)
            this->quantity = quantity;
        else {
            cout << "Error: quantity cannot be negative." << endl;
            exit(EXIT_FAILURE);
        }
    }

    void setCost(double cost) {
        if (cost >= 0.0)
            this->cost = cost;
        else {
            cout << "Error: cost cannot be negative." << endl;
            exit(EXIT_FAILURE);
        }
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }
};

int main() {

    Inventory item(1001, 50, 9.99);


    cout << fixed << setprecision(2);
    cout << "Item Number: " << item.getItemNumber() << endl;
    cout << "Quantity: " << item.getQuantity() << endl;
    cout << "Cost: $" << item.getCost() << endl;
    cout << "Total Cost: $" << item.getTotalCost() << endl;

    Inventory invalidItem(-1, 10, 5.99); 

    return 0;
}
