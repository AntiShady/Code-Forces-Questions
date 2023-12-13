#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int op[t];
    for (int i = 0; i < t; i++)
    {
        char arr[10][10];
        long long int point = 0;
        int nox = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'X')
                {
                    nox++;
                    /*if (i == 9 || i == 8 || i == 7 || i == 6 || i == 5 || j == 9 || j == 8 || j == 7 || j == 6)
                    {
                        int max = (i > j) ? i : j;
                        // cout << "Max under if :" << max << endl;
                        switch (max)
                        {
                        case 9:
                            point += 1;
                            break;
                        case 8:
                            point += 2;
                            break;
                        case 7:
                            point += 3;
                            break;
                        case 6:
                            point += 4;
                            break;
                            // case 5:
                            // point += 5;
                        }
                    }
                    else
                    {
                        int min = (i < j) ? i : j;
                        // cout << "Min under else :" << min << endl;
                        switch (min)
                        {
                        case 0:
                            point += 1;
                            break;
                        case 1:
                            point += 2;
                            break;
                        case 2:
                            point += 3;
                            break;
                        case 3:
                            point += 4;
                            break;
                        case 4:
                            point += 5;
                            break;
                        }
                    }*/

                if (i==0||i==9||j==0||j==9) point +=1;
                else if (i==1||i==8||j==1||j==8) point +=2;
                else if (i==2||i==7||j==2||j==7) point +=3;
                else if (i==3||i==6||j==3||j==6) point +=4;
                else if (i==4||i==5||j==4||j==5) point +=5;



                }
            }
        }
        op[i] = point;
        // cout << "No of x :" << nox << endl;
    }
    for (long long int i : op)
    {
        cout << i << endl;
    }
    return 0;
}