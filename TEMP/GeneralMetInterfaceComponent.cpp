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

//[Headers] You can add your own extra header files here...

//[/Headers]

#include "GeneralMetInterfaceComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...

//[/MiscUserDefs]

//==============================================================================
GeneralMetInterfaceComponent::GeneralMetInterfaceComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..

    //[/Constructor_pre]

    PlayPause.reset (new TextButton ("Play/Pause Button"));
    addAndMakeVisible (PlayPause.get());
    PlayPause->setButtonText (TRANS("Pause"));
    PlayPause->addListener (this);

    goMenu.reset (new TextButton ("Go to Menu"));
    addAndMakeVisible (goMenu.get());
    goMenu->setButtonText (TRANS("Menu"));
    goMenu->addListener (this);


    //[UserPreSize]

    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GeneralMetInterfaceComponent::~GeneralMetInterfaceComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..

    //[/Destructor_pre]

    PlayPause = nullptr;
    goMenu = nullptr;


    //[Destructor]. You can add your own custom destruction code here..

    //[/Destructor]
}

//==============================================================================
void GeneralMetInterfaceComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..

    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..

    //[/UserPaint]
}

void GeneralMetInterfaceComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..

    //[/UserPreResize]

    PlayPause->setBounds ((getWidth() / 2) + -40, (getHeight() / 2) + 22, 80, 80);
    goMenu->setBounds ((getWidth() / 2) + -75, (getHeight() / 2) + 126, 150, 24);
    //[UserResized] Add your own custom resize handling here..

    //[/UserResized]
}

void GeneralMetInterfaceComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == PlayPause.get())
    {
        //[UserButtonCode_PlayPause] -- add your button handler code here..
		if (PlayPause->getButtonText() == "Pause") 
		{
			PlayPause->setButtonText(TRANS("Play"));
			metronomeComp->setFramesPerSecond(0);
		}

		else 
		{
			PlayPause->setButtonText(TRANS("Pause"));
			metronomeComp->setFramesPerSecond(60);
		}
        //[/UserButtonCode_PlayPause]
    }
    else if (buttonThatWasClicked == goMenu.get())
    {
        //[UserButtonCode_goMenu] -- add your button handler code here..
        //[/UserButtonCode_goMenu]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void GeneralMetInterfaceComponent::setMetronomePtr(MetronomeComponent* metPtr)
{
	metronomeComp = metPtr;
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GeneralMetInterfaceComponent"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <TEXTBUTTON name="Play/Pause Button" id="d0dc5b7ec3ee0dcb" memberName="PlayPause"
              virtualName="" explicitFocusOrder="0" pos="-40C 22C 80 80" buttonText="Pause"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Go to Menu" id="51cf6810eb0a3ccf" memberName="goMenu" virtualName=""
              explicitFocusOrder="0" pos="-75C 126C 150 24" buttonText="Menu"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...

//[/EndFile]

