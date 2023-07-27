#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>
using namespace std;
class Login
{
private:
    string name,pass;
public:
    Login (string n, string p)
    {
        setname(n);
        setpass(p);
        logged(n,p);
    }
    void setname(string n)
    {
        name = n;
    }
    void setpass(string p)
    {
        pass = p;
    }
    string getname()
    {
        return name;
    }

    string getpass()
    {
        return pass;
    }
    void logged (string n, string p)
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tCar Rental Website" << endl;
        cout << "\t\t\t\t\t\t..... |login| ....." << endl;
        cout << "\t\t\t\t\t\tEnter Ur Name: ";
        getline(cin, n);
        cout << "\t\t\t\t\t\tEnter Ur Password: ";
        cin >> p;
        setname(n);
        setpass(p);
    }

};
class Choice : public Login
{
private:
    string letter, rentalfee;
    int days;
public:
    Choice (string n, string p, string l, int d, string rf): Login(n,p)
    {
        setletter(l);
        setdays(d);
        setrental(rf);
        choose(n,l, d, rf );

    }
    void setletter(string l)
    {
        letter = l;
    }
    void setdays(int d)
    {
        days = d;
    }
    void setrental(string rf)
    {
        rentalfee = rf;
    }
    void choose (string n, string l, int d, string rf)
    {
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPlz Select A Car" << endl;
        cout << "\t\t\t\t\tEnter 'A' For Tesla 2020." << endl;
        cout << "\t\t\t\t\tEnter 'B' For Bmw 2020." << endl;
        cout << "\t\t\t\t\tEnter 'C' For Mercedes 2020." << endl;
        cout << "\t\t\t\t\tEnter 'D' For Aston Martin 2020.\n" << endl;
        cout << "\t\t\t\t\tChoose A Car From The Above Options: ";
        cin >> l;
        system("CLS");
        if (l == "A")
        {
            cout << "U Have Choosed Tesla 2020." << endl;
            cout << "Specification: " << endl;
            cout << "\n100Kwh\t\t EPA : 210 mi 340 km" << endl;
        }
        if (l == "B")
        {
            cout << "U Have Choosed Bmw 2020." << endl;
            cout << "Specification: " << endl;
            cout << "\n150 Kwh\t\t EPA : 300 mi 340 km" << endl;
        }
        if (l == "C")
        {
            cout << "U Have Choosed Mercedes 2020." << endl;
            cout << "Specification: " << endl;
            cout << "\n200 Kwh\t\t EPA : 350 mi 340 km" << endl;
        }
        if (l == "D")
        {
            cout << "U Have Choosed Aston Martin 2020." << endl;
            cout << "Specification: " << endl;
            cout << "\n280 Kwh\t\t EPA : 420 mi 340 km" << endl;
        }
        if (l != "A" && l != "B" && l != "C" && l != "D")
        {
            int num;
            cout << "Sorry We don't Have This Car Now Leave UR Number We WIll Call U When we Get It." << endl;
            cin >> num;
            cout << "Thx For comming See U Soon." << endl;
        }

        cout<<"--------------------------------------------------------------------------"<<endl;
        cout << "Plz Provide The FOllowing Informations: " << endl;
        cout << "Number Of Days U Wish To Rent The Car: ";
        cin >> d;
        cout<<"--------------------------------------------------------------------------"<<endl;

        cout << "Calculating, Plz Wait..................." << endl;
        sleep(2);
        if (l == "A")
        {
            rf = to_string(d * 50);

            cout << "Ur Rental Amount Is: " << d * 50 << endl;;
        }
        if (l== "B")
        {
            rf = to_string(d* 60);
            cout << "Ur Rental Amount Is: " <<  d * 60 << endl;
        }
        if (l == "C")
        {
            rf = to_string(d * 65);
            cout << "Ur Rental Amount Is: " <<  d * 65 << endl;
        }
        if (l == "D")
        {
            rf = to_string(d * 75);
            cout << "Ur Rental Amount Is: " <<  d * 75 << endl;;
        }
        cout<<"--------------------------------------------------------------------------"<<endl;
        cout << "informations: " << endl;
        cout << "\nCustomer Name: " << Login::getname()<< endl;
        cout << "CarModel: " << l << endl;
        cout << "Number Of Days: " << d << endl;
        cout << "Ur Rental Amount Is: " << rf << endl;
    }

};

int main()
{
    int d;
    string n, p,l, rf;
    Choice c1(n, p, l, d, rf);
    return 0;
}
