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
                                    TRANS("Input Segment ")));
    addAndMakeVisible (mainMenuTitle.get());
    mainMenuTitle->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Bold"));
    mainMenuTitle->setJustificationType (Justification::centred);
    mainMenuTitle->setEditable (false, false, false);
    mainMenuTitle->setColour (TextEditor::textColourId, Colours::black);
    mainMenuTitle->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    BPMLabel.reset (new Label ("BPM Label",
                               TRANS("BPM")));
    addAndMakeVisible (BPMLabel.get());
    BPMLabel->setFont (Font (20.00f, Font::plain).withTypefaceStyle ("Regular"));
    BPMLabel->setJustificationType (Justification::centred);
    BPMLabel->setEditable (false, false, false);
    BPMLabel->setColour (TextEditor::textColourId, Colours::black);
    BPMLabel->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    BPMLabel2.reset (new Label ("BPM Label",
                                TRANS("Time Signature")));
    addAndMakeVisible (BPMLabel2.get());
    BPMLabel2->setFont (Font (30.00f, Font::plain).withTypefaceStyle ("Regular"));
    BPMLabel2->setJustificationType (Justification::centred);
    BPMLabel2->setEditable (false, false, false);
    BPMLabel2->setColour (TextEditor::textColourId, Colours::black);
    BPMLabel2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    goBackToOptions.reset (new TextButton ("go Back to Options"));
    addAndMakeVisible (goBackToOptions.get());
    goBackToOptions->setButtonText (TRANS("Back"));
    goBackToOptions->addListener (this);

    NumMeasures.reset (new Slider ("Num Of Measures"));
    addAndMakeVisible (NumMeasures.get());
    NumMeasures->setRange (1, 1000, 1);
    NumMeasures->setSliderStyle (Slider::IncDecButtons);
    NumMeasures->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    NumMeasures->addListener (this);

    label.reset (new Label ("new label",
                            TRANS("Measures\n")));
    addAndMakeVisible (label.get());
    label->setFont (Font (29.00f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


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
    NumMeasures = nullptr;
    label = nullptr;


    //[Destructor]. You can add your own custom destruction code here..

    //[/Destructor]
}

//==============================================================================
void VariableMetInterfaceComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..

    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

	metronomeComp->theRecord->setBpm(60);
	metronomeComp->theRecord->setNumMeasures(1);
	metronomeComp->theRecord->setTimeSig(4);
    //[UserPaint] Add your own custom painting code here..

    //[/UserPaint]
}

void VariableMetInterfaceComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..

    //[/UserPreResize]

    BPMSlider->setBounds ((getWidth() / 2) + -7 - (176 / 2), (getHeight() / 2) + 30 - (160 / 2), 176, 160);
    submitButton->setBounds ((getWidth() / 2) + -153 - (150 / 2), (getHeight() / 2) + 130 - (24 / 2), 150, 24);
    finishButton->setBounds ((getWidth() / 2) + 140 - (150 / 2), (getHeight() / 2) + 131 - (24 / 2), 150, 24);
    TimeSigLabel->setBounds ((getWidth() / 2) + -161 - (150 / 2), (getHeight() / 2) + -42 - (48 / 2), 150, 48);
    mainMenuTitle->setBounds ((getWidth() / 2) + 1 - (406 / 2), (getHeight() / 2) + -175, 406, 32);
    BPMLabel->setBounds ((getWidth() / 2) + -7 - (80 / 2), (getHeight() / 2) + -54 - (24 / 2), 80, 24);
    BPMLabel2->setBounds ((getWidth() / 2) + -161 - (152 / 2), (getHeight() / 2) + -87 - (24 / 2), 152, 24);
    goBackToOptions->setBounds ((getWidth() / 2) + -79, (getHeight() / 2) + 178 - (24 / 2), 150, 24);
    NumMeasures->setBounds ((getWidth() / 2) + 149 - (150 / 2), (getHeight() / 2) + -42 - (48 / 2), 150, 48);
    label->setBounds ((getWidth() / 2) + 159 - (150 / 2), (getHeight() / 2) + -86 - (25 / 2), 150, 25);
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
		metronomeComp->theRecord->setBpmNoPush(BPMSlider->getValue(), currentElement);
        //[/UserSliderCode_BPMSlider]
    }
    else if (sliderThatWasMoved == TimeSigLabel.get())
    {
        //[UserSliderCode_TimeSigLabel] -- add your slider handling code here..
		metronomeComp->theRecord->setTimeSigNoPush(TimeSigLabel->getValue(), currentElement);
        //[/UserSliderCode_TimeSigLabel]
    }
    else if (sliderThatWasMoved == NumMeasures.get())
    {
        //[UserSliderCode_NumMeasures] -- add your slider handling code here..
		metronomeComp->theRecord->setNumMeasuresNoPush(NumMeasures->getValue(), currentElement);
        //[/UserSliderCode_NumMeasures]
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
		currentElement++;
        //[/UserButtonCode_submitButton]
    }
    else if (buttonThatWasClicked == finishButton.get())
    {
        //[UserButtonCode_finishButton] -- add your button handler code here..
		metronomeComp->theRecord->setSegments(currentElement + 1);
		setVisible(false);
		metronomeComp->setVisible(true);
		metronomeComp->setFramesPerSecond(60);
        //[/UserButtonCode_finishButton]
    }
    else if (buttonThatWasClicked == goBackToOptions.get())
    {
        //[UserButtonCode_goBackToOptions] -- add your button handler code here..
		setVisible(false);
        //[/UserButtonCode_goBackToOptions]
    }

    //[UserbuttonClicked_Post]

    //[/UserbuttonClicked_Post]
}


//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void VariableMetInterfaceComponent::setMetronomePtr(MetronomeComponent* metPtr)
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

<JUCER_COMPONENT documentType="Component" className="VariableMetInterfaceComponent"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <SLIDER name="BPM Slider" id="3c0ff8161d83480" memberName="BPMSlider"
          virtualName="" explicitFocusOrder="0" pos="-7Cc 30Cc 176 160"
          min="1" max="2e2" int="5e-1" style="Rotary" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <TEXTBUTTON name="Submit Button" id="b6d14e3312d66e49" memberName="submitButton"
              virtualName="" explicitFocusOrder="0" pos="-153Cc 130Cc 150 24"
              buttonText="Submit Segment" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="Finish Button" id="51acdbef6d531f81" memberName="finishButton"
              virtualName="" explicitFocusOrder="0" pos="140Cc 131Cc 150 24"
              buttonText="Done!" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <SLIDER name="Time Signature Label" id="b8b703d6c6b35317" memberName="TimeSigLabel"
          virtualName="" explicitFocusOrder="0" pos="-161Cc -42Cc 150 48"
          min="1" max="3e1" int="1" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="Main Menu Title" id="c7b08488dbab2505" memberName="mainMenuTitle"
         virtualName="" explicitFocusOrder="0" pos="1Cc -175C 406 32"
         edTextCol="ff000000" edBkgCol="0" labelText="Input Segment "
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="3.25e1" kerning="0" bold="1"
         italic="0" justification="36" typefaceStyle="Bold"/>
  <LABEL name="BPM Label" id="4d0333bdb1c60708" memberName="BPMLabel"
         virtualName="" explicitFocusOrder="0" pos="-7Cc -54Cc 80 24"
         edTextCol="ff000000" edBkgCol="0" labelText="BPM" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="2e1" kerning="0" bold="0" italic="0" justification="36"/>
  <LABEL name="BPM Label" id="5a9df514fd076dc7" memberName="BPMLabel2"
         virtualName="" explicitFocusOrder="0" pos="-161Cc -87Cc 152 24"
         edTextCol="ff000000" edBkgCol="0" labelText="Time Signature"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="3e1" kerning="0" bold="0" italic="0"
         justification="36"/>
  <TEXTBUTTON name="go Back to Options" id="60370749cc0cc748" memberName="goBackToOptions"
              virtualName="" explicitFocusOrder="0" pos="-79C 178Cc 150 24"
              buttonText="Back" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <SLIDER name="Num Of Measures" id="e349e8640bad3b14" memberName="NumMeasures"
          virtualName="" explicitFocusOrder="0" pos="149Cc -42Cc 150 48"
          min="1" max="1e3" int="1" style="IncDecButtons" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <LABEL name="new label" id="6888feaed70dc433" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="159Cc -86.5Cc 150 25" edTextCol="ff000000"
         edBkgCol="0" labelText="Measures&#10;" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="2.9e1" kerning="0" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...

//[/EndFile]

