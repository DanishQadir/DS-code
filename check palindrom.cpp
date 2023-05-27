#include<iostream>
#include<string>
using namespace std;
 
 int main()
 {
 	string word;
 	cout<<"Enter any Alphabatic word :"<<endl;
 	cin>>word;
 	int len=word.length();
 	for(int i=0;i<len/2;i++)
 	{
 		if(word[i]!=word[len-1])
 		{
 			cout<<"Not palindrom :"<<endl;
 			break;
		 }
		 else
		 {
		 	cout<<" Palindrom :"<<endl;
		 	break;
		 }
		 
	 }
 }
