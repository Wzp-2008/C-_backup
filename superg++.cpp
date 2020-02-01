#include"stdlib.h"
#include<iostream>
using namespace std;
int main(){
	int a,b;
	char c;
	while(true){
		cin>>a>>c>>b;
		if(c=='+'){
			cout<<a+b<<'\n';
		}
		if(c=='-'){
			cout<<a-b<<'\n';
		}
		if(c=='*'){
			cout<<a*b<<'\n';
		}
		if(c=='/'){
			cout<<a/double(b)<<'\n';
		}
		if(c=='%'){
			cout<<a%b<<'\n';
		}
		if(c=='.'){
			break;
		}
	}
	system("pause");
	return 0;
}
