#include <iostream>
#include <string>
using namespace std;
class Product {
public:
    Product(string name, float price, string description, bool available)  : name_(name), price_(price), description_(description), available_(available) {}

    string getName() const { return name_; }
    float getPrice() const { return price_; }
    string getDescription() const { return description_; }
    bool isAvailable() const { return available_; }

private:
    string name_;
    float price_;
    string description_;
    bool available_;
};
void swap(Product& a, Product& b) {
    Product temp = a;
    a = b;
    b = temp;
}
int partition(Product products[], int low, int high) {
    float pivot = products[high].getPrice();
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (products[j].getPrice() < pivot) {
            i++;
            swap(products[i], products[j]);
        }
    }
    swap(products[i + 1], products[high]);
    return i + 1;
}
void quickSort(Product products[], int low, int high) {
    if (low < high) {
        int pi = partition(products, low, high);
        quickSort(products, low, pi - 1);
        quickSort(products, pi + 1, high);
    }
}

int main() {
    Product products[] = {
        {"Product 1", 9.99, "Description 1", true},
        {"Product 2", 14.99, "Description 2", false},
        {"Product 3", 4.99, "Description 3", true},
    };
    int n = 3;
    quickSort(products, 0, n - 1);
    cout << "Sorted Products:" << endl;
    for (int i = 0; i < n; i++) {
        cout << products[i].getName() << " - $" << products[i].getPrice() << endl;
    }

    return 0;
}

