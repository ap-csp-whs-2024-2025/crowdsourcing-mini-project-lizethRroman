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


void printLognestSongInfo(std::vector<std::string> names,
                          std::vector<std::string> artists)
int main() 
{

    std::vector<std::string> song_names = {};
    std::vector<std::string> song_artists = {};
    std::vector<int> song_durations = {};
    std::string yes_no = "y";
  
    while(yes_no != "n") 
    {
      std::cout << "Enter a song name, artist name and duration (in secs)\n";
  
      std::string name;
      std::string artist;
      int duration;
    
  
        std::cout << "\nEnter your song's title ";
        std::getline (std::cin, name);
        song_names.push_back(name);
  
        std::cout << "Enter the artist's name ";
        std::getline(std::cin, artist);
        song_artists.push_back(artist);
        
        std::cout << "Enter the duration of your song (in seconds) ";
        std::cin >> duration;
        std::cin.ignore();
        song_durations.push_back(duration); 
  
        std::cout << "would you like to enter a new song (y/n)?\n";
        std::cin >> yes_no;
        std::cin.ignore();

        std::cout << "\nSongs Entered:\n";
    for (size_t i = 0; i < song_names.size(); ++i) 
    {
        std::cout << "Title: " << song_names[i] 
                  << ", Artist: " << song_artists[i] 
                  << ", Duration: " << song_durations[i] << " secs\n";
  
    }
     return 0; 
    }
}
    
    

