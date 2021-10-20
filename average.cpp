Amirneko, [20.10.21 16:30]
#include <iostream>

using namespace std;

int main()
{
    int n , i , mi , ma , na , sum , avr;
    mi=20;
    ma=0;
    avr=0;
    sum=0;

    cout << "tedad nomarat: ";
    cin >> n;

    while(i<n){

        cout << "nomre " << i+1 << " :";
        cin >> na;

        if(na<mi){
            mi=na;
        }
        if(na>ma){
            ma=na;
        }

        sum = sum+na;

        i++;
    }

    avr = sum/n ;

    cout << "max: " << ma << " min: " << mi << " average: " << avr ;
    return 0;
}
