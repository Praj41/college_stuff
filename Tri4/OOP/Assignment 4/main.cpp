#include <iostream>
#include <string>
#include <fstream>

struct Item {
    int number{}, quantity{};
    std::string name{};
    float price{};
};

class itemManager {
    Item item;
public:
    itemManager() = default;
    void accept();
    void display() const;
    void addToFile();
    void dumpFile();
    void searchItem();
};

void itemManager::accept() {

    std::cout << "\nEnter Item Number : ";
    std::cin >> item.number;

    std::cin.ignore();
    std::cout << "\nEnter Item Name : ";
    std::getline(std::cin, item.name);

    std::cout << "\nEnter Item Price : ";
    std::cin >> item.price;

    std::cout << "\nEnter Item Quantity : ";
    std::cin >> item.quantity;
    std::cout << std::endl;
}

void itemManager::display() const {

    std::cout << "\nItem Number : " << item.number;

    std::cout << "\nItem Name : " << item.name;

    std::cout << "\nItem Price : " << item.price;

    std::cout << "\nItem Quantity : " << item.quantity << std::endl;

}

void itemManager::addToFile() {
    accept();
    std::ofstream file("..\\Inventory.dat", std::ios::binary | std::ios::app);

    file.write((char*) this, sizeof(Item));
    file.close();
}

void itemManager::dumpFile() {
    std::ifstream file("..\\Inventory.dat", std::ios::binary | std::ios::in);

    while (!file.eof()) {
        file.read((char *) this, sizeof(item));

        display();
    }
    file.close();
}

void itemManager::searchItem() {
    std::ifstream file("..\\Inventory.dat", std::ios::binary | std::ios::in);

    int query;
    std::cout << "Enter the item number to be searched" << std::endl;
    std::cin >> query;
    bool foundFlag = false;

    while (!file.eof()) {
        file.read((char *) this, sizeof(item));

        if (item.number == query) {
            display();
            foundFlag = true;
            break;
        }
    }
    file.close();

    if (!foundFlag)
        std::cout << "Record not found" << std::endl;
}

int main() {
    itemManager* manager = new itemManager;

    int choice = 1;

    while (choice) {
        std::cout << "_______________________________________"
            << "\n1. Add Item to file\n2. Display Items to console\n3. Search Item\n0. Exit" << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1: manager->addToFile();
                break;
            case 2: manager->dumpFile();
                break;
            case 3: manager->searchItem();
                break;
            case 0: return 0;
            default: return -1;
        }
    }
    return 0;
}
