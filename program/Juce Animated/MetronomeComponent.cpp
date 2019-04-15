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
	setFramesPerSecond(60); //How fast should the window update per second. (60fps currently)
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
}

void MetronomeComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
