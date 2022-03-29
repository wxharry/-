#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
    string down="太大了";
    string up="太小了";
    string yes="猜中了";
    string a;
    int x,y,i,min=0,max=100;
    cout<<"请在心里想一个数字（0~100）！"<<endl;
    cout<<"我会猜测你心中的数字，请告诉我是“太大了”,“太小了”还是“猜中了”。"<<endl;
    cout<<"把你心中的数存放在这里=>";
    cin>>y;
        time_t t;
    srand(time(&t));
    x=rand()%20*5;
    cout<<"我猜:"<<x<<endl;
    for(i=1;i<=6;i++)
    {
        cin>>a;
        if(x-y<=1&&x-y>=-1&&x!=y)
        {
            x=y;
            cout<<"那我猜："<<x<<endl;
        }
        else if(a==down&&i<6)
        {
            max=x;
            x=(max+min)/2;
            cout<<"那我猜："<<x<<endl;
        }
        else if(a==up&&i<6)
        {
            min=x;
            x=(max+min)/2;
            cout<<"那我猜："<<x<<endl;
        }
        else if(a==yes&&i<6)
        {cout<<"哈哈哈被我猜到了吧！";break;}
        if(i==6)
        {
            x=y;
            cout<<"那我猜："<<x<<endl;
        }

    }
    system("pause");
    return 0;

}
