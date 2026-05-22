#include <iostream>
using namespace std;

int main( )
{
    int countDown;

    cout << "How many greetings do you want? (w/ DO while)";
    cin >> countDown;

    do // NOTE: it executes at least once (even if countDown equals 0)
    {
        cout << "Hello ";
        countDown = countDown - 1;
    }while (countDown > 0);

    cout << endl;
    cout << "That's all!\n";

    return 0;
}