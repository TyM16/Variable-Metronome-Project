//REFERENCE: Check out https://docs.juce.com/master/classAnimatedAppComponent.html. See this to understand the metronome component and methods.

/*
  ==============================================================================

    MetronomeComponent.h
    Created: 10 Apr 2019 2:37:57pm
    Author:  S

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "Controller.h" //Include the metronome controller here to feed back signals to the metronomeComponent.


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
	Controller *metronomeController;  //Implement the controller to handle the metronome. Call things as needed for graphic representation from here.

	void mainMenu() //Main display to use before the animation section. Used as option screen to set things up, previously in the Controller.h
	{
		std::cout << "Welcome to the metronome controller, your window to the metronome!" << std::endl;

		std::cout << "How many tempo/timeSig changes are there total?: ";
		std::cin >> totalChanges;

		for (int changeCount = 0; changeCount != totalChanges; changeCount++) { // While there are still more unique segments in the piece, ask for data and push to vectors.
			int tempBpm;
			int tempTimeSig;
			int tempMeasures;

			std::cout << "Taking data on segment " << changeCount << "." << std::endl;
			std::cout << "Please input a bpm as a double: "; //Input some other bpm, only a double/int or program crashes.
			std::cin >> tempBpm;
			bpmSetting.push_back(tempBpm);


			std::cout << "What is the timesignature number on the top?: ";
			std::cin >> tempTimeSig;
			timeSigTop.push_back(tempTimeSig);

			std::cout << "For how many measures?: ";
			std::cin >> tempMeasures;
			numMeasures.push_back(tempMeasures);
		}

		for (int i = 0; i != totalChanges; i++) { // Use the data to drive the metronome and update at each segment, stop when we reach the end of the piece.
			theRecord->setBpm(bpmSetting[i]);
			theRecord->setTimeSig(timeSigTop[i]);
			theRecord->setNumMeasures(numMeasures[i]);

			theMetronome->startMetronome(theRecord);
		}
	}

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MetronomeComponent)

};
