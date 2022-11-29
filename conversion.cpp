#include <iostream>
using namespace std;

int main () {

    int a;
    int  b;

    cout << "______________________________________" << endl;
    cout << "ENTER YOUR NUMBER " << endl;
    cin >>  a;
    cout << "______________________________________"  << endl;
    cout << " ENTER THE OPERATION YOU WANT TO PERFORM  " << endl;
    cout << " TYPE (1) (2) (3) (4) (5) (6) (7) (8)" << endl;
    cout << " 1 => Meter to Centimeter  " << endl;
    cout << " 2 => Kilometer to Acres " << endl;
    cout << " 3 => Inches to Centimeter " << endl;
    cout << " 4 => Foot to Meter " << endl;
    cout << " ______________________________________" << endl;
    cout << " ------ >" ; cin >> b ;
    cout << "_______________________________________" << endl;

    switch(b) {

        case 1:
        cout <<  a << " " << "FROM METER TO CENTIMETER IS " << "=>" << a*100 << endl;
        break ;

        case 2:
        cout << a << " " <<"FROM KILOMETER TO ACRES IS => " << a*247 << endl;
        break;

        case 3:
        cout << a << " " << " INCHES TO CENTIMETER IS => " << a*3 << endl;
        break;

        case 4:
        cout << a << " " << "FROM FOOT TO METER IS " << " => " << a*0.3 << endl;
        break;


    }

    return 0;



}