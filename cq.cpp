#include<bits/stdc++.h>
using namespace std;
int main(){
	int rannum; //randomnum
	int your;
	string c;
	c = "next";
	while(c != "q"){
		srand(time(0)); //随机种子
		rannum = rand();
		rannum = rannum%3+1;
		cout<<"请选择下列选项：\n石头 1\n剪刀 2\n布 3\n请选择："; 
		cin>>your;
		if((rannum==1&&your==3)||(rannum==2&&your==1)||(rannum==1&&your==3)){
			cout<<"Your Win!\n";
		};
		if((rannum==3&&your==1)||(rannum==1&&your==2)||(rannum==3&&your==1)){
			cout<<"Computer Win!\n";
		};
		if((rannum==1&&your==1)||(rannum==2&&your==2)||(rannum==3&&your==3)){
			cout<<"Your and Computer Win!\n";
		};
		cout<<"Exit(q):";
		cin>>c;
	}
}
