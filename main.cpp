#include <iostream>
#include <fstream>
#include <string>
#include "DoublyList.h"
#include "DoublyList.cpp"

using namespace std;

int main(int argc, char **argv){
	int studentMean = 0;
	int studentMedian = 0;
	int studentTime = 0;
	int studentTimeTen = 0;
	int windowMean = 0;
	int windowTime = 0;
	int windowTimeFive = 0;

	string fileLocation;

  cout << "Input text file location: " << endl;
  cin >> fileLocation;
  if(fileLocation.length = 0){
      cout << "Error!" << endl;
  }

  cout << "The mean student wait time is: " << studentMean << endl;
  cout << "The median student wait time is: " << studentMedian << endl;
  cout << "The longest student wait time is: " << studentTime << endl;
  cout << "The number of students waiting over 10 minutes is: " << studentTimeTen << endl;
  cout << "The mean window idle time is: " << windowMean << endl;
  cout << "The longest window idle time is: " << windowTime << endl;
  cout << "The number of windows idle for over 5 minutes is: " << windowTimeFive << endl;

  return 0;
}
