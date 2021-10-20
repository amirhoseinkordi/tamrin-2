#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    char ext = 'n';
    int r ;

    cout << "dice\n";
    srand(time(NULL));

    do{
        r=6;
        while(r==6){
        r = 1+(rand()%6);
        cout << r << "\n";
       }
        cout << "\ntry again (a) or exit (e)?";
        cin >> ext;
    }while(ext=='a');

    return 0;
}
