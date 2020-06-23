//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30783
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string nu1,nu2;
    int time;
    cin >> time;
    for(int i=0;i<time;i++)
    {
        cin >> nu1 >> nu2; // cin number1 and number2
        reverse(nu1.begin(),nu1.end());
        reverse(nu2.begin(),nu2.end());
        int number1[40],number2[40],ans[40];
        for(int j=0;j<40;j++)
        {
            number1[j]=0;
            number2[j]=0;
            ans[j]=0;
        }
        //number1 and number2 string -> int
        for(int j=0;j<(int)nu1.size();j++)
            number1[j]=(int)(nu1[j]-'0');
        for(int j=0;j<(int)nu2.size();j++)
            number2[j]=(int)(nu2[j]-'0');
        //count number1+number2
        for(int j=0;j<39;j++)
        {
            ans[j+1]+=(ans[j]+number1[j]+number2[j])/10;
            ans[j]=(ans[j]+number1[j]+number2[j])%10;
        }
        //cout ans
        int mark=0;
        for(int j=39;j>=0;j--)
        {
            if(ans[j] == 0 && mark == 0)
                continue;
            else
            {
                cout << ans[j];
                mark=1;
            }
        }
        cout << "\n";
    }
    return 0;
}
