#include "Record.h"



// Setters



void Record::setBpm(double theBPM)
{
	bpmSetting.push_back(theBPM);
}

void Record::setBpmNoPush(double theBPM, int element)
{
	bpmSetting[element] = theBPM;
}



void Record::setTimeSig(int theSig)
{
	timeSigTop.push_back(theSig);
}

void Record::setTimeSigNoPush(int theSig, int element)
{
	timeSigTop[element] = theSig;
}



void Record::setNumMeasures(int measureInput)
{
	numMeasuresinSeg.push_back(measureInput);
}

void Record::setNumMeasuresNoPush(int measureInput, int element)
{
	numMeasuresinSeg[element] = measureInput;
}

void Record::setSegments(int segNum)
{
	totalSegments = segNum;
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
	if (metronomeSettings != nullptr) //If a map exists, remove it before writing.
	{
		metronomeSettings->deleteAllChildElements();
		delete metronomeSettings;
	}

	//Create xml
	metronomeSettings = new XmlElement("Map Settings");

	for (int i = 0; i < getTotalSegments(); i++) //Create and add inner nodes..

	{

		XmlElement* segment = new XmlElement("Segment" + i);

		segment->setAttribute("BPM", getBpm(i));

		segment->setAttribute("Time Signature", getTimeSig(i));

		segment->setAttribute("Number of Measures", getNumMeasures(i));

		metronomeSettings->addChildElement(segment);
	};

}

void Record::createXmlFromMap(XmlElement newMap)
{
	//Create xml given an already initialized element (from importXml() usually).


	if (metronomeSettings != nullptr) //If a map already exists, delete it first.
	{
		metronomeSettings->deleteAllChildElements();
		delete metronomeSettings;
	}

	*metronomeSettings = newMap;
}

void Record::importXml()

{

	//Import

	FileChooser* choiceWindowIn = new FileChooser("Select an XML File to Open", File(), "*.xml");



	if (choiceWindowIn->browseForFileToOpen()) //If the user chose a file..
	{

		theXmlMap = new XmlDocument(choiceWindowIn->getResult()); //Find out what it was. NOTE: we may need to add getURLResult for mobile support!
		delete choiceWindowIn;

	}

	else  //If the user doesn't choose a file, return without doing anything further. We could add a message here if we wanted to.
	{
		return;
	}

	XmlElement* pxml = theXmlMap->getDocumentElement(); //Parse the xml.
	if (pxml != nullptr) //If an element exists...
	{
		createXmlFromMap(*pxml); //send the object itself NOT THE POINTER!!
		delete pxml; //Clean up the objects we used.
		delete theXmlMap;
	}

	int i = 0; //Use this for segment iteration.

	forEachXmlChildElement(*metronomeSettings, child)
	{
		if (child->hasTagName("Segment" + i)) 
		{
			setBpm(child->getDoubleAttribute("BPM"));
			setTimeSig(child->getIntAttribute("Time Signature"));
			setNumMeasures(child->getIntAttribute("Number of Measures"));
		}
		i++;
	}
}



void Record::exportXml()

{

	//Export

	FileChooser* choiceWindowOut = new FileChooser("Please Name your XML File", File(), "*.xml");



	if (choiceWindowOut->browseForFileToSave(true))

	{
		metronomeSettings->writeToFile(File(choiceWindowOut->getResult()), String()); //Export the file. (Need to specify location better!!)
		delete choiceWindowOut;

	}

}