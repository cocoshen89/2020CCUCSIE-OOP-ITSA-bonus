//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30761
#include<iostream>
using namespace std;

int cnt_fun(int nu)
{
    if(nu == 1 || nu == 0)
        return nu+1;
    else
        return cnt_fun(nu-1)+cnt_fun(nu/2);
}
int main()
{
    int nu;
    cin >> nu;//cin input
    int ans=cnt_funnu);//count ans
    cout << ans << "\n";
    return 0;
}
