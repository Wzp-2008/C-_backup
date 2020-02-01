#include<bits/stdc++.h> //导入万能头文件 
using namespace std; //C++标准语法：使用命名空间 std：标准 
int main(){	 //主程序 
	int random; //创建整数类型的局部变量random 用来存放随机数 
	string yn;//创建文本类型的局部变量yn（表示是否要继续） 
	while(true){ //创建死循环 
		cout<<"抽奖(Y/N)：";//询问是否要抽奖（Y要，N不要） 
		cin>>yn;//输入到局部变量yn
		cout<<"\n";//输出换行 
		if(yn=="Y"){//如果继续（yn==y） 
			srand(time(0)); //随机种子
			random = rand();//随机一个数值 将其保存到局部变量random 
			random = random%3+1;//将随机结果变成1 2 3这三个数字 
			if(random==1 || random==2){ //如果局部变量random==1或2 
				cout<<"很遗憾，没中奖！\n";//输出没中奖 
			}
			if(random==3){// 如果局部变量random==3 
				cout<<"恭喜，中奖了！\n";//输出中奖 
			}
		}
		else//否则 
		{
			break;//退出循环 
		}
	}
	return 0; //返回值 0 
} 
