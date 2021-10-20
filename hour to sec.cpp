#include <iostream>

using namespace std;

int main()
{
    int h , m , s;

    cout << "enter the hour , minute and second\n";
    cout << "hour:"; cin >> h; cout << "minute:"; cin >> m; cout << "second:"; cin >> s ;

    h = h*3600;
    m = m*60;
    s = h+m+s;
    cout << "its " << s << " seconds.";

    return 0;
}
