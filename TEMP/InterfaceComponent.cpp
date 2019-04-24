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

#include "InterfaceComponent.h"
#include "MetronomeComponent.h"

//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
InterfaceComponent::InterfaceComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    label.reset (new Label ("new label",
                            TRANS("Variable Metronome Project")));
    addAndMakeVisible (label.get());
    label->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Bold"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (16, 64, 406, 32);

    textButton.reset (new TextButton ("new button"));
    addAndMakeVisible (textButton.get());
    textButton->setButtonText (TRANS("Continue"));
    textButton->addListener (this);
    textButton->setColour (TextButton::buttonColourId, Colour (0xff3fa661));

    textButton->setBounds (128, 136, 150, 24);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);

    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

InterfaceComponent::~InterfaceComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    label = nullptr;
    textButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void InterfaceComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void InterfaceComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

bool on = false; //REMOVE TEMP VARIABLE

void InterfaceComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton.get())
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
		if (on == false) {
			metronomeComp->setFramesPerSecond(60);
			on = true;
		}
		else {
			metronomeComp->setFramesPerSecond(0);
			on = false;
		}
        //[/UserButtonCode_textButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

//-------------------------CUSTOM METHODS-------------------------

//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void InterfaceComponent::setMetronomePtr(MetronomeComponent* tempMetPtr)
{
	metronomeComp = tempMetPtr;
}

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
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="InterfaceComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <LABEL name="new label" id="228627bd4d459515" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="16 64 406 32" edTextCol="ff000000"
         edBkgCol="0" labelText="Variable Metronome Project" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="3.25e1" kerning="0" bold="1" italic="0" justification="33"
         typefaceStyle="Bold"/>
  <TEXTBUTTON name="new button" id="e90d81599e35f2d0" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="128 136 150 24" bgColOff="ff3fa661"
              buttonText="Continue" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

