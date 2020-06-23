//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=41019
#include<iostream>
using namespace std;

void test(int X)
{
    //Ãz·j
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            for(int k=0;k<10;k++)
            {
                if(122*i+212*j+221*k == X)
                {
                    cout << i << " " << j << " " << k << endl;
                    return;
                }
            }
        }
    }
}

int main()
{
    int nu_test,number;
    cin >> nu_test;
    while(nu_test--)
    {
        cin >> number;
        test(number);
    }
    return 0;
}
