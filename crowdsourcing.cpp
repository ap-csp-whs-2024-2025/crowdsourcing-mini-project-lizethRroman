/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

int main()
{
    vector<string> titles;
    vector<string> artists;
    vector<int> durations;

    string title;
    string artist;
    string response;

    while (true) 
    {

        cout << "\nEnter your song's title ";
        getline (cin, title);
        titles.push_back(title);

        cout << "Enter the artist's name ";
        getline(cin, artist);
        artists.push_back(artist);
        
        cout << "Enter the duration of your song (in seconds) ";
        cin >> duration
        cin.ignore();
        durations.push_back(duration);

         {
           do cout << "Would you like to enter another song (answer with y or n)? ";
            getline (cin, response);

        } while (response != "y" && response != "n");

            if (response == "n") {
                return 0;
            }
            cout << "Would you like to enter another song (answer with y or n)? ";
            getline(cin response); {
                if (response )
            }
        
        }
        
    }
    
    

