//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=50109
#include<cstdio>
#include<algorithm>
#include<utility>
#include<iostream>
using namespace std;

bool compara(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b)
{
    return a.first>b.first;
}

int main()
{
    int nu_person,like;
    cin >> nu_person;//cin number of person
    pair<int,pair<int,int> > A[nu_person*nu_person];
    //initial
    int Boy[nu_person+1];
    int Gril[nu_person+1];
    for(int i=0;i<=nu_person;i++)
    {
        Boy[i]=0;
        Gril[i]=0;
    }
    //cin input
    int k=0;
    for(int i=1;i<=nu_person;i++)
    {
        for(int j=1;j<=nu_person;j++)
        {
            cin >> like;
            A[k]={like,{i,j}};
            k++;
        }
    }
    //sort ¦n·P«×
    sort(A,A+nu_person*nu_person,compara);
    //cout
    for(int i=0;i<nu_person*nu_person;i++)
    {
        if(Boy[A[i].second.first] == 0 && Gril[A[i].second.second] == 0)//check boy and gril are not mark
        {
            Boy[A[i].second.first]=1;
            Gril[A[i].second.second]=1;
            printf("boy %d pair with girl %d\n",A[i].second.first,A[i].second.second);
        }
    }
    return 0;
}

