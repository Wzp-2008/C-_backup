#include<bits/stdc++.h> //��������ͷ�ļ� 
using namespace std; //C++��׼�﷨��ʹ�������ռ� std����׼ 
int main(){	 //������ 
	int random; //�����������͵ľֲ�����random ������������ 
	string yn;//�����ı����͵ľֲ�����yn����ʾ�Ƿ�Ҫ������ 
	while(true){ //������ѭ�� 
		cout<<"�齱(Y/N)��";//ѯ���Ƿ�Ҫ�齱��YҪ��N��Ҫ�� 
		cin>>yn;//���뵽�ֲ�����yn
		cout<<"\n";//������� 
		if(yn=="Y"){//���������yn==y�� 
			srand(time(0)); //�������
			random = rand();//���һ����ֵ ���䱣�浽�ֲ�����random 
			random = random%3+1;//�����������1 2 3���������� 
			if(random==1 || random==2){ //����ֲ�����random==1��2 
				cout<<"���ź���û�н���\n";//���û�н� 
			}
			if(random==3){// ����ֲ�����random==3 
				cout<<"��ϲ���н��ˣ�\n";//����н� 
			}
		}
		else//���� 
		{
			break;//�˳�ѭ�� 
		}
	}
	return 0; //����ֵ 0 
} 
