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
    
    metronome.setBounds(getLocalBounds()); // Set the bounds for the component to the bounds of the parent (main component).
	interface.setBounds(getLocalBounds());
}
