#include <iostream>

using namespace std;

int GCD(int a, int b){
	if(a<b){
		int temp = a;
		a = b;
		b = temp;
	}
	if(b != 0)
		return GCD(b,a%b);
	else
		return a;
	
}

int main(){
	int num1,num2;
    
	scanf("%d",&num1);
	scanf("%d",&num2);
    
	int gcd = GCD(num1,num2);
	int lcm = gcd*(num1/gcd)*(num2/gcd);
	
	printf("%d\n%d",gcd,lcm);
}
