#include <iostream>

using namespace std;

int main()
{
    int quantity;
    int choice;
    // Total Items we have
    int totalRoom = 0, totalPasta = 0, totalBurger = 0, totalNoodles = 0, totalShake = 0, totalChicken = 0;
    //  Sold items
    int soldRooms = 0, soldPasta = 0, soldBurger = 0, soldNoodles = 0, soldShake = 0, soldChicken = 0;
    // Total prize of items
    int roomPrize = 0, pastaPrize = 0, burgerPrize = 0, noodlesPrize = 0, shakePrize = 0, chickenPrize = 0;

    cout <<"\n\t Total rooms we have";
    cout <<"\n\t Available Rooms: ";
    cin >> totalRoom;
    cout <<"\n\t Available Pastas: ";
    cin >> totalPasta;
    cout <<"\n\t Available Burgers: ";
    cin >> totalBurger;
    cout <<"\n\t Available Noodles: ";
    cin >> totalNoodles;
    cout <<"\n\t Available Shakes: ";
    cin >> totalShake;
    cout <<"\n\t Available Chicken-Rolls: ";
    cin >> totalChicken;


    cout << "\n\t\t\t Please select from the menu options " << endl;
    cout << "\n1> Rooms";
    cout << "2> Pasta";
    cout << "3> Burger";
    cout << "4> Noodles";
    cout << "5> Shake";
    cout << "6> Chicken-roll";
    cout << "7> Sales Report";
    cout << "8> Exit";


    cout << "\n\n Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout <<"Enter number of rooms you want: ";
            cin >> quantity;
            if(totalRoom - soldRooms >= quantity)
            {
                soldRooms = soldRooms + quantity;
                roomPrize = totalRoom + quantity*1200;
                cout <<"\n\n\t\t" << quantity << "room/rooms has been alloted to you";
            }
            else
                cout <<"\n\t Only " << quantity - soldRooms << "rooms remaining in the hotel";
            break;

        case 2:
            cout <<"Enter number of rooms you want: ";
            cin >> quantity;
            if(totalRoom - soldRooms >= quantity)
            {
                soldRooms = soldRooms + quantity;
                roomPrize = totalRoom + quantity*1200;
                cout <<"\n\n\t\t" << quantity << "room/rooms has been alloted to you";
            }
            else
                cout <<"\n\t Only " << quantity - soldRooms << "rooms remaining in the hotel";
            break;
    }

                        


}