#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	int a = 5;
	while(a>0){
		cout<<a;
		Sleep(1000);
		a=a-1;
		system("cls");
	}
	
} 
