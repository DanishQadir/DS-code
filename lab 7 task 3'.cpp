#include <iostream>
#include <string>
using namespace std;
class Runner {
public:
    string name;
    int finish_time;

    Runner() {}
    Runner(string name, int finish_time) {
        this->name = name;
        this->finish_time = finish_time;
    }
};

class Marathon {
private:
    Runner runners[10];
    void merge(Runner arr[], int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        Runner leftArr[n1], rightArr[n2];

        for (int i = 0; i < n1; i++) {
            leftArr[i] = arr[left + i];
        }
        for (int i = 0; i < n2; i++) {
            rightArr[i] = arr[mid + 1 + i];
        }

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (leftArr[i].finish_time <= rightArr[j].finish_time) {
                arr[k] = leftArr[i];
                i++;
            }
            else {
                arr[k] = rightArr[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            arr[k] = leftArr[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = rightArr[j];
            j++;
            k++;
        }
    }
    void mergeSort(Runner arr[], int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }

public:
    Marathon() {}
    void inputRunners() {
        for (int i = 0; i < 10; i++) {
            string name;
            int finish_time;

            cout << "Enter participant " << i + 1 << "'s name: ";
            cin >> name;
            cout << "Enter participant " << i + 1 << "'s finish time (in seconds): ";
            cin >> finish_time;

            runners[i] = Runner(name, finish_time);
        }
    }
    void displayTop5() {
        mergeSort(runners, 0, 9);

        cout << "\nTop 5 fastest runners:\n";
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << runners[i].name << " - " << runners[i].finish_time << " seconds\n";
        }
    }
};
int main() {

    Marathon marathon;

    marathon.inputRunners();

    marathon.displayTop5();

    return 0;
}

