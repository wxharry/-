#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
int main()
{
	int x,y;
	cout<<"�һ������в�һ��0~100������"<<endl;
	srand(time(NULL));
	while(1){
	
	y=(rand()%20*5);
	cout<<y<<endl; 
}
	do
	{
	cout<<"���һ�������е����֣�"; 
	cin>>x;
	if(x>y){cout<<"̫���ˣ��ٲ£�"<<endl;}
	if(x<y){cout<<"̫С�ˣ��ٲ£�"<<endl;}
	if(x==y){cout<<"�����ˣ�����������"<<endl;break;}
	}while(1);
	system("pause");
	return 0;
	
} 
