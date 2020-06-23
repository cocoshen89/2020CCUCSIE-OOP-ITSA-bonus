//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30768
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string tar,in;
    int ct=0;
    cin >> tar >> in;
    //find want string
    for(int i=0;i<(int)in.size();i++)
    {
        if(in[i] == tar[0])
        {
            int mark=0;
            int k=i;
            for(int j=0;j<(int)tar.size();j++)
            {
                if(tar[j] != in[k])
                {
                    mark=1;
                    break;
                }
                k++;
            }
            if(mark == 0)
                ct++;
        }
    }
    cout << ct << "\n";
    return 0;
}
