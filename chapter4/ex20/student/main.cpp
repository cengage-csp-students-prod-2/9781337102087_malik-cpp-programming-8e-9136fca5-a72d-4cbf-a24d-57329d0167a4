#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // constants
    const int discount1 = 10;
    const int discount2 = 20;
    const int discount3 = 30;
    const int discount4 = 5;

    double roomCost;
    int roomsBooked;
    int bookingDuration;
    double salesTax;

    cout << "Cost of one room: $";
    cin >> roomCost;
    cout << "Rooms booked: ";
    cin >> roomsBooked;
    cout << "Booking duration: ";
    cin >> bookingDuration;
    cout << "Sales tax: ";
    cin >> salesTax;

    int totalCost = roomCost * roomsBooked;
    double priceRatio = 1;

    if (roomsBooked >= 30)
    {
        roomCost -= roomCost * (discount3 / 100);
        priceRatio -= priceRatio * (discount3 / 100);
    }
    else if (roomsBooked >= 20)
    {
        roomCost -= roomCost * (discount2 / 100);
        priceRatio -= priceRatio * (discount2 / 100);
    }
    else if (roomsBooked >= 10)
    {
        roomCost -= roomCost * (discount1 / 100);
        priceRatio -= priceRatio * (discount1 / 100);
    }

    if (bookingDuration >= 3)
    {
        roomCost -= roomCost * (discount4 / 100);
        priceRatio -= priceRatio * (discount4 / 100);
    }

    cout << fixed << setprecision(2);

    double salesTax = roomCost * roomsBooked * (salesTax / 100);

    cout << "$" << roomCost + salesTax / roomsBooked << endl;
    cout << (1 - priceRatio) * 100 << "%" << endl;
    cout << roomsBooked << endl;
    cout << bookingDuration << endl;
    cout << "$" << roomCost * roomsBooked;
    cout << "$" << salesTax;
    cout << "$" << roomCost * roomsBooked + salesTax;
}