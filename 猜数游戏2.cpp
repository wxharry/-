#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
    string down="̫����";
    string up="̫С��";
    string yes="������";
    string a;
    int x,y,i,min=0,max=100;
    cout<<"����������һ�����֣�0~100����"<<endl;
    cout<<"�һ�²������е����֣���������ǡ�̫���ˡ�,��̫С�ˡ����ǡ������ˡ���"<<endl;
    cout<<"�������е������������=>";
    cin>>y;
        time_t t;
    srand(time(&t));
    x=rand()%20*5;
    cout<<"�Ҳ�:"<<x<<endl;
    for(i=1;i<=6;i++)
    {
        cin>>a;
        if(x-y<=1&&x-y>=-1&&x!=y)
        {
            x=y;
            cout<<"���Ҳ£�"<<x<<endl;
        }
        else if(a==down&&i<6)
        {
            max=x;
            x=(max+min)/2;
            cout<<"���Ҳ£�"<<x<<endl;
        }
        else if(a==up&&i<6)
        {
            min=x;
            x=(max+min)/2;
            cout<<"���Ҳ£�"<<x<<endl;
        }
        else if(a==yes&&i<6)
        {cout<<"���������Ҳµ��˰ɣ�";break;}
        if(i==6)
        {
            x=y;
            cout<<"���Ҳ£�"<<x<<endl;
        }

    }
    system("pause");
    return 0;

}
