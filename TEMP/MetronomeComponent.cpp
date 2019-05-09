/*
  ==============================================================================

    MetronomeComponent.cpp
    Created: 10 Apr 2019 2:37:57pm
    Author:  S

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "MetronomeComponent.h"

//==============================================================================
MetronomeComponent::MetronomeComponent()
{
	theMetronome = new Metronome;  // Inititalize the metronome.
	theRecord = new Record;        // Initialize the record.

	xperiment = 1; //REMOVE. FOR TESTING ONLY.

	setFramesPerSecond(0); //How fast should the window update per second. We can and should reset this later. We can also set 0 to stop animating.

	//Xml stuff

	//Export
	XmlElement metronomeAttributes("Attributes"); //Create the outer node...
	for (int i = 0; i < theRecord->getTotalSegments(); i++) //Create and add inner nodes..
	{
		XmlElement* segment = new XmlElement("Segment" + i);
		segment->setAttribute("BPM", theRecord->getBpm(i));
		segment->setAttribute("Time Signature", theRecord->getTimeSig(i));
		segment->setAttribute("Number of Measures", theRecord->getNumMeasures(i));

		metronomeAttributes.addChildElement(segment);
	};

	//String theXmlMap = metronomeAttributes.createDocument(String()); //Format the document based on the XML.. (May not need this one)

	//metronomeAttributes.writeToFile(File("xmlMap.xml"), String()); //Export the file. (Need to specify location better!!)

	//Better Export??
	FileChooser *choiceWindowOut = new FileChooser("Please Name your XML File", File(), "*.xml");

	if (choiceWindowOut->browseForFileToSave(true))
	{
		metronomeAttributes.writeToFile(File(choiceWindowOut->getResult()), String()); //Export the file. (Need to specify location better!!)
		delete choiceWindowOut;
	}

	//Import
	FileChooser *choiceWindowIn = new FileChooser("Select an XML File to Open", File(), "*.xml");

	if (choiceWindowIn->browseForFileToOpen()) //If the user chose a file..
	{
		File theXmlMap = choiceWindowIn->getResult(); //Find out what it was. NOTE: we may need to add getURLResult for mobile support!
		delete choiceWindowIn;
	}
}

MetronomeComponent::~MetronomeComponent()
{
}

void MetronomeComponent::paint (Graphics& g)
{
	if (metronomeMode == 0) {
		generalMetronome(g);
	}

	else if (metronomeMode == 1) {
		variableMetronome(g);
	}

	else if (metronomeMode == 2) {
		testFPS(g);
	}
	
	else {/*If we reach here, we have an error!!*/ }
}

void MetronomeComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

void MetronomeComponent::update() {} // Define abstract from parent class here. Define what happens on refresh.

/* -------------------CUSTOM METHODS-------------------- */

void MetronomeComponent::resetTimerBPMIn(double clockSpeedBPM) //Use this to readjust the timer for our metronome to be accurate. Takes in BPM and converts to Frames per sec. 
{
	setFramesPerSecond(int(clockSpeedBPM / 60));
}

void MetronomeComponent::setMetronomeMode(int tempMetMode)
{
	metronomeMode = tempMetMode;
}

void MetronomeComponent::generalMetronome(Graphics& g) { return; }

void MetronomeComponent::variableMetronome(Graphics& g) { return; }

void MetronomeComponent::testFPS(Graphics& g)
{
	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
	g.setColour(getLookAndFeel().findColour(Slider::thumbColourId));

	int radius = 150;

	Point<float> p(getWidth() / 2.0f + 1.0f * radius * std::sin(getFrameCounter() * 0.04f),
		getHeight() / 2.0f + 1.0f * radius * std::cos(getFrameCounter() * 0.04f));

	g.fillEllipse(p.x, p.y, 30.0f, 30.0f);

	g.drawSingleLineText((String)(xperiment), getParentWidth() / 2, getParentHeight() / 2, Justification::horizontallyJustified);
	xperiment = xperiment++;

	return;
}