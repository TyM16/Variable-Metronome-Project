/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.3

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "MetronomeComponent.h" //Added this to pass a pointer from the main component to control the metronome states.
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class InterfaceComponent  : public Component,
                            public Button::Listener
{
public:
    //==============================================================================
    InterfaceComponent ();
    ~InterfaceComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	/*
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
	*/

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Label> label;
    std::unique_ptr<TextButton> textButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (InterfaceComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

