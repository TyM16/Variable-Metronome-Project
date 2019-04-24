/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
    addAndMakeVisible(metronome); //Make it so our component shows up.
	addAndMakeVisible(interface);
	interface.setMetronomePtr(&metronome); //Use this to get the pointer to the metronome component to the interface component.
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
	g.fillAll(Colour(0xff323e44)); //Set background color here.
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
    
    metronome.setBounds(getLocalBounds()); // Set the bounds for the components to the bounds of the parent (main component).
	interface.setBounds(getLocalBounds());
}
