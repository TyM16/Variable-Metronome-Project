#include "Record.h"

// Setters

void Record::setBpm(double theBPM)
{
    bpmSetting.push_back(theBPM);
}

void Record::setTimeSig(int theSig)
{
    timeSigTop.push_back(theSig);
}

void Record::setNumMeasures(int measureInput)
{
    numMeasuresinSeg.push_back(measureInput);
}

// Getters

double Record::getBpm(int index)
{
    return bpmSetting[index];
}

int Record::getTimeSig(int index)
{
    return timeSigTop[index];
}

int Record::getNumMeasures(int index)
{
    return numMeasuresinSeg[index];
}

int Record::getTotalSegments()
{
    return totalSegments;
}

//Xml stuff

void Record::createXml()
{
	//Create xml
	metronomeAttributes = new XmlElement("Attributes");
	for (int i = 0; i < getTotalSegments(); i++) //Create and add inner nodes..
	{
		XmlElement* segment = new XmlElement("Segment" + i);
		segment->setAttribute("BPM", getBpm(i));
		segment->setAttribute("Time Signature", getTimeSig(i));
		segment->setAttribute("Number of Measures", getNumMeasures(i));

		metronomeAttributes->addChildElement(segment);
	};
}

void Record::importXml()
{
	//Import
	FileChooser *choiceWindowIn = new FileChooser("Select an XML File to Open", File(), "*.xml");

	if (choiceWindowIn->browseForFileToOpen()) //If the user chose a file..
	{
		theXmlMap = &(choiceWindowIn->getResult()); //Find out what it was. NOTE: we may need to add getURLResult for mobile support!
		delete choiceWindowIn;
	}

	//Overwrite Variables TODO: Implement!
}

void Record::exportXml()
{
	//Export
	FileChooser *choiceWindowOut = new FileChooser("Please Name your XML File", File(), "*.xml");

	if (choiceWindowOut->browseForFileToSave(true))
	{
		metronomeAttributes->writeToFile(File(choiceWindowOut->getResult()), String()); //Export the file. (Need to specify location better!!)
		delete choiceWindowOut;
	}
}