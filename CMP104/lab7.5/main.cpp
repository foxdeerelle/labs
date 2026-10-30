#include <iostream>
using namespace std;

class Movie {
public:
    string title;
    string rating; // assuming BBFC scheme (G, 12, 15, 18, etc.)
    string duration; // it's either manually set as string or calculate from seconds duration and i prefer sanity

    void showDetails() {
        cout << "title: " << title << endl;
        cout << "rating: " << rating << endl;
        cout << "duration: " << duration << endl << endl;
    }
};

int main() {
    Movie mov1, mov2;

    mov1.title = "Annihilation";
    mov1.rating = "15";
    mov1.duration = "1hr 55min";

    mov2.title = "Eternal Sunshine of the Spotless Mind";
    mov2.rating = "15";
    mov2.duration = "1hr 48min";

    mov1.showDetails();
    mov2.showDetails();

    return 0;
}