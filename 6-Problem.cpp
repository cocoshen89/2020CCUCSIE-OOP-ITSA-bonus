//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30755
#include<iostream>
#include<utility>
using namespace std;

int main()
{
    int nu;
    cin >> nu;
    for(int i=0;i<nu;i++)
    {
        char use;
        cin >> use;
        pair<int,int> z1,z2,ans; //first is R second is i
        int R,I;
        cin >> R >> I;
        z1=make_pair(R,I);
        cin >> R >> I;
        z2=make_pair(R,I);
        //do Operation
        if(use == '+')
        {
            ans.first=z1.first+z2.first;
            ans.second=z1.second+z2.second;
        }
        else if(use == '-')
        {
            ans.first=z1.first-z2.first;
            ans.second=z1.second-z2.second;
        }
        else
        {
            ans.first=z1.first*z2.first-z1.second*z2.second;
            ans.second=z1.first*z2.second+z2.first*z1.second;
        }
        cout << ans.first << " " << ans.second << "\n";

    }
    return 0;
}

