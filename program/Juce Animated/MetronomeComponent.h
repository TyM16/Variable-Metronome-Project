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
	void update() override {}; // Define abstract from parent class here. Define what happens on refresh.

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MetronomeComponent)
};
