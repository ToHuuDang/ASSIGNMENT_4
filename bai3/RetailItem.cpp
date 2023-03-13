#include <iostream>
#include <string>

using namespace std;

class RetailItem {
public:

    RetailItem(string description, int unitsOnHand, double price) {
        this->description = description;
        this->unitsOnHand = unitsOnHand;
        this->price = price;
    }


    string getDescription() const {
        return description;
    }

    int getUnitsOnHand() const {
        return unitsOnHand;
    }

    double getPrice() const {
        return price;
    }

    void setDescription(string description) {
        this->description = description;
    }

    void setUnitsOnHand(int unitsOnHand) {
        this->unitsOnHand = unitsOnHand;
    }

    void setPrice(double price) {
        this->price = price;
    }

private:
    string description;
    int unitsOnHand;
    double price;
};

int main() {
 
    RetailItem item1("Shirt", 10, 19.99);
    RetailItem item2("Jeans", 5, 29.99);
    RetailItem item3("Jacket", 3, 59.99);

 
    cout << "Item 1: " << item1.getDescription() << ", " << item1.getUnitsOnHand() << ", $" << item1.getPrice() << endl;
    cout << "Item 2: " << item2.getDescription() << ", " << item2.getUnitsOnHand() << ", $" << item2.getPrice() << endl;
    cout << "Item 3: " << item3.getDescription() << ", " << item3.getUnitsOnHand() << ", $" << item3.getPrice() << endl;

    return 0;
}
