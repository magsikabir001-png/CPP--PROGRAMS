#include<iostream>
using namespace std;
int main(){
	

/*	int n;
	cout<<"enter n";
	cin>>n;
	if(n%2==0) {
		cout<<"even"<<endl;
	}  else{
		cout<<"odd"<<endl;
	}



	int a;
	cout<<"enter a value";
	cin>>a;
	int b;
	cout<<"enter b value";
	cin>>b;
	if(a>b  &&  b<a){
		cout<<" a is greater"<<endl;
	}  else {
		cout<<"b is greater"<<endl;
	}*/
	
	string temp;
	cout<<"enter temp";
	cin>>temp;
	string hum;
	cout<<"enter hum";
	cin>>hum;
	if(temp == "warm"  && hum =="dry") {
		cout<<"play tennis"<<endl;
	}  else if(temp=="warm"  && hum=="humid") {
		cout<<"swim"<<endl;
	} else if(temp=="cold"  &&  hum=="dry")  {
		cout<<"play basketball"<<endl;
	}  else{
		cout<<"watch tv"<<endl;
	}

	return 0;
}