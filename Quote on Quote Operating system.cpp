﻿#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

string IN;
double num1;
double num2;
double out;

// Function prototypes
void displayProgressiveText(const string& text, int delay_ms);
void Calculator();
void infos();
void FileMode();
void MainScreenOS();
void clearScreen(); // Add a function to clear the screen

// Function to progressively display text with a delay between characters
void displayProgressiveText(const string& text, int delay_ms) {
    for (char c : text) {
        cout << c << flush; // Output the character without buffering
        this_thread::sleep_for(chrono::milliseconds(delay_ms)); // Delay between characters
    }
}

// Function to clear the screen based on the operating system
void clearScreen() {
#ifdef _WIN32
    system("CLS");
#else
    system("clear");
#endif
}

// Calculator function
void Calculator() {
    clearScreen();
    string prompt =
        "//////////////////////////////////////////////////////////////////////////////////////////////////////////\n"
        "//                                                                                                      //\n"
        "//   Calculator                                                                                         //\n"
        "//                                                                                                      //\n"
        "//   Enter the first number:                                                                            //\n";

    displayProgressiveText(prompt, 0.9);
    //NOTE: this look wierd beacouse it is, i have no idea what i did here i just wanted it to look nice (KINDA)
    cin >> num1;
    clearScreen();


    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
    cout << "//                                                                                                      //\n";
    cout << "//   Calculator                                                                                         //\n";
    cout << "//                                                                                                      //\n";

    cout << "//   Number 1: " << num1 << "                                                                                       //\n";



    cout << "//                                                                                                      //\n";
    cout << "//                                                                                                      //\n";
    cout << "//   Enter second Number 2:                                                                             //\n";
    cin >> num2;

    clearScreen();


    double sum = num1 + num2;

    double difference = num1 - num2;
    double differencO = num2 - num1;

    double product = num1 * num2;

    double divP = num1 / num2;
    double divPO = num2 / num1;




    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
    cout << "//                                                                                                      //\n";
    cout << "//   Calculator                                                                                         //\n";
    cout << "//                                                                                                      //\n";
    cout << "//   Number 1: " << num1 << "                                                                                       //\n";
    cout << "//                                                                                                      //\n";
    cout << "//                                                                                                      //\n";
    cout << "//   Number 2: " << num2 << "                                                                                       //\n";
    cout << "//                                                                                                      //\n";
    cout << "//   + : " << sum << "                                                                                              //\n";
    cout << "//                                                                                                      //\n";
    cout << "//   - : " << difference << "                                                                                              //\n";
    cout << "//                                                                                                      //\n";
    cout << "//   - opposite : " << differencO << "                                                                                      //\n";
    cout << "//                                                                                                      //\n";
    cout << "//   * : " << product << "                                                                                              //\n";
    cout << "//                                                                                                      //\n";
    cout << "//   / : " << divP << "                                                                                              //\n";
    cout << "//                                                                                                      //\n";
    cout << "//   / opposite : " << divPO << "                                                                                              //\n";
    cout << "//                                                                                                      //\n";
    cout << "//   < Back                                                                                             //\n";
    cout << "//                                                                                                      //\n";
    cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////\n";


    cin >> IN;
    if (IN == "Back") {

        clearScreen();
        MainScreenOS();

    }
}
// Info page, make sure to uptate every time i add a function
void infos() {
    clearScreen();
    string infoText =
        "//////////////////////////////////////////////////////////////////////////////////////////////////////////\n"
        "//                                                                                                      //\n"
        "//   GAY OS INFO                                                                                        //\n"
        "//                                                                                                      //\n"
        "//   Version 0.2                                                                                        //\n"
        "//   Project state: ALPHA                                                                               //\n"
        "//   Author: Szwajzen (Aleksander)                                                                      //\n"
        "//                                                                                                      //\n"
        "//   Written in C++                                                                                     //\n"
        "//                                                                                                      //\n"
        "//   Why am I doing this..?                                                                             //\n"
        "//   It's fun I guess                                                                                   //\n"
        "//                                                                                                      //\n"
        "//   I'm making this like an old Windows thing because aesthetics and I like the Console                //\n"
        "//                                                                                                      //\n"
        "//   Don't question the name, this is a half shitpost.                                                  //\n"
        "//                                                                                                      //\n"
        "//   Any functionality recommendations are appreciated since I have no idea what to do!                 //\n"
        "//                                                                                                      //\n"
        "//   This is a project that I am doing for FUN, it is (probably) not going to be completely polished    //\n"
        "//                                                                                                      //\n"
        "//   < Back                                                                                             //\n"
        "//                                                                                                      //\n"
        "//////////////////////////////////////////////////////////////////////////////////////////////////////////\n";

    displayProgressiveText(infoText, 0.9);
    cout << endl;

    cin >> IN;
    if (IN == "Back") {
        clearScreen();
        MainScreenOS();
    }
    else {
        cout << "uh oh";
    }
}

// File mode function
void FileMode() {
    clearScreen();
    //TODO: make it possible to have more files
    string FileModeScreen =
        "//////////////////////////////////////////////////////////////////////////////////////////////////////////\n"
        "//                                                                                                      //\n"
        "//                                                                                                      //\n"
        "//   Please choose a mode to activate the file in...                                                    //\n"
        "//                                                                                                      //\n"
        "//   > APPEND [add onto the existing file]                                                              //\n"
        "//                                                                                                      //\n"
        "//   > WRITE  [completely replace current text with the current input]                                  //\n"
        "//                                                                                                      //\n"
        "//   > READ   [Read the file, no possibility to manipulate the contents of the file]                    //\n"
        "//                                                                                                      //\n"
        "//   NOTE: due to my limited experience with C++ I have no idea how to create multiple files            //\n"
        "//                                                                                                      //\n"
        "//   < Back                                                                                             //\n"
        "//                                                                                                      //\n"
        "//////////////////////////////////////////////////////////////////////////////////////////////////////////\n";

    displayProgressiveText(FileModeScreen, 0.9);
    cout << endl;

    cin >> IN;

    if (IN == "Back") {
        MainScreenOS();
        return;
    }
    else if (IN == "APPEND") {
        ofstream file("file.txt", ios::app);
        if (file.is_open()) {
            string input;

            clearScreen();

            cout << "Enter text to append to the file: ";
            cin.ignore();
            getline(cin, input);
            file << input << endl;
            file.close();
            cout << "Text appended successfully." << endl;
        }
        else {
            cout << "Unable to open file for appending." << endl;
        }
    }
    else if (IN == "WRITE") {
        ofstream file("example.txt");
        if (file.is_open()) {
            string input;

            clearScreen();

            cout << "Enter text to write to the file: ";
            cin.ignore();
            getline(cin, input);
            file << input << endl;
            file.close();
            cout << "Text written successfully." << endl;
        }
        else {
            cout << "Unable to open file for writing or something else has happened." << endl;
        }
    }
    else if (IN == "READ") {
        ifstream file("example.txt");
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        }
        else {
            cout << "Unable to open file for reading." << endl;
        }
    }
    else {
        cout << "Invalid option." << endl;
    }

    cout << "Press Enter to return to the main menu...";
    cin.ignore();
    cin.get();
    clearScreen();
    MainScreenOS();
}

// Main screen function
void MainScreenOS() {
    string asciiArt =
        "//////////////////////////////////////////////////////////////////////////////////////////////////////////\n"
        "//                                                                                                      //\n"
        "//   Welcome to...                                                                                      //\n"
        "//                                                                                                      //\n"
        "//                  ________________________________________________________________        __________  //\n"
        "//                 /                                    /               \\           \\      /         /  //\n"
        "//                /                                    /                 \\           \\    /         /   //\n"
        "//               /            _____________           /         /\\        \\           \\  /         /    //\n"
        "//              /            /            /_________ /         /  \\        \\           \\/         /     //\n"
        "//             /            /                       /         /    \\        \\                    /      //\n"
        "//            /            /                       /         /      \\        \\                  /       //\n"
        "//           /            /                       /         /________\\        \\                /        //\n"
        "//          /            /        _______________/____                         \\              /         //\n"
        "//         /            /        /                   /      ____________        \\            /          //\n"
        "//        /            /        /__________         /     /             \\        \\          |           //\n"
        "//       /            /                   /        /     /               \\        \\         |           //\n"
        "//      /            /___________________/        /     /                 \\        \\        |           //\n"
        "//     /                                         /     /                   \\        \\       |           //\n"
        "//    /                                         /     /                     \\        \\      |           //\n"
        "//   /_________________________________________/____ /                       \\ _______\\_____|           //\n"
        "//                                                                                                      //\n"
        "//                                                                                                      //\n"
        "//       O S                                                 Yes I made this :/                         //\n"
        "//                                                                                                      //\n"
        "//      > R/W    [read write to 1 file]                                                                 //\n"
        "//                                                                                                      //\n"
        "//      > Infos  [Additional info to this project]                                                      //\n"
        "//                                                                                                      //\n"
        "//      > Calculator                                                                                    //\n"
        "//                                                                                                      //\n"
        "//                                               [CLOSE]                                                //\n"
        "//                                        Type CLOSE to close                                           //\n"
        "//////////////////////////////////////////////////////////////////////////////////////////////////////////\n";

    displayProgressiveText(asciiArt, 0.9);
    cout << endl;

    cin >> IN;

    if (IN == "R/W") {
        FileMode();
    }
    else if (IN == "Infos") {
        infos();
    }
    else if (IN == "Calculator") {
        Calculator();
    }
    else if (IN == "CLOSE") {
        exit(0);
    }
    else {
        cout << "Invalid option." << endl;
        MainScreenOS(); // re promt for another input
    }
}

int main() {
    MainScreenOS();
    return 0;
}
