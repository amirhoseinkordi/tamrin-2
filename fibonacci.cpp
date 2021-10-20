#include <iostream>

using namespace std;

int main()
{
    int i , n , a , b ,sum;
    a = 1;
    b = 1;

    cout << "how many?";
    cin >> n;

    cout << "1 ,";

    while(i<n-1){

        cout << " " << b << ",";

        sum = a+b;
        a = b;
        b = sum ;

        i++;
    }
    return 0;
}
