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
#include <chrono>   // Include for accurate time keeping.
#include <thread>   // Use for thread sleep_for command to keep time.
#include <iostream> // I/O.
#include <cmath>	// Include for truncate (floor) command.


#include "Metronome.h"

#include "Record.h"



#include "../JuceLibraryCode/JuceHeader.h"



//==============================================================================

/*

*/

class MetronomeComponent : public AnimatedAppComponent

{

public:

	MetronomeComponent();

	~MetronomeComponent();

	Metronome* theMetronome;

	Record* theRecord;

	void paint(Graphics&) override;

	void resized() override;

	void update() override; // Define abstract from parent class here. Define what happens on refresh.

	void startMetronome(Record* instructions);

	//Getters/Setters

	void setMetronomeMode(int tempMetMode);



private:



	//Members



	int totalChanges; // Holds how many total segment changes in the music.

	int metronomeMode;

	int xperiment;

	int beat = 1;			// An int to take the beat signal, will be replaced when the signal is connected to a sound output instead.

	int measureCounter = 1; // Use this to check if we reached the end of the current segment. Start at measure 1.

	int segmentCounter = 0; // Use this to keep track of which segment we are on. Feed it to the index in the record to get the correct specifications for the metronome timing.


	//Private Function Prototypes.



	void resetTimerBPMIn(double clockSpeedBPM);

	void generalMetronome(Graphics& g);

	void variableMetronome(Graphics& g);

	void testFPS(Graphics& g);



	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MetronomeComponent)



};
