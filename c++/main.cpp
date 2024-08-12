#include <iostream>


using namespace std;
int main()
{
    int x, y, z;
        x = 1;
        y = 50;
        z = 99;
    int p_input;
    while(true)
    {
    cout << "Please enter a number between 1 and 99." << endl;
        cin >> p_input;
        if (p_input >= x && p_input < y) {
            cout << "You are in the group A" << endl;
        }
        else if (p_input > y && p_input < z) {
            cout << "You are in the group B" << endl;
        }
        else if (p_input == y) {
            cout << "You are in the middle." << endl;
        }
        else{
            cout << "You entered invalid number. Try again." << endl;
        }    
    char quit;
    cout << "Do you want to continue? (n = no, y = yes)" << endl;
    cin >> quit;
    if (quit == 'n' || quit == 'N')
    {
        break;
        cout << "Thanks. Goodbye. " << endl;
    }
    
    }
    return 0;
}