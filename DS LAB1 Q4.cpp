#include <iostream> 
using namespace std; 

class Games 
{ 
	private: 
		string player_name; 
		int age; 
		int* ptr;
	
	public: 
		// Constructor to assign values 
		Games(string name, int age_val, int* ptr_val) 
		{ 
			player_name = name; 
			age = age_val; 
			ptr = ptr_val; 
		} 
		
		void print() 
		{ 
			cout << "Name: " << player_name << endl; 
			cout << "Age: " << age << endl; 
			cout << "Value pointed by ptr: " << *ptr << endl; 
		} 
		
		// Destructor to free memory pointed 
		// by pointer ptr 
		~Games() 
		{ 
			delete ptr; 
		} 
}; 

int main() 
{ 
	int val = 20; 
	int *ptr = &val; 
	
	Games g("Danish Baloch ", 20, ptr); 
	g.print(); 
		
	return 0; 
}
