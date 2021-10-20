#include <iostream>

using namespace std;

int main()
{
    int s , h , m;

    cout << "enter seconds: ";
    cin >> s;

    m = s/60;
    h = m/60;
    m = m - h*60;
    s = s - (h*3600+m*60);

    cout <<"its "<< h <<":"<< m <<":"<< s;

    return 0;
}
