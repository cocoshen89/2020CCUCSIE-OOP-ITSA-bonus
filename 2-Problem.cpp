//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30749
#include<iostream>
#include<math.h>
using namespace std;

int in_or_out(int x,int y)
{
    if(x*x+y*y > 200*200) //確認點到點的距離
        return 0;
    else
        return 1;
}

int main()
{
    int x,y;
    while(cin >> x >> y) //cin x and y
    {
        if(in_or_out(x,y))//check in or out
            cout << "inside" << "\n";
        else
            cout << "outside" << "\n";
    }
    return 0;
}
