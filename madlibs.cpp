#include <iostream>
#include <string>
using namespace std;

int main() {
    string wordOne;
    string wordTwo;
    string wordThree;
    string wordFour;
    string wordFive;
    string wordSix;
    string wordSeven;
    string wordEight;
    string wordNine;
    string wordTen;
    
    cout << "\n" << "\n";
    
    cout << "Welcome to C++ MadLibs. Please enter a word or phrase based on the type of word" << endl;
    cout << "requested in the prompt, verb, noun or adjective. For best results, you may use spaces" << endl;
    cout << "but please end the entry on the final letter, no additional space required.\n" << endl;
    
    cout << "Please enter an adjective:\n";
    getline(cin,wordOne);
    cout << "Please enter a noun:\n";
    getline(cin,wordTwo);
    cout << "Please enter a verb:\n";
    getline(cin,wordThree);
    cout << "Please enter a noun:\n";
    getline(cin,wordFour);
    cout << "Please enter an adjective:\n";
    getline(cin,wordFive);
    cout << "Please enter a plural noun:\n";
    getline(cin,wordSix);
    cout << "Please enter a verb:\n";
    getline(cin,wordSeven);
    cout << "Please enter a verb ending in -ing:\n";
    getline(cin,wordEight);
    cout << "Please enter an adjective:\n";
    getline(cin,wordNine);
    cout << "Please enter a noun:\n";
    getline(cin,wordTen);
    
    cout << endl;
    
    cout << "Deep in the back of a dusty " << wordOne << " arcade sat a machine no one had touched in years. " << endl;
    cout << "Legend said the high score belonged to a " << wordTwo << " who could " << wordThree << " faster than anyone alive. " << endl;
    cout << "One rainy Tuesday, a kid with nothing but a " << wordFour << " in their pocket decided to try. " << endl;
    cout << "The screen flickered on and displayed a single " << wordFive << " word: BEGIN. " << endl;
    cout << "Level one sent waves of " << wordSix << " across the screen, and the kid started to " << wordSeven << " so hard the cabinet shook. " << endl;
    cout << "By level nine the machine was " << wordEight << " and smoke poured from the coin slot. " << endl;
    cout << "When the final boss appeared, it was a " << wordNine << " " << wordTen << " with eyes like headlights. " << endl;
    cout << "The kid won with one quarter left, and the arcade has smelled faintly of burnt plastic ever since." << endl << endl;
    
    cout << "Thanks for playing!\n" << endl;
    
    return 0;
}

    // add a(an) for words two, four, and nine
    
    /*
    Deep in the back of a dusty ($$adjective 1) arcade sat a machine no one had touched in years.
    Legend said the high score belonged to a ($$noun 1) who could ($$verb 1) faster than anyone alive.
    One rainy Tuesday, a kid with nothing but a ($$noun 2) in their pocket decided to try.
    The screen flickered on and displayed a single ($$adjective 2) word: BEGIN.
    Level one sent waves of ($$plural noun 1) across the screen, and the kid started to ($$verb 2) so hard the cabinet shook.
    By level nine the machine was ($$verb 3, ending in -ing) and smoke poured from the coin slot.
    When the final boss appeared, it was a ($$adjective 3) ($$noun 3) with eyes like headlights.
    The kid won with one quarter left, and the arcade has smelled faintly of burnt plastic ever since.
    */