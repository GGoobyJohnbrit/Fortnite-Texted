#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

// Make global so End() can access it
bool running = true;
bool openedDoor = false;

// Function prototype
void End() {
    cout << "Thanks for playing!" << endl;
    running = false;
}
void GAMEOVER() {
	for (int i = 0; i < 10; i++) {
        cout << "GAME OVER!" << endl;
    }
    End();
}

int main() {
    bool HasPicaxe = false;
    bool EnemySpotted = false;

    int HP = 100;
    string locate = "bus";

    string logo = "Fortnite TEXTED V1.0";
    string lang = "Made in C++!(meant to be played in the MSYS2 MinGW64 terminal)";

    cout << logo << endl;
    cout << lang << endl;
    cout << "\n !- Fangame made by GGoobyJohnbrit. NOT MADE BY EPIC GAMES! Also, Credits to Epic Games for Fortnite! -! \n" << endl;

    std::this_thread::sleep_for(std::chrono::seconds(2));

    cout << "You are in a bus attached to a hot air balloon. You have a Loaded gun and a parachute." << endl;
    cout << "(Commands= Fall down with parachute HP=" << HP << ")" << endl;

    while (running) {
        cout << "\n> ";
        string input;
        getline(cin, input);

        if (input == "Fall down with parachute" || input == "fall down with parachute") {
            cout << "You landed in a city that has towers tilted like the Leaning Tower of Pisa." << endl;
            cout << "(Commands= Hide HP=" << HP << ")" << endl;
            locate = "City";
        } 
        else if ((input == "Hide" || input == "hide")
                 && locate == "City") {
            cout << "You hid inside a Tower, Someone else is in the Tower. they are friendly and are hiding from a enemy." << endl;
            cout << "someone else is next to the door, outside." << endl;
            cout << "(Commands= Open door HP=" << HP<< ")" << endl;
        } 
        else if ((input == "Open door" || input == "open door")
                 && locate == "City") {
            cout << "Knock Knock! you just opened the door for the enemy.";
            for (int i = 0; i < 5; i++) {
                HP--;
            }
			cout << "(Commands= shoot back HP=" << HP << ")" << endl;
            openedDoor = true;
        } 
        else if ((input == "shoot back" || input == "Shoot back")
                 && locate == "City" 
                 && openedDoor == true) {
            cout << "you shoot back to the enemy. the enemy ran away." << endl;
            cout << "(HP=" << HP << ")" << endl;
            cout << "to be continued."<< endl;
            End();
        } 
        else {
            cout << "Unknown command. Follow the Commands, Player!" << endl;
        }
    }
   return 0;
}
