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

#include "VariableMetInterfaceComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...

//[/MiscUserDefs]

//==============================================================================
VariableMetInterfaceComponent::VariableMetInterfaceComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..

    //[/Constructor_pre]

    BPMSlider.reset (new Slider ("BPM Slider"));
    addAndMakeVisible (BPMSlider.get());
    BPMSlider->setRange (1, 200, 0.5);
    BPMSlider->setSliderStyle (Slider::Rotary);
    BPMSlider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    BPMSlider->addListener (this);

    submitButton.reset (new TextButton ("Submit Button"));
    addAndMakeVisible (submitButton.get());
    submitButton->setButtonText (TRANS("Submit Segment"));
    submitButton->addListener (this);

    finishButton.reset (new TextButton ("Finish Button"));
    addAndMakeVisible (finishButton.get());
    finishButton->setButtonText (TRANS("Done!"));
    finishButton->addListener (this);

    TimeSigLabel.reset (new Slider ("Time Signature Label"));
    addAndMakeVisible (TimeSigLabel.get());
    TimeSigLabel->setRange (1, 30, 1);
    TimeSigLabel->setSliderStyle (Slider::LinearHorizontal);
    TimeSigLabel->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    TimeSigLabel->addListener (this);

    mainMenuTitle.reset (new Label ("Main Menu Title",
                                    TRANS("Input Segment  :")));
    addAndMakeVisible (mainMenuTitle.get());
    mainMenuTitle->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Bold"));
    mainMenuTitle->setJustificationType (Justification::centred);
    mainMenuTitle->setEditable (false, false, false);
    mainMenuTitle->setColour (TextEditor::textColourId, Colours::black);
    mainMenuTitle->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    BPMLabel.reset (new Label ("BPM Label",
                               TRANS("BPM")));
    addAndMakeVisible (BPMLabel.get());
    BPMLabel->setFont (Font (30.00f, Font::plain).withTypefaceStyle ("Regular"));
    BPMLabel->setJustificationType (Justification::centred);
    BPMLabel->setEditable (false, false, false);
    BPMLabel->setColour (TextEditor::textColourId, Colours::black);
    BPMLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    BPMLabel2.reset (new Label ("BPM Label",
                                TRANS("Time Signature")));
    addAndMakeVisible (BPMLabel2.get());
    BPMLabel2->setFont (Font (25.00f, Font::plain).withTypefaceStyle ("Regular"));
    BPMLabel2->setJustificationType (Justification::centred);
    BPMLabel2->setEditable (false, false, false);
    BPMLabel2->setColour (TextEditor::textColourId, Colours::black);
    BPMLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    goBackToOptions.reset (new TextButton ("go Back to Options"));
    addAndMakeVisible (goBackToOptions.get());
    goBackToOptions->setButtonText (TRANS("Back"));
    goBackToOptions->addListener (this);

    goBackToOptions->setBounds (392, 384, 150, 24);


    //[UserPreSize]

    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..



	//addChildComponent(metronomeComp); //Add our metronome here..



    //[/Constructor]
}

VariableMetInterfaceComponent::~VariableMetInterfaceComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..

    //[/Destructor_pre]

    BPMSlider = nullptr;
    submitButton = nullptr;
    finishButton = nullptr;
    TimeSigLabel = nullptr;
    mainMenuTitle = nullptr;
    BPMLabel = nullptr;
    BPMLabel2 = nullptr;
    goBackToOptions = nullptr;


    //[Destructor]. You can add your own custom destruction code here..

    //[/Destructor]
}

//==============================================================================
void VariableMetInterfaceComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..

    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..

    //[/UserPaint]
}

void VariableMetInterfaceComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..

    //[/UserPreResize]

    BPMSlider->setBounds ((getWidth() / 2) + 134 - (81 / 2), (getHeight() / 2) + -12 - (103 / 2), 81, 103);
    submitButton->setBounds ((getWidth() / 2) - (150 / 2), (getHeight() / 2) + 125 - (24 / 2), 150, 24);
    finishButton->setBounds ((getWidth() / 2) - (150 / 2), (getHeight() / 2) + 173 - (24 / 2), 150, 24);
    TimeSigLabel->setBounds ((getWidth() / 2) + -127 - (150 / 2), (getHeight() / 2) + 1 - (48 / 2), 150, 48);
    mainMenuTitle->setBounds ((getWidth() / 2) + 1 - (406 / 2), (getHeight() / 2) + -175, 406, 32);
    BPMLabel->setBounds ((getWidth() / 2) + 134 - (80 / 2), (getHeight() / 2) + -83 - (24 / 2), 80, 24);
    BPMLabel2->setBounds ((getWidth() / 2) + -126 - (152 / 2), (getHeight() / 2) + -43 - (24 / 2), 152, 24);
    //[UserResized] Add your own custom resize handling here..

    //[/UserResized]
}

void VariableMetInterfaceComponent::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]

    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == BPMSlider.get())
    {
        //[UserSliderCode_BPMSlider] -- add your slider handling code here..

        //[/UserSliderCode_BPMSlider]
    }
    else if (sliderThatWasMoved == TimeSigLabel.get())
    {
        //[UserSliderCode_TimeSigLabel] -- add your slider handling code here..

        //[/UserSliderCode_TimeSigLabel]
    }

    //[UsersliderValueChanged_Post]

    //[/UsersliderValueChanged_Post]
}

void VariableMetInterfaceComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]

    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == submitButton.get())
    {
        //[UserButtonCode_submitButton] -- add your button handler code here..

        //[/UserButtonCode_submitButton]
    }
    else if (buttonThatWasClicked == finishButton.get())
    {
        //[UserButtonCode_finishButton] -- add your button handler code here..

        //[/UserButtonCode_finishButton]
    }
    else if (buttonThatWasClicked == goBackToOptions.get())
    {
        //[UserButtonCode_goBackToOptions] -- add your button handler code here..
        //[/UserButtonCode_goBackToOptions]
    }

    //[UserbuttonClicked_Post]

    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="VariableMetInterfaceComponent"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <SLIDER name="BPM Slider" id="3c0ff8161d83480" memberName="BPMSlider"
          virtualName="" explicitFocusOrder="0" pos="134.5Cc -11.5Cc 81 103"
          min="1.0" max="200.0" int="0.5" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <TEXTBUTTON name="Submit Button" id="b6d14e3312d66e49" memberName="submitButton"
              virtualName="" explicitFocusOrder="0" pos="0Cc 125Cc 150 24"
              buttonText="Submit Segment" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="Finish Button" id="51acdbef6d531f81" memberName="finishButton"
              virtualName="" explicitFocusOrder="0" pos="0Cc 173Cc 150 24"
              buttonText="Done!" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <SLIDER name="Time Signature Label" id="b8b703d6c6b35317" memberName="TimeSigLabel"
          virtualName="" explicitFocusOrder="0" pos="-127Cc 1Cc 150 48"
          min="1.0" max="30.0" int="1.0" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="Main Menu Title" id="c7b08488dbab2505" memberName="mainMenuTitle"
         virtualName="" explicitFocusOrder="0" pos="1Cc -175C 406 32"
         edTextCol="ff000000" edBkgCol="0" labelText="Input Segment  :"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="32.5" kerning="0.0" bold="1"
         italic="0" justification="36" typefaceStyle="Bold"/>
  <LABEL name="BPM Label" id="4d0333bdb1c60708" memberName="BPMLabel"
         virtualName="" explicitFocusOrder="0" pos="134Cc -83Cc 80 24"
         edTextCol="ff000000" edBkgCol="0" labelText="BPM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="30.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="BPM Label" id="5a9df514fd076dc7" memberName="BPMLabel2"
         virtualName="" explicitFocusOrder="0" pos="-126Cc -43Cc 152 24"
         edTextCol="ff000000" edBkgCol="0" labelText="Time Signature"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="25.0" kerning="0.0" bold="0"
         italic="0" justification="36"/>
  <TEXTBUTTON name="go Back to Options" id="60370749cc0cc748" memberName="goBackToOptions"
              virtualName="" explicitFocusOrder="0" pos="392 384 150 24" buttonText="Back"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...

//[/EndFile]

