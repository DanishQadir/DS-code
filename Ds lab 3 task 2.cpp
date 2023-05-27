#include <iostream>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

bool isLessThan(Date a, Date b) {
	
    if (a.year < b.year) {
    	
        return true;
        
    } 
	else if (a.year == b.year && a.month < b.month) {
		
		
        return true;
    } 
	
	else if (a.year == b.year && a.month == b.month && a.day < b.day) {
        return true;
    }
    return false;
}



void swapDates(Date& a, Date& b) {
	
    Date temp = a;
    a = b;
    b = temp;
}



void selectionSort(Date arr[], int n) {
	
    for (int i = 0; i < n - 1; i++) {
    	
        int minIdx = i;
        
        for (int j = i + 1; j < n; j++) {
        	
            if (isLessThan(arr[j], arr[minIdx])) {
            	
                minIdx = j;
            }
            
        }
        if (minIdx != i) {
            swapDates(arr[i], arr[minIdx]);
        }
    }
}


void printDates(Date arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i].day << "/" << arr[i].month << "/" << arr[i].year << endl;
    }
}


int main() {
    const int MAX_DATES = 3;
    
    Date dates[MAX_DATES];
    
    cout << "Enter " << MAX_DATES << " dates in the format dd/mm/yyyy:" << endl;
    
    for (int i = 0; i < MAX_DATES; i++) {
    	
        cin >> dates[i].day >> dates[i].month >> dates[i].year;
    }
    
    selectionSort(dates, MAX_DATES);
    
    cout << "Sorted dates:" << endl;
    
    printDates(dates, MAX_DATES);
    
    return 0;
}

