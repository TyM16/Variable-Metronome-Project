// Purpose: hold data, interface for xml storing and retrieving. Use for saving data. etc.

/* TODO: Add data, getters, setters, etc...
		 Interface with xml files I/O (use for saving).
		 Check valid files.
		 Decide to pull from file or not.
*/

#ifndef RECORD_H_
#define RECORD_H_

class Record 
{
private:

	//Dummy values are added here, changed during program.

	double bpm = 120;      // Beats per minute variable, will get converted to a less accurate form later.
	int timeSigTop = 4;    // How many beats per measure, represented by the top number of a timesignature in traditional sheet music.
	int numMeasures = 0;   // how many measures to loop through.

public:
	
	//Constructor
	//Record(){}

	//Setters

	void setBpm(double theBpm) {
		bpm = theBpm;
	}

	void setTimeSig(int theSig) {
		timeSigTop = theSig;
	}

	void setNumMeasures(int measureInput) {
		numMeasures = measureInput;
	}

	//Getters

	double getBpm() {
		return bpm;
	}

	int getTimeSig() {
		return timeSigTop;
	}

	int getNumMeasures() {
		return numMeasures;
	}

	//XML functions
};

#endif