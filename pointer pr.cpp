#include<iostream>
using namespace std;
int main(){
	/*int a=2;
	int*ptr=&a;
	int **ptr2=&ptr;
	cout<<ptr<<endl;
	cout<<&a<<endl;
	cout<<&ptr<<endl;
	cout<<ptr2<<endl;
	
	float price=10.5;
	float*ptr=&price;
	cout<<&price<<endl;
	cout<<ptr<<endl;


   int a=10;
   int*ptr=&a;
   cout<<*(&a)<<endl;
   cout<<*(ptr)<<endl;
   
   int a=10;
   int*ptr=&a;
   int**ptr2=&ptr;
   cout<<*(ptr2)<<endl;
   cout<<ptr<<endl;
   
int arr[]={1,2,3,4,5};
cout<<arr<<endl;
cout<<*arr<<endl;

int a=12;
int *ptr=&a;
cout<<ptr<<endl;
ptr++;
cout<<ptr<<endl;

int b=25;
int *ptr=&b;
cout<<ptr<<endl;
ptr--;
cout<<ptr<<endl;

float a=10.3;
float*ptr=&a;
cout<<ptr<<endl;
ptr++;
cout<<ptr<<endl;*/

int a=10;
int*ptr=&a;
cout<<ptr<<endl;
ptr=ptr+2;
cout<<ptr<<endl;
return 0;
}