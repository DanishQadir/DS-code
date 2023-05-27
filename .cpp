#include<iostream>
using namespace std;
    
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    
    cout<<"Enter elements:"; 
    int **pointer = new int *[n];
    
    for(int i=0;i<n;i++){
        pointer[i] = new int[i+1];
        
        for(int j=0;j<(i+1);j++){
        	
            cin>>pointer[i][j];
        }
    } 
    
    cout<<"Jagged Array:"<<endl; 
    for(int i=0;i<n;i++){
    	
        for(int j=0;j<(i+1);j++){
        	
            cout<<pointer[i][j]<<" ";           
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++){
    	
        delete []pointer[i];
    }
    delete []pointer;
}
   
