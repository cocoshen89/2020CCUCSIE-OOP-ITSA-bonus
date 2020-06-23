//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30757
#include<iostream>
using namespace std;

int gcd(int nu1,int nu2)
{
    if(nu2 > nu1)
        return gcd(nu2,nu1);
    if(nu1%nu2 == 0)
        return nu2;
    return gcd(nu2,nu1%nu2);
}

int main()
{
    int nu1,nu2,ans;
    cin >> nu1 >> nu2;//cin inputs
    //do GCD
    ans=gcd(nu1,nu2);
    cout << ans << "\n";
    return 0;
}

