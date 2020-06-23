//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30786
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    double in[10],maxs=-1,minn=1000000;
    for(int i=0;i<10;i++)//cin input
        cin >> in[i];
    //find max and min
    for(int i=0;i<10;i++)
    {
        maxs=max(maxs,in[i]);
        minn=min(minn,in[i]);
    }
    //cout ans
    printf("maximum:%.2f\n",maxs);
    printf("minimum:%.2f\n",minn);
    return 0;
}
