//************************************
// Name: Devin Kennedy
// Date: 2/20/2025
// Course: CS255-01 - Computer Science II
// Description: Class declarations for Artwork class
// File name: Artwork.h
//************************************
#ifndef ARTWORKH
#define ARTWORKH

#include "Artist.h"

class Artwork{
   public:
      Artwork();

      Artwork(string title, int yearCreated, Artist artist);

      string GetTitle();

      int GetYearCreated();

      void PrintInfo();
   
   private:
      // Data member for Artwork class
      string workTitle;
      int year;
      Artist artistInfo;
};

#endif