#include <iostream>

using namespace std;

int main()
{
    // variables
    double doorWidth;
    double doorHeight;

    double window1Width;
    double window1Height;

    double window2Width;
    double window2Height;

    double bookshelfWidth;
    double bookshelfHeight;

    double roomLength;
    double roomWidth;
    double roomHeight;

    // get input
    cout << "Door width: ";
    cin >> doorWidth;

    cout << "Door height: ";
    cin >> doorHeight;

    cout << "Window 1 width: ";
    cin >> window1Width;

    cout << "Window 1 height: ";
    cin >> window1Height;

    cout << "Window 2 width: ";
    cin >> window2Width;

    cout << "Window 2 height: ";
    cin >> window2Height;

    cout << "Bookshelf height: ";
    cin >> bookshelfHeight;

    cout << "Bookshelf width: ";
    cin >> bookshelfWidth;

    cout << "Room length: ";
    cin >> roomLength;

    cout << "Room width: ";
    cin >> roomWidth;

    cout << "Room height: ";
    cin >> roomHeight;

    // run calculations
    const double basePaintArea = roomLength * roomHeight * 2 + roomWidth * roomHeight * 2;
    const double doorArea = doorWidth * doorHeight;
    const double window1Area = window1Width * window1Height;
    const double window2Area = window2Width * window2Height;
    const double bookshelfArea = bookshelfWidth * bookshelfHeight;
    const double negativeArea = doorArea + window1Area + window2Area + bookshelfArea;
    const double paintingArea = basePaintArea - negativeArea;
    const double paintGallons = paintingArea / 120;

    cout << "You need" << paintGallons << "gallons of paint";

    // Write your main here
    return 0;
}