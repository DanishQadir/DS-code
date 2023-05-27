#include <iostream>
#include <stdexcept> // For std::out_of_range

class DynamicSafeArray {
private:
    int* array;
    int size;
    int capacity;

public:
    DynamicSafeArray() : array(0), size(0), capacity(0) {}

    DynamicSafeArray(int capacity) {
        if (capacity < 0) {
            throw std::invalid_argument("Capacity must be non-negative");
        }

        this->array = new int[capacity];
        this->size = 0;
        this->capacity = capacity;
    }

    DynamicSafeArray(const DynamicSafeArray& other) {
        this->size = other.size;
        this->capacity = other.capacity;
        this->array = new int[this->capacity];

        for (int i = 0; i < this->size; i++) {
            this->array[i] = other.array[i];
        }
    }

    ~DynamicSafeArray() {
        delete[] array;
    }

    int getSize() const {
        return size;
    }

    void resize(int newCapacity) {
        if (newCapacity < size) {
            throw std::invalid_argument("New capacity must be greater than or equal to size");
        }

        int* newArray = new int[newCapacity];

        for (int i = 0; i < size; i++) {
            newArray[i] = array[i];
        }

        delete[] array;

        array = newArray;
        capacity = newCapacity;
    }

    void addGrade(int grade) {
        if (size == capacity) {
            resize(capacity * 2 + 1);
        }

        array[size] = grade;
        size++;
    }

    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }

        return array[index];
    }

    const int& operator[](int index) const {
        if (index < 0 || index >= size) {
            throw std::out_of_range("Index out of range");
        }

        return array[index];
    }

    DynamicSafeArray& operator=(const DynamicSafeArray& other) {
        if (this != &other) {
            delete[] array;

            this->size = other.size;
            this->capacity = other.capacity;
            this->array = new int[this->capacity];

            for (int i = 0; i < this->size; i++) {
                this->array[i] = other.array[i];
            }
        }

        return *this;
    }
};

int main() {
    DynamicSafeArray grades(10);

    std::cout << "Enter grades (-1 to stop): ";
    int grade = 0;

    while (grade != -1) {
        std::cin >> grade;

        if (grade != -1) {
            grades.addGrade(grade);
        }
    }

    std::cout << "Grades: ";
    for (int i = 0; i < grades.getSize(); i++) {
        std::cout << grades[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

