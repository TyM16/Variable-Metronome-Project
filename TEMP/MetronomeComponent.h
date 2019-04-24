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
	void update() override; // Define abstract from parent class here. Define what happens on refresh.

private:

	//Members
	Metronome* theMetronome;
	Record* theRecord;

	int totalChanges; // Holds how many changes total in the music.
	int metronomeMode; //Set this to switch between modes. 0 is general metronome and 1 is variable metronome!

	//Function prototypes.

	void resetTimerBPMIn(double clockSpeedBPM);
	void generalMetronome(Graphics& g);
	void variableMetronome(Graphics& g);

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MetronomeComponent)

};
