#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

// Make global so End() can access it
bool running = true;

// Function prototype
void End();

int main() {
    bool HasPicaxe = false;
    bool EnemySpotted = false;

    int HP = 100;
    string locate = "bus";

    string logo = "Fortnite TEXTED V1.0";
    string lang = "Made in C++!(meant to be played in the MSYS2 MinGW64 terminal)";

    cout << logo << endl;
    cout << lang << endl;
    cout << " !- Fangame made by GGoobyJohnbrit. NOT MADE BY EPIC GAMES! Also, Credits to Epic Games for Fortnite! -! " << endl;

    std::this_thread::sleep_for(std::chrono::seconds(2));

    cout << "You are in a bus attached to a hot air balloon. You have a Loaded gun and a parachute." << endl;
    cout << "(Commands= Fall down with parachute HP=" << HP << ")" << endl;

    while (running) {
        cout << "\n> ";
        string input;
        getline(cin, input);

        if (input == "Fall down with parachute") {
            cout << "You landed in a city that has towers tilted like the Leaning Tower of Pisa." << endl;
            cout << "(Commands= Hide HP=" << HP << ")" << endl;
            locate = "City";

        } else if (input == "Hide") {
            cout << "You hid inside a Tower, Someone else is in the Tower." << endl;
            cout << "To be Continued.." << endl;
            End();

        } else {
            cout << "Unknown command. Follow the Commands, Player!";
        }
    }
}

void End() {
    cout << "Game Over. Thanks for playing the Demo!";
    running = false;
}
