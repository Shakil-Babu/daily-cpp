#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // summetion of --> 1+3+5+7+.....+n
    int sum = 0, n; cin >> n;
    for(int i = 1; i<=n; i=i+2){
        sum += i;
    }
    cout << "Sum is : " << sum << endl;
    getch();
}

