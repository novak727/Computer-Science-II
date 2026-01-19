//************************************
// Name: Devin Kennedy
// Date: 2/20/2025
// Course: CS255-01 - Computer Science II
// Description: Class declarations for Artist class
// File name: Artist.h
//************************************
#ifndef ARTISTH
#define ARTISTH

#include <string>
using namespace std;

class Artist{
   public:
      Artist();

      Artist(string artistName, int birthYear, int deathYear);

      string GetName() const;

      int GetBirthYear() const;

      int GetDeathYear() const;

      void PrintInfo() const;
   
   private:
      // Data members for Artist class
      string name;
      int birth;
      int death;

};

#endif