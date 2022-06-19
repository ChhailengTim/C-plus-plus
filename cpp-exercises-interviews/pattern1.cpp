#include<iostream>
using namespace std;
int main(){
	int i=4;
	for(i=1;i<=4;i++){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}