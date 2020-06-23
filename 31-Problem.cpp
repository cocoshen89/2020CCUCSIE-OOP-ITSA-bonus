//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=50103
#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    double R[2],I[2];
    //Z1 (R[0],I[0]) , Z2 (R[1],I[1])
    int i;
    for(i=0;i<2;i++)
    {
        cin >> R[i] >> I[i];
    }
    printf("(%.2lf)+(%.2lf)i\n",R[0]+R[1],I[0]+I[1]);
    printf("(%.2lf)+(%.2lf)i\n",R[0]-R[1],I[0]-I[1]);
    printf("(%.2lf)+(%.2lf)i\n",R[0]*R[1]-I[0]*I[1],R[0]*I[1]+R[1]*I[0]);
    return 0;
}

