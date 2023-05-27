#include<iostream>
using namespace std;

void merg(int array[], int left, int right ,int mid)
{
	
	int size_of_array1=mid-left+1;
	int size_of_array2=right-mid;
	// making two new arrays
	int* temp_array1=new int[size_of_array1];
	int* temp_array2=new int[size_of_array2];
	// haren enhn arrays mn maain array jeko break kayo hasen uho assign kandasens 
	for(int i=0; i<size_of_array1; i++ )
	{
		temp_array1[i]=array[left+i];//mid kha left wara element hn array mn assign thenda wenda 
	}
	for(int i=0 ; i<size_of_array2;i++)
	{
		temp_array2[i]=array[mid+i+1];// mid khar right wara element hn array mn assign thenda wenda
	}
	int i=0;
	int j=0;
	int k=left;// hity left  b zer0 j brabar aahy cho jo left= 0th index 
	
	while(i<size_of_array1 && j< size_of_array2)
	{
		if(temp_array1[i]<temp_array2[j])// hy compare kando binhy array j values khe
		{
			array[k]=temp_array1[i]; // po en value khe array j 0th indwx mn asign kando
			i++;
			k++; // hn kha index + thi 0 kha 1 thi wendo ae e a haldo jesitaen While loop haldo
		}
		else{
		
		array[k]=temp_array2[j];
		k++; j++;// har dafa next value sa compare kanda wenda 
	}
	}
	while(i<size_of_array1)// agr j ka value rahi wayo hujy t uho hn khe b aarry n ==mn assign krero zarori ae
	{
		array[k]=temp_array1[i];// cho jo mathy condtion sa sabh j ja element ght hujan ae i ja wadheek hujan t po
		k++;i++;  // sabh value  array mn achi n saghda
	}
	while(j<size_of_array2)
	{
		array[k]=temp_array2[j];
		k++;j++;
	}
}
  void mergsort(int array[],int left, int right)
  {
  	if(left<right){
	  
   int mid=(left+right)/2;
     mergsort(array,left,mid);
     mergsort(array,mid+1,right);
     
     merg(array,left,right,mid);
  }
  }
   void swap(int array[],int start, int end )
   {
   	int temp;
   	temp=array[start];
   	array[start]=array[end];
   	array[end]=temp;
   }
  
  int partition(int array[] , int left , int right)
  {
  	int pivit=array[left];
  	int start=left+1; 
  	int end=right;
  	
  	while(start<end)
  	{
  		while(array[start]<pivit)
  		start++;
	  while(array[end]>pivit)
	  {
	  	end--;
	  }
	  if(start<end)
	  {
	  	swap(array,start,end);
	  }
	  swap(array,left,end);
	  return end;
  }
}  
  void quick(int array[],int left, int right)
  {
  	if(left<right)
  	{
  		int loc=partition(array,left,right);
  		quick(array,left,loc-1);
  		quick(array,loc+1,right);
	  }
  }
  int getmax(int array[], int size)
 {
 	int max=array[0];
 	for(int i=0 ; i<size ; i++)
 	{
 		if(array[i]>max)
 		max=array[i];
	 }
 	 return max;
	  }
	  
	void countsort(int array[],int size , int position)
	 {
	 	int arrayb[100];
	 	int count[size]={0};
	 	for(int i=0;i<size;i++)
	 	{
	 		++count[(array[i]/10)%10];
		 }
		 for (int i=1; i<size; i++)
		 {
		 	count[i]=count[i]+count[i-1];
		 }
		 for(int i=size-1; i>=0;i--)
		 {
		 	arrayb[--count[(array[i] / position)%10]]=array[i];
		 }
		 for(int i=0;i<size; i++)
		 {
		 	array[i]=arrayb[i];
		 }
	 }
 void Reddix(int array[],int size)
 {
 	int maxCount=getmax(array,size);
 	for(int position =1; maxCount/position>0; position*=10)
 	{
 		countsort(array,size,position);
	 }
}
 
  int main()
  {
   int size;
   cout<<"| Enter the size of array |"<<endl;
      cin>>size;
      int array[size];
      cout<<"Enter the array elements :"<<endl;
      for(int i=0;i<size;i++)
      {
      	cin>>array[i];
	  }
	  mergsort(array,0,size-1);
	   for(int i=0;i<size;i++)
      {
      	cout<<array[i]<<" ";
	  }
	  cout<<"Quick sort :"<<endl;
	  quick(array,0,size-1);
	   for(int j=0;j<size;j++)
      {
      	cout<<array[j]<<" ";
	  }
	  cout<<" Redix sort :"<<endl;
	  	  Reddix(array,size);
	  for(int i=0; i<size; i++)
	  {
	  	cout<<array[i]<<" ";
	  }
	  cout<<endl;
	  return 0;
  }
	
