#include <iostream>

class GradeTracker {
private:
    int* grades;
    int size;
    int capacity;

public:
    // Constructor
    GradeTracker(int initialCapacity = 10) {
        grades = new int[initialCapacity];
        size = 0;
        capacity = initialCapacity;
    }

    // Copy constructor
    GradeTracker(const GradeTracker& other) {
        size = other.size;
        capacity = other.capacity;
        grades = new int[capacity];
        for (int i = 0; i < size; i++) {
            grades[i] = other.grades[i];
        }
    }

    // Copy assignment operator
    GradeTracker& operator=(const GradeTracker& other) {
        if (this != &other) {
            delete[] grades;
            size = other.size;
            capacity = other.capacity;
            grades = new int[capacity];
            for (int i = 0; i < size; i++) {
                grades[i] = other.grades[i];
            }
        }
        return *this;
    }

    // Destructor
    ~GradeTracker() {
        delete[] grades;
    }

    // Add a grade to the array
    void addGrade(int grade) {
        if (size >= capacity) {
            int* newGrades = new int[capacity * 2];
            for (int i = 0; i < size; i++) {
                newGrades[i] = grades[i];
            }
            delete[] grades;
            grades = newGrades;
            capacity *= 2;
        }
        grades[size] = grade;
        size++;
    }

    // Display the grades in the array
    void displayGrades() {
        for (int i = 0; i < size; i++) {
            std::cout << grades[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create a new GradeTracker object
    GradeTracker tracker;

    // Add some grades
    tracker.addGrade(75);
    tracker.addGrade(80);
    tracker.addGrade(90);

    // Display the grades
    std::cout << "Grades: ";
    tracker.displayGrades();

    // Create a copy of the GradeTracker object
    GradeTracker trackerCopy = tracker;

    // Add more grades to the original tracker
    tracker.addGrade(95);
    tracker.addGrade(85);

    // Display the grades for both trackers
    std::cout << "Original Grades: ";
    tracker.displayGrades();
    std::cout << "Copied Grades: ";
    trackerCopy.displayGrades();

    // Assign the original tracker to a new tracker
    GradeTracker newTracker;
    newTracker = tracker;

    // Add more grades to the original tracker
    tracker.addGrade(100);

    // Display the grades for both trackers
    std::cout << "Original Grades: ";
    tracker.displayGrades();
    std::cout << "New Grades: ";
    newTracker.displayGrades();

    return 0;
}

