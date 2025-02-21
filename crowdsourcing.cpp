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

int totalDuration(std::vector<int> list)
{
  int index = 0;
  int total = 0;
  while(index < length(list))
  {
    total = total + list[index];
    index = index + 1;
  }
  return total;
}

double averageDuration(std::vector<int> list)
{
  return(double) totalDuration(list) / length(list);
}

void printLongestDurationInfo(std::vector<std::string> names, std::vector<std::string> artists, std::vector<int> durations)
{
  int indexOfMax = 0;
  int maxDuration = durations[0];
  int curr_index = 0;

  while(curr_index < length(names))
  {
    if(durations[curr_index] > maxDuration)
    {
      indexOfMax = curr_index;
      maxDuration = durations[curr_index];
    }
    curr_index = curr_index + 1;
  }

  std::cout << "longest song: " << names[indexOfMax] << " by " << artists[indexOfMax] << " (" << durations[indexOfMax] << " seconds)\n";
}

int main() 
{

    std::vector<std::string> song_names = {};
    std::vector<std::string> song_artists = {};
    std::vector<int> song_durations = {};
    std::string choice = "y";
  
    while (choice != "n") 
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
        song_durations.push_back(duration); 
  
        std::cout << "would you like to enter a new song (y/n)?\n";
        
        std::cin.ignore();
        std::getLine(std::cin, choice);
        
    }

       std::cout << "total duration: " << totalDuration(song_durations)
              << "\nAverage duration; " << averageDuration(song_durations) << std::endl;
          printLongestDurationInfo(song_names, song_artists, song_durations);
          
  
  
     return 0; 
  }

    
    

