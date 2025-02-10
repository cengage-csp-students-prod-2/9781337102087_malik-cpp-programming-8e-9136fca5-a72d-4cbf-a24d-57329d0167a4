#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Constants for discounts
    const double TEN_TO_NINTEEN_ROOMS_DIS = 10.0;
    const double TWENTY_TO_TWENTYNINE_ROOMS_DIS = 20.0;
    const double THIRTY_OR_MORE_ROOMS_DISC = 30.0;
    const double THREE_DAYS_ROOM_DISC = 5.0;

    // Input variables
    double roomCost;
    int roomsBooked;
    int bookingDuration;
    double taxRate;

    // Taking inputs
    cout << "Cost of one room: $";
    cin >> roomCost;
    cout << "Rooms booked: ";
    cin >> roomsBooked;
    cout << "Booking duration (days): ";
    cin >> bookingDuration;
    cout << "Sales tax (%): ";
    cin >> taxRate;

    // Determine discount percentage
    double discountPercent = 0.0;

    if (roomsBooked >= 30)
        discountPercent = THIRTY_OR_MORE_ROOMS_DISC;
    else if (roomsBooked >= 20)
        discountPercent = TWENTY_TO_TWENTYNINE_ROOMS_DIS;
    else if (roomsBooked >= 10)
        discountPercent = TEN_TO_NINTEEN_ROOMS_DIS;

    if (bookingDuration >= 3)
        discountPercent += THREE_DAYS_ROOM_DISC;

    // Apply discount to room cost
    double discountedRoomCost = roomCost * (1 - discountPercent / 100.0);

    // Compute costs
    double totalRoomCost = discountedRoomCost * roomsBooked * bookingDuration;
    double totalSalesTax = totalRoomCost * (taxRate / 100.0);
    double totalBillingAmount = totalRoomCost + totalSalesTax;

    // Set decimal precision
    cout << fixed << setprecision(2);

    // Output results
    cout << "\nSummary of Booking:\n";
    cout << "----------------------------------\n";
    cout << "Original Cost of One Room: $" << roomCost << endl;
    cout << "Discount Applied: " << discountPercent << "%\n";
    cout << "Number of Rooms Booked: " << roomsBooked << endl;
    cout << "Booking Duration: " << bookingDuration << " days\n";
    cout << "Total Cost Before Tax: $" << totalRoomCost << endl;
    cout << "Sales Tax Amount: $" << totalSalesTax << endl;
    cout << "Total Billing Amount: $" << totalBillingAmount << endl;

    return 0;
}
