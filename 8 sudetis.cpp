#include <iostream>
using namespace std;
int main()
{
    int a, b, c, nez1, nez2, nez3, nez4, temp, temp2, temp3;
    /* cin >> a >> b >> c;*/
    a = 9299;
    b = 8818;
    c = 101009;
    temp = b % 10;
    temp2 = c%10;
    nez1 = temp2 - temp;
    if (nez1 < 0)
    {
        nez1 +=10;
        a+=1;
    }
    cout << "nez1: "<< nez1 <<endl;
    temp2 *=10;
    temp = temp2%100;
    temp += nez1;
    temp2 = c % 1000;
    temp3 = b % 1000;
    nez2 = (temp2 - temp3 - temp)/100;
        if (nez2 < 0)
    {
        nez2 +=10;
        a +=10;
    }
    cout << "nez2: " <<nez2 << endl;
    temp = a / 10 % 10;
    temp2 = c / 1000 % 10;
    nez3 = temp2 - temp;
    if (nez3 < 0)
    {
        nez3 +=10;
        b += 1000;
    }
        cout << "nez3: " <<nez3 << endl;
    temp = a / 100 % 10;
    temp2 = b / 1000;
    nez4 = temp+temp2;
    if (nez4 >= 10){
        nez4 = nez4 - 10;
    }
        cout << "nez4: " <<nez4 << endl;
    return 0;
}
