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

#include "MetronomeComponent.h"

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]

	An auto-generated component, created by the Projucer.



	Describe your class and how it works here!

                                                                    //[/Comments]
*/
class VariableMetInterfaceComponent  : public Component,
                                       public Slider::Listener,
                                       public Button::Listener
{
public:
    //==============================================================================
    VariableMetInterfaceComponent ();
    ~VariableMetInterfaceComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	int SegNum; //Hold the number of segments we have gone through.



	MetronomeComponent* metronomeComp;

    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Slider> BPMSlider;
    std::unique_ptr<TextButton> submitButton;
    std::unique_ptr<TextButton> finishButton;
    std::unique_ptr<Slider> TimeSigLabel;
    std::unique_ptr<Label> mainMenuTitle;
    std::unique_ptr<Label> BPMLabel;
    std::unique_ptr<Label> BPMLabel2;
    std::unique_ptr<TextButton> goBackToOptions;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (VariableMetInterfaceComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

