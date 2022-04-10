#include <iostream>

class Item {
private:
    int id;
    char type;

public:
    Item(int const itemId, char const itemType) : id(itemId), type(itemType) {};
    
    void setId(int const itemId) {
        id = itemId;
    }

    int getId() {
        return id;
    }

    void setType(char const itemType) {
        type = itemType;
    }

    char getType() {
        return type;
    }
};

void addOne(Item &a, Item &b) {
    a.setId(10);
    a.setType('X');

    b.setId(20);
    b.setType('Y');
}

int main() {
    Item a(1, 'A');
    Item b(2, 'B');

    addOne(a, b);

    std::cout << "a id : " << a.getId() << std::endl;
    std::cout << "a type : " << a.getType() << std::endl;

    std::cout << "b id : " << b.getId() << std::endl;
    std::cout << "b type : " << b.getType() << std::endl;
}
