// Purpose: hold data, interface for xml storing and retrieving. Use for saving data. etc.

/* TODO: Add data, getters, setters, etc...
		 Interface with xml files I/O (use for saving).
		 Check valid files.
		 Decide to pull from file or not.
*/

#ifndef RECORD_H_
#define RECORD_H_

#include <vector>
#include "../JuceLibraryCode/JuceHeader.h"

class Record
{
  private:
	// Initialize a series of vectors to hold the different sections of the piece. The number of vectors in each must always match.

	std::vector<int> timeSigTop;	   // How many beats per measure, represented by the top number of a timesignature in traditional sheet music.
	std::vector<int> numMeasuresinSeg; // how many measures to loop through per variable segment.
	std::vector<double> bpmSetting;	// Beats per minute variable, will get converted to a less accurate form later.

	//XML Containers
	XmlDocument* theXmlMap;
	XmlElement* metronomeSettings; //Create the outer node...

	int totalSegments;

  public:
	//Constructor
	//Record(){}

	//Setters

	void setBpm(double theBPM);

	void setTimeSig(int theSig);

	void setNumMeasures(int measureInput);

	//Getters
	//TODO: Set safety checks later (bad index).
	double getBpm(int index);

	int getTimeSig(int index);

	int getNumMeasures(int index);

	int getTotalSegments();

	void createXml();

	void createXmlFromMap(XmlElement newElement);

	void importXml();

	void exportXml();
};

#endif