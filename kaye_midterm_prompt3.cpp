//Kyi Lei Aye
//CS002_77215
//Midterm_Project_Prompt_3

#include <iostream>
#include <cmath>

//declaring variables
int cookies, looseCookies, freeCookies, choc_chip, newCookie, newLooseCookie;
char answer;

//declaring function
//return no value
void numOfChocolateChips();
int main()
{
    using namespace std;
    //function call
    numOfChocolateChips();
    cout << "Would you like to repeat this calculation: ";
    cin >> answer;
    switch(answer)
    {
        case 'Y':
        case 'y':
        numOfChocolateChips();
        break;

        case 'N':
        case 'n':
        break;
    }
    return 0;
}

//calculating new number of cookies
void numOfChocolateChips()
{
    using namespace std;
    cout << "Enter the number of cookies you want to order: ";
    cin >> cookies;
    freeCookies = cookies / 12;
    looseCookies = cookies % 12;
    
    
    if(freeCookies > 0)
    {
        choc_chip = (cookies * 10) + (freeCookies * 10);
        newCookie = (choc_chip / 12) / 10;
        newLooseCookie = (choc_chip % 12) /10;
        cout << "That comes up to " << freeCookies << " dozen cookies and " << looseCookies << " loose cookie(s)." << endl;
        cout << "You also get " << freeCookies << " free cookies, one per dozen." << endl;
        cout << "Your total comes up to " << newCookie << " dozens and " << newLooseCookie << " loose cookie(s). " << endl;

    }
    else
    {   
        choc_chip = cookies * 10;
        cout << "Your total comes up to 0 dozen cookies and " << looseCookies << " loose cookie(s)." << endl;
    }

    cout << "There is a total of " << choc_chip << " chocolate chips." << endl;
   
}