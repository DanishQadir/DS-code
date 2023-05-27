#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

class Hospital {
private:
    queue<string> waiting_room; 
    stack<string> leaving_room; 
    
public:
    void add_patient(string patient) {
        waiting_room.push(patient);
    }
    
    void see_next_patient() {
        if (!leaving_room.empty()) {
            leaving_room.pop();
        }
        if (!waiting_room.empty()) {
            leaving_room.push(waiting_room.front());
            waiting_room.pop();
        }
    }
    
    void print_waiting_room() {
        cout << "Patients waiting to see the doctor:\n";
        if (waiting_room.empty()) {
            cout << "None\n";
        } else {
            queue<string> temp_queue = waiting_room;
            while (!temp_queue.empty()) {
                cout << temp_queue.front() << endl;
                temp_queue.pop();
            }
        }
    }
    
    void print_leaving_room() {
        cout << "Patients waiting to leave the hospital:\n";
        if (leaving_room.empty()) {
            cout << "None\n";
        } else {
            stack<string> temp_stack = leaving_room;
            while (!temp_stack.empty()) {
                cout << temp_stack.top() << endl;
                temp_stack.pop();
            }
        }
    }
};

int main() {
    Hospital hospital;
    hospital.add_patient("Patient 1");
    hospital.add_patient("Patient 2");
    hospital.add_patient("Patient 3");
    hospital.see_next_patient();
    hospital.see_next_patient();
    hospital.see_next_patient();
    
    hospital.print_waiting_room();
    hospital.print_leaving_room();
    
    return 0;
}

