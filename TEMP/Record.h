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
	
	// Initialize a series of vectors to hold the different sections of the piece. The number of vectors in each must always match.

	std::vector<int> timeSigTop;       // How many beats per measure, represented by the top number of a timesignature in traditional sheet music.
	std::vector<int> numMeasuresinSeg; // how many measures to loop through per variable segment.
	std::vector<double> bpmSetting;    // Beats per minute variable, will get converted to a less accurate form later.

	int totalSegments;

public:
	
	//Constructor
	//Record(){}

	//Setters

	void setBpm(double theBPM) {
		bpmSetting.push_back(theBPM);
	}

	void setTimeSig(int theSig) {
		timeSigTop.push_back(theSig);
	}

	void setNumMeasures(int measureInput) {
		numMeasuresinSeg.push_back(measureInput);
	}

	//Getters
	//TODO: Set safety checks later (bad index).
	double getBpm(int index) {
		return bpmSetting[index];
	}

	int getTimeSig(int index) {
		return timeSigTop[index];
	}

	int getNumMeasures(int index) {
		return numMeasuresinSeg[index];
	}

	int getTotalSegments() {
		return totalSegments;
	}

	//XML functions
	//TODO: Add XML mapping functionality.
};

#endif