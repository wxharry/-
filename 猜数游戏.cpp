#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
int main()
{
	int x,y;
	cout<<"我会在心中藏一个0~100的数字"<<endl;
	srand(time(NULL));
	while(1){
	
	y=(rand()%20*5);
	cout<<y<<endl; 
}
	do
	{
	cout<<"请猜一猜我心中的数字："; 
	cin>>x;
	if(x>y){cout<<"太大了！再猜！"<<endl;}
	if(x<y){cout<<"太小了！再猜！"<<endl;}
	if(x==y){cout<<"猜中了！你真厉害！"<<endl;break;}
	}while(1);
	system("pause");
	return 0;
	
} 
