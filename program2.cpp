#include<iostream>
using namespace std;
int main(int agrc,char* agrv)
{
       //int argc,argv,n;
//       cout<<"Enter any number : "<<endl;
       //cin>>number;
       if(int argc>=2){
        n=atoi(argv[1]);
       if(n%2==0){
	   
       cout<<n<<" \t is even number :"<<endl;
        }
       else{
	   
       cout<<n<<" \t is odd number :"<<endl;
   }
   }
   return 0;
}
