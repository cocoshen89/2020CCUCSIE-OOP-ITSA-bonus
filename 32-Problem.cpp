//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=50104
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int hr_1,hr_2,i,tmp_long,j;
    double ans;
    cin >> hr_1 >> hr_2;
    //go hr_1 -> hr_2
    for(int i=hr_1; i<hr_2; i++)
    {
        //check what hour
        if(i>=12)
        {
            tmp_long=i-12;
        }
        else
            tmp_long=i;
        //check every min
        for(j=0; j<=59; j++)
        {

            ans=j*6-tmp_long*30-j*0.5;
            if(ans<0)
                ans=-ans;
            if(ans>180)
            {
                ans=360-ans;
            }

            if(ans>=88 && ans<=92)
            {
                if(i<10 && j<10)
                    printf("0%d:0%d degree=%.2lf\n",i,j,ans);
                else if(j==0)
                    printf("%d:0%d degree=%.2lf\n",i,j,ans);
                else if(i<10)
                    printf("0%d:%d degree=%.2lf\n",i,j,ans);
                else
                    printf("%d:%d degree=%.2lf\n",i,j,ans);
            }
        }
    }
    if(hr_2==15 ||hr_2==21)
    {
        printf("%d:00 degree=90.00\n",hr_2);
    }
    else if(hr_2==3 || hr_2==9)
    {
        printf("0%d:00 degree=90.00\n",hr_2);
    }
    return 0;
}

