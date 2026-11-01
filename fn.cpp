#include<iostream>
using namespace std;
// CHEAKING SUM
/*int sum(int a, int b) {
	int s=a+b;
	return s;
}
int main() {
	cout<<sum(10,5)<<endl;
	
	//MUTIPLICATION IN FUNCTION
	float multiply(float a, float b) {
		float s=a*b;
		return s;
	}
	int main(){
		cout<<multiply(10.1,4.3)<<endl;
		
		
		//FINDING MINIMUM IN TWO NUMBER
		int minOfTwo(int a, int b) {
			if(a<b) {
				return a;
			} else{
				return b;
			}
		}
	int main(){
		cout<<minOfTwo(6,4)<<endl;

	
	FINDING MAXIMUM IN TWO NUMBER
	int maxOfTwo(int a,int b) {
		if(a>b){
			return a;
		} else{
			return b;
		}
	}
	int main(){
		cout<<maxOfTwo(2,8)<<endl;
		
		
		FINDING SUM FROM 1 TO N
	int sumN(int n) {
		int sum=0;
		for(int i=1; i<=n; i++) {
			sum+=i;
		}
		return sum;
	}
	int main(){
		cout<<sumN(33)<<endl;
		cout<<sumN(52)<<endl; 	
		
		
		
		FINDING FACTORIAL
		int factorialN(int n) {
			int fact=1;
			for(int i=1; i<=n; i++) {
				fact*=i;
			}
			return fact;
		}
		int main() {
			cout<<factorialN(4)<<endl;
			cout<<factorialN(8)<<endl;*/
			
			
			int factorialN(int n) {
				int fact=1;
				for(int i=1; i<=n; i++) {
					fact*=i;
				}
				return fact;
			}
			int main() {
				cout<<factorialN(4)<<endl;
				cout<<factorialN(13)<<endl;
	return 0;
}