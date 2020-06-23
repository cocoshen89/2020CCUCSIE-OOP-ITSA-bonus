//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30792
#include<iostream>
#include<cstdio>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    int hight,sex;
    while(cin >> hight >> sex) // cin hight and sex
    {
        if(sex == 1)
        {
            cout << fixed  <<setprecision(1) << (double)(hight-80)*0.7 << endl; //cout 小數點後一位
        }
        else
        {
            cout << fixed  <<setprecision(1) << (double)(hight-70)*0.6 << endl; //cout 小數點後一位
        }
    }
    return 0;
}
