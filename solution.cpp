/** solution.cpp
* The listhelpers.hpp file has been provided by the instructor as starter code
* and contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector



int main() {

  std::vector<std::string> song_name = {};
  std::vector<std::string> song_artist = {};
  std::vector<int:: song_duration {};
  std::string yes_no = "y";

  while(yes_no != "n") 
  {
    std::cout << Enter a song name, artist name and duration (in secs)\n";

    std::string name;
    std::stirng artist;
    int duration;
  

      std::cout << "\nEnter your song's title ";
      std::getline (std::cin, title);
      song_names.push_back(title);

      std::cout << "Enter the artist's name ";
      std::getline (std::cin, artist);
      song_artists.push_back(artist);
      
      cout << "Enter the duration of your song (in seconds) ";
      cin >> duration
      cin.ignore();
      song_durations.push_back(duration); 

      std::cout << "would you like to enter a new song (y/n)?\n;
      std::cin >> yes_no;
      std::cin.ignore();

  }
   return 0; 
  }


  std::vector<std::string> song_name = {};
  std::vector<std::string> song_artist = {};
  std::vector<int:: song_duration {};
  std::string (yes_no != "n")
  {
    std::cout << Enter a song name, artist name and duration (in secs)\n";
    std::string name;
    std::stirng artist;
    int duration;
    
    std::cin >> name >> artist >> duration;
    
    std::cout << "would you like to enter a new song (y/n)?\n;
    std::cin >> yes_no;
    std::cin.ignore();
  }
  
  