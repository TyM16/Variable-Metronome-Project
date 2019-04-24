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
	theMetronome = new Metronome();  // Inititalize the metronome.
									 //TODO: Move record and set it so we pick either a new record or load an xml, make new record.
	theRecord = new Record();        // Initialize the Record.

	setFramesPerSecond(0); //How fast should the window update per second. We can and should reset this later. We can also set 0 to stop animating.

	metronomeMode = 0;
}

MetronomeComponent::~MetronomeComponent()
{
}

int x = 1;

void MetronomeComponent::paint (Graphics& g)
{

	g.fillAll(getLookAndFeel().findColour(ResizableWindow::backgroundColourId));
	g.setColour(getLookAndFeel().findColour(Slider::thumbColourId));

	int radius = 150;

	Point<float> p(getWidth() / 2.0f + 1.0f * radius * std::sin(getFrameCounter() * 0.04f),
		getHeight() / 2.0f + 1.0f * radius * std::cos(getFrameCounter() * 0.04f));

	g.fillEllipse(p.x, p.y, 30.0f, 30.0f);
	
	g.drawSingleLineText((String)(x), getParentWidth() / 2, getParentHeight() / 2, Justification::horizontallyJustified);
	x=x++;

	if (metronomeMode == 0) {
		generalMetronome(g);
	}

	else if (metronomeMode == 1) {
		variableMetronome(g);
	}

	else {/*If we reach here, we have an error!!*/};
}

void MetronomeComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}

void MetronomeComponent::update() {}; // Define abstract from parent class here. Define what happens on refresh.

/* -------------------CUSTOM METHODS-------------------- */

void MetronomeComponent::resetTimerBPMIn(double clockSpeedBPM) //Use this to readjust the timer for our metronome to be accurate. Takes in BPM and converts to Frames per sec. 
{
	setFramesPerSecond(clockSpeedBPM / 60);
};

void MetronomeComponent::generalMetronome(Graphics& g) {};

void MetronomeComponent::variableMetronome(Graphics& g) {};