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

#include "GeneralMetInterfaceComponent.h"

#include "VariableMetInterfaceComponent.h"

#include "MetronomeComponent.h"

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

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	GeneralMetInterfaceComponent  generalMet;

	VariableMetInterfaceComponent variableMet;

	MetronomeComponent            metronomeComp;



    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Label> StartScreenTitle;
    std::unique_ptr<TextButton> StartScreenButton;
    std::unique_ptr<Label> mainMenuTitle;
    std::unique_ptr<TextButton> startGeneralMetTextButton;
    std::unique_ptr<TextButton> startVariableMetTextButton;
    std::unique_ptr<TextButton> startFPSTextButton;
    std::unique_ptr<TextButton> goBackButton;
    Path internalPath1;
    Path internalPath2;
    Path internalPath3;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (InterfaceComponent)
};

//[EndFile] You can add extra defines here...

//[/EndFile]

