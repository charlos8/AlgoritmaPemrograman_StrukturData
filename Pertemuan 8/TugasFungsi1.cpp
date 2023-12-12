#include <iostream>
using namespace std;

int factorial (int n){
	if(n <= 1){
		return 1;
	}else{
		return n * factorial(n-1);
	}
}

int combination(int n, int k){
	if(n < k){
		
		cerr<<"Error: n harus lebih besar atau sama dengan k."<<endl;
		return -1;
	}
	
	return factorial(n)/(factorial(k)*factorial(n-k));
}

int main(){
	int n, k; 
	cout<<"Masukan nilai n: ";
	cin>>n;
	cout<<"Masukan nilai k: ";
	cin>>k;
	
	cout<<"C["<<n<<","<<k<<"]="<<combination(n,k)<<endl;
	
//	return main();
	
}
