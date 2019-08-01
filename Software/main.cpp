#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    float pPrice, bDue;
    int numsold;

    do{
    cout << "How many software sold?: ";
    cin >> numsold;
     if (numsold < 0 || numsold > 100){
    cout << "Invalid Response. Run Program Again" << endl;
    }
    } while (numsold < 0 || numsold > 100);


    if (numsold < 10) {
        pPrice = 99.00;
    }
    else if (numsold < 20) {
        pPrice = 99.00 * 0.8;
    } else if (numsold < 100){
        pPrice = 99.00 * 0.6;
    } else if (numsold > 100){
    pPrice = 99.00 * 0.5;
    }


    bDue = (numsold * pPrice);

    cout << fixed << showpoint << setprecision(2);

    cout << "Software Units Sold: " << setw(28) << '$' << setw(6) << numsold << endl;
    cout << "Price Per Unit: " << setw(33) << '$' << setw(6) <<  pPrice << endl;
    cout << "Balance Due " << setw(37) << '$' << setw(5) <<  bDue << endl;

    return 0;
}
