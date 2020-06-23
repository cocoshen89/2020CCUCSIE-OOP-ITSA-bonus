//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30794
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int m=0,ans,tmp;
    int A[7];
    for(int i=0;i<7;i++)
        A[i]=0;
    //cin input
    for(int i=0;i<4;i++)
    {
        cin >> tmp;
        A[tmp]++;
    }
    //check what result
    for(int i=1;i<7;i++)
    {
        if(A[i] == 4)
        {
            m=2;
            break;
        }
        else if(A[i] == 2)
        {
            m=1;
            A[i]=0;
            break;
        }
    }
    if(m == 0)
        printf("R\n");
    else if(m == 2)
        printf("WIN\n");
    else
    {
        //count what number
        ans=0;
        for(int i=0;i<7;i++)
        {
            if(A[i] != 0)
                ans+=i*A[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
