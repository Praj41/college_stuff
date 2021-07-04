#include <iostream>

template<class T>
class stack {
    const int capacity = 9;
    T *data = new T[capacity];
    unsigned int size;
public:
    stack();
    ~stack();
    void display();
    void push(T);
    T pop();
};

template<class T>
stack<T>::stack() : size(0){

    for (int i = 0; i < capacity; ++i)
        data[i] = NULL;
}

template<class T>
void stack<T>::display() {
    std::cout << "\n[";
    for (int i = size - 1; i > 0; --i) {
        std::cout << data[i] << ", ";
    }
    std::cout << data[0] << "]\n" << std::endl;
}

template<class T>
void stack<T>::push(T input) {
    if (size == capacity) {
        std::cout << "Could not add the item stack full" << std::endl;
        return;
    }
    data[size] = input;
    ++size;
}

template<class T>
T stack<T>::pop() {
    --size;
    return data[size];
}

template<class T>
stack<T>::~stack() {
    delete [] data;
}

int main() {

    stack<int> st;
    int choice = 0;

    do {
        std::cout << "1-Push on stack\n2-Display stack\n3-Pop from the stack\n4-Automate\n0-Exit" << std::endl;
        std::cin >> choice;
        
        switch (choice) {
            case 1: {
                int k;
                std::cin >> k;
                st.push(k);
            }
            case 2: {
                st.display();
                break;
            }
            case 3: {
                std::cout << "Popped Item: " << st.pop() << std::endl;
                break;
            }
            case 4: {
                for (int i = 0; i < 5; ++i) {
                    st.push(i * 45);
                }

                st.display();

                for (int i = 0; i < 7; ++i) {
                    st.push(i * 45 * 3);
                }

                st.display();

                for (int i = 0; i < 5; ++i) {
                    std::cout << "Popped Item: " << st.pop() << std::endl;
                }

                st.display();
                break;
            }
            default:
                choice = 0;
        }

    } while (choice);
    return 0;
}
