//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30748
#include<iostream>
using namespace std;

int main()
{
    int start_hr,start_min;
    int left_hr,left_min;
    cin >> start_hr >> start_min;
    cin >> left_hr >> left_min;
    int total_min=0,cost=0;
    total_min+=(left_hr-start_hr)*60+(left_min-start_min);//hr:min -> min
    int hf_hr=total_min/30; // number of half hour
    for(int i=1;hf_hr>0;i++)
    {
        if(i <= 4)
            cost+=30; //first two hour
        else if(i <=8)
            cost+=40; // two ~ four hour
        else
            cost+=60; // over four hour
        hf_hr--;
    }
    cout << cost << "\n";
    return 0;
}

