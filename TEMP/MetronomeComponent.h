//REFERENCE: Check out https://docs.juce.com/master/classAnimatedAppComponent.html. See this to understand the metronome component and methods.

/*
  ==============================================================================

    MetronomeComponent.h
    Created: 10 Apr 2019 2:37:57pm
    Author:  S

  ==============================================================================
*/

#pragma once

#include <iostream>
#include <vector>

#include "Metronome.h"
#include "Record.h"

#include "../JuceLibraryCode/JuceHeader.h"



//==============================================================================
/*
*/
class MetronomeComponent    : public AnimatedAppComponent
{
public:
    MetronomeComponent();
    ~MetronomeComponent();

	void paint(Graphics&) override;
	void resized() override;
	void update() override // Define abstract from parent class here. Define what happens on refresh.
	{
	}; 
	void resetTimerBPMIn(double clockSpeedBPM) //Use this to readjust the timer for our metronome to be accurate. Takes in BPM and converts to Frames per sec. 
	{
		setFramesPerSecond(clockSpeedBPM/60);
	};

private:

	Metronome* theMetronome;
	Record* theRecord;



	// Holds how many changes total in the music.
	int totalChanges;
	

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MetronomeComponent)

};
