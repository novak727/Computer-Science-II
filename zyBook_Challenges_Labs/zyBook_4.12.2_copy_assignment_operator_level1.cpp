//************************************
// Name: Devin Kennedy
// Date: 3/21/2025
// Course: CS255-01 - Computer Science II
// File name: zyBooks_4.12.2_copy_assignment_operator_level1.cpp
//************************************

//************************************
// zyBook Challenge: 
/* Complete the copy assignment operator to prevent self-assignment.
 *
 * Ex: If the input is Rowan, then the output is:
 *
 * Self-assignment not permitted
 * myMeeting: speaker Sahar
 * myMeetingCopy: speaker Rowan
 * Destructor called
 * Destructor called
 */
//************************************

#include <iostream>
using namespace std;

class Meeting {
   public:
      Meeting();
      ~Meeting();
      void setSpeakerName(string newSpeakerName);
      void Print() const;
      Meeting& operator=(const Meeting& meetingToCopy);
   private:
      string* speakerName;
};

Meeting::Meeting() {
   speakerName = new string;
	*speakerName = "";
}

Meeting::~Meeting() {
   cout << "Destructor called" << endl;
   delete speakerName;
}

Meeting& Meeting::operator=(const Meeting& meetingToCopy) {
   // Modified portion of code
   // check for self-assignment
   if (this != &meetingToCopy) {
      delete speakerName;
      speakerName = new string;
      *speakerName = *(meetingToCopy.speakerName);
   }
   else {
      cout << "Self-assignment not permitted" << endl;
   }
   // End modified portion of code
   return *this;
}

void Meeting::setSpeakerName(string newSpeakerName) {
	*speakerName = newSpeakerName;
}

void Meeting::Print() const {
   cout << "speaker " << *speakerName << endl;
}

int main(){
   string speakerName;
   Meeting myMeeting;
   Meeting myMeetingCopy;
   
   cin >> speakerName;
   
   myMeeting.setSpeakerName(speakerName);
   myMeeting = myMeeting;  // Test self-assignment
   myMeetingCopy = myMeeting;
   myMeeting.setSpeakerName("Sahar");
   
   cout << "myMeeting: ";
   myMeeting.Print();
   cout << "myMeetingCopy: ";
   myMeetingCopy.Print();
   
   return 0;
}