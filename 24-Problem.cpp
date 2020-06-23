//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1291
#include<iostream>
using namespace std;

int main()
{
    int number,ans=0;
    //cin input and add input^3 to ans
    for(int i=0;i<6;i++)
    {
        cin >> number;
        ans+=number*number*number;
    }
    cout << ans << "\n";

    return 0;
}
