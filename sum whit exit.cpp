#include <iostream>

using namespace std;

int main()
{
    char ex='n';
    int num=0;
    int sum=0;

    while(ex=='n')
    {
        cout << "give me a number ";
        cin >> num;

        sum = sum + num;

        cout << "give me a number ";
        cin >> num;

        sum = sum + num;

        cout << "\nExit? ( y / n )";
        cin >> ex;
    }

    cout << sum;

    return 0;
}
