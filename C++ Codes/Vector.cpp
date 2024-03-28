#include<iostream>
#include<stdio.h>
#include<vector>
#include<iterator>
#include<algorithm>
#include<list>
/*bool myfun(int a,int b)
{
    return(a>b);
}*/
using namespace std;
int main()
{
    int a[5]= {3,7,2,9,50};
    list<int>mylist(a,a+5);
    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl;



    /*if(mylist.empty())
    {
        cout<<"EMPTY"<<endl;
    }
    else
    {
        cout<<"FOUND"<<endl;
    }
    list<int>mylist;
    list<int>::iterator it;
    mylist.push_back(90);
    mylist.push_back(3240);
    mylist.push_back(95);
    mylist.push_back(22);
    mylist.push_back(33);
    it=find(mylist.begin(),mylist.end(),95);
    cout<<*it<<endl<<endl<<endl;
    mylist.insert(it,777);
    it=find(mylist.begin(),mylist.end(),22);
    mylist.erase(it);
    mylist.reverse();
    for(it=mylist.begin();it!=mylist.end();it++)
    {
        printf("%d\n",*it);
    }*/
    /*int a[5]={5,4,3,2,1};
    sort(a+2,a+5);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }*/
    //vector<int>vec(7,-4);
    //cout<<vec.size()<<endl;
    /*vector<int>vec;
    vector<int>::iterator it;
    vec.push_back(34);
    vec.push_back(167);
    vec.push_back(14);
    vec.push_back(16);
    vec.push_back(13);
    vec.push_back(1454);
    vec.push_back(177777);
    sort(vec.begin(),vec.begin()+4);
    for(int i=1;i<10;i++)
    {
        vec.push_back(i);
    }*/
    /*for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }*/
    /*for(int i=0;i<vec.size();i++)
    {
       printf("%d\t",vec[i]);
    }
    puts("");
    it=vec.begin();
    it++;
    cout<<*it;
    puts("");*/
    return 0;
}
