// Name: Nate O'Brien
// Date: 11/11/24
//Program Name: Cpp getline lab

#include <iostream>
#include <string>

using namespace std;

int length;
int main(){
    //gets length
    cout << "Welcome to the song ranker! Enter a number of songs you want to rank, and create a list.\nEnter Length: ";
    cin >> length;
    cin.ignore();
    //found this from google, creates a array with the specified length
    string* songs = new string[length];

    //goes through and gets input
    for (int i = 0; i < length; i++){
        string choice;
        //length is subtracted by i to go from back to 1
        cout << "\nEnter song #" << length-i << ": ";
        getline(cin, songs[i]);
    }

    //prints out list
    cout << "\nYour list:\n" << endl;
    for(int i = 0; i < length; i++){
        cout << length-i << ". " << songs[i] << endl;
    }

    return 0;
}