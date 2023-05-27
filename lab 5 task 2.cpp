#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

void game(int NumberOfstudents)
{
int GuessOf_Player,RandNumber;
if(NumberOfstudents==0)
{
cout<<" GAME OVER :"<<endl;
return ;
}
cout<<"Guess the number :"<<endl;
cin>>GuessOf_Player;

srand(time(NULL));
RandNumber=rand()%100;

if(RandNumber==GuessOf_Player )
{
cout<<"Coungratulations you won the game "<<endl;

}
 else if(RandNumber<GuessOf_Player )
{
cout<<" \n you ennter the higher number  :"<<endl;

}
 else if(RandNumber>GuessOf_Player )
{
cout<<" you enter the lower number  "<<endl;

}
game(NumberOfstudents-1);
}


int main()
{
int NumberOfstudents;
cout<<"Enter the number of plyer :"<<endl;
cin>>NumberOfstudents;
game(NumberOfstudents);
}
