//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30750
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int nu,mark;
    int bin_nu[8];
    int index;
    while(cin >> nu)
    {
        for(int i=0;i<8;i++)
        {
            bin_nu[i]=0;
        }
        index=0;
        mark=0;
        if(nu < 0)//if n < 0 change to -nu
        {
            mark=1;
            nu=-(nu+1);
        }
        //D -> B
        while(nu>0)
        {
            bin_nu[index]=(nu%2);
            nu/=2;
            index++;
        }
        //cout binary
        for(int i=7;i>=0;i--)
        {
            if(mark == 1)//if nu < 0 0->1 1->0
            {
                if(bin_nu[i] == 0)
                    cout << "1";
                else
                    cout << "0";
            }
            else
                cout << bin_nu[i];
        }
        cout << "\n";
    }
    return 0;
}

