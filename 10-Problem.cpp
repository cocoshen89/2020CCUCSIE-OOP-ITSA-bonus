//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30760
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,m;
    while(cin >> n >> m) // cin matrix row and col
    {
        int matrix[n][m];
        //cin matrix
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin >> matrix[i][j];
        }
        //cout  ans
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout << matrix[j][i];
                if(j != n-1)
                    cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

