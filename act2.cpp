#include<iostream>
using namespace std;
int main()
{
    int n,n1,cash,total=0,price[4]={95,70,75,100};
    char ask;
    cout << "\nAvailable MilkTeas \t||Price\n\n"
            "1. Hokaido \t\t||95\n"
            "2. Okinawa \t\t||70\n"
            "3. Green Apple \t\t||75\n"
            "4. Special Milktea \t||100\n";
    retry:
    cout << "\nEnter number of what you want to buy: ";
    cin >> n1;
    switch(n1){
    case 1:
        cout << "\nEnter how many you want to buy: ";
        cin >>n;
        total+=price[0]*n;
        cout << "\nDo you want to buy something else? (y/n) ";
        cin >>ask;
        if (ask=='y'){
           system("cls");
           goto retry;
        }
        else
            goto end;
    case 2:
        cout << "\nEnter how many you want to buy: ";
        cin >>n;
        total+=price[1]*n;
        cout << "\nDo you want to buy something else? (y/n) ";
        cin >>ask;
        if (ask=='y'){
           system("cls");
           goto retry;
        }
        else
            goto end;
    case 3:
        cout << "\nEnter how many you want to buy: ";
        cin >>n;
        total+=price[2]*n;
        cout << "\nDo you want to buy something else? (y/n) ";
        cin >>ask;
        if (ask=='y'){
           system("cls");
           goto retry;
        }
        else
            goto end;
    case 4:
        cout << "\nEnter how many you want to buy: ";
        cin >>n;
        total+=price[3]*n;
        cout << "\nDo you want to buy something else? (y/n) ";
        cin >>ask;
        if (ask=='y'){
           system("cls");
           goto retry;
        }
        else
            goto end;

            
            }
     end:
       cout<<"\nTo Pay php"<<total;
       cout<<"\nInput your Cash: ";
       cin>>cash;
       if(total<cash){
         cout<<"\nchange: php"<<cash - total;
       }
       else{
         cout<<"\ninvalid input";
        }
    return 0;
}
