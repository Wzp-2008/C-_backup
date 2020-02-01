#include<bits/stdc++.h>//导入万能头文件 
using namespace std;//C++标准语法：使用命名空间 std：标准 
int main(){	//主程序 
	int random,a;//创建整数类型的局部变量random 用来存放随机数      以及： 创建整数类型的局部变量a 用来存放输入的数字 
	string yn;//创建文本类型的局部变量yn（表示是否要继续） 
	while(true){//创建死循环1号
		srand(time(0)); //随机种子
		random = rand();	//随机种子
		random = random%100;//将随机结果变成1-99这些数字 
		cout<<"抽奖(Y/N)："; //询问是否要抽奖（Y要，N不要） 
		cin>>yn;//输入到局部变量yn
		if(yn=="Y"){//如果继续（yn==y） 
			while(true){ //创建死循环2号
				cout<<"\n";//输出换行 
				cout<<"数字(1~99)：";//询问要选几号数字 (1~99)
				cin>>a;//输入到局部变量a
					if(a!=random){//如果没有猜对 
						cout<<"很遗憾，没中奖！\n";//输出没有中奖 
						if(random>a){//如果输入结果比随机结果小 
							cout<<"Small"<<endl;//输出：小了（endl的英文是end line意思是结束这一行） 
						}
						else{//否则（即输入结果比随机结果大） 
							cout<<"Big"<<endl;//输出：大了
						}
					}
					if(random==a){//如果猜对了 
						cout<<"恭喜，中奖了！\n"; //输出中奖提示 
						break;//退出循环2号 
					}
				}
		}
		else//否则（即不继续） 
		{
			break;//退出循环1号 
			return 0;//返回值为0 
		}
	}
		
} 
