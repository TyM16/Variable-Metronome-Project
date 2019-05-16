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

	theRecord->setBpm(60);
	theRecord->setNumMeasures(-1);
	theRecord->setTimeSig(4);
	theRecord->setSegments(1);

	setFramesPerSecond(0); //How fast should the window update per second. We can and should reset this later. We can also set 0 to stop animating.

}



MetronomeComponent::~MetronomeComponent()

{

}



void MetronomeComponent::paint(Graphics& g)

{

	if (metronomeMode == 2) {
		testFPS(g);
	}



	else {
		if (theRecord->getTotalSegments() >= segmentCounter) {
			//resetTimerBPMIn(theRecord->getBpm(0));
			g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
			g.setColour(getLookAndFeel().findColour(Slider::thumbColourId));
			g.drawSingleLineText((String)(beat), getParentWidth() / 2, getParentHeight() / 2, Justification::horizontallyJustified);
			startMetronome(theRecord);
		}
	}
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

/* -------------------General Metronome------------------- */
void MetronomeComponent::generalMetronome(Graphics& g) { return; }

/* -------------------Variable Metronome------------------- */
void MetronomeComponent::variableMetronome(Graphics& g) { return; }

/* -------------------Test-------------------*/

void MetronomeComponent::testFPS(Graphics & g)


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

/*Metronome Functions*/

void MetronomeComponent::startMetronome(Record* instructions)
{
		beat++;																													   //Increment the beat counter.																						   //Output the beat num.
		std::this_thread::sleep_for(std::chrono::milliseconds((int)ceil(1000.0 / (instructions->getBpm(segmentCounter) / 60.0)))); //Keep the time based on the bpm up to 3 decimals of precision. The rest is lost.


		if (beat == instructions->getTimeSig(segmentCounter) + 1)
		{ // If the beat has reached the last of the beats per measure, reset it and increment the measure counter.
			beat = 1;
			measureCounter++;
		}

		if (measureCounter == instructions->getNumMeasures(segmentCounter))
		{ // If we reached the end of this segment, update our index for new instructions.
			segmentCounter++;
		}

		if (segmentCounter > instructions->getTotalSegments())
		{ // If we reached the end of the piece, return control.
			measureCounter = 1;
			segmentCounter = 1;
			setFramesPerSecond(0);
		}
}