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


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
InterfaceComponent::InterfaceComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    mainMenuTitle.reset (new Label ("Main Menu Title",
                                    TRANS("Variable Metronome Project")));
    addAndMakeVisible (mainMenuTitle.get());
    mainMenuTitle->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Bold"));
    mainMenuTitle->setJustificationType (Justification::centred);
    mainMenuTitle->setEditable (false, false, false);
    mainMenuTitle->setColour (TextEditor::textColourId, Colours::black);
    mainMenuTitle->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    mainMenuTextButton.reset (new TextButton ("Main Menu Text Button"));
    addAndMakeVisible (mainMenuTextButton.get());
    mainMenuTextButton->setButtonText (TRANS("Continue"));
    mainMenuTextButton->addListener (this);
    mainMenuTextButton->setColour (TextButton::buttonColourId, Colour (0xff3fa661));
    mainMenuTextButton->setColour (TextButton::buttonOnColourId, Colour (0xff00ffae));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
	animationOn = false; //REMOVE TEMP VARIABLE. Used to set metronome component animation on and off when a button is clicked.
    //[/Constructor]
}

InterfaceComponent::~InterfaceComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    mainMenuTitle = nullptr;
    mainMenuTextButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void InterfaceComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    {
        float x = static_cast<float> ((getWidth() / 2) + 71 - (296 / 2)), y = static_cast<float> ((getHeight() / 2) + 18 - (224 / 2)), width = 296.0f, height = 224.0f;
        Colour fillColour = Colour (0xff2a6aa5);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillEllipse (x, y, width, height);
    }

    {
        float x = static_cast<float> ((getWidth() / 2) + -123 - (228 / 2)), y = static_cast<float> ((getHeight() / 2) + -26 - (104 / 2)), width = 228.0f, height = 104.0f;
        Colour fillColour = Colour (0xff71820b);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillEllipse (x, y, width, height);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void InterfaceComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    mainMenuTitle->setBounds ((getWidth() / 2) - (406 / 2), (getHeight() / 2) + -70, 406, 32);
    mainMenuTextButton->setBounds ((getWidth() / 2) - (150 / 2), (getHeight() / 2), 150, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void InterfaceComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == mainMenuTextButton.get())
    {
        //[UserButtonCode_mainMenuTextButton] -- add your button handler code here..
        //[/UserButtonCode_mainMenuTextButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void InterfaceComponent::setMetronomePtr(MetronomeComponent* tempMetPtr)
{
	metronomeComp = tempMetPtr;
}

/*
void InterfaceComponent::mainMenu() //Main display to use before the animation section. Used as option screen to set things up.
{
	label->setVisible(true);

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
  <BACKGROUND backgroundColour="ff323e44">
    <ELLIPSE pos="71Cc 18Cc 296 224" fill="solid: ff2a6aa5" hasStroke="0"/>
    <ELLIPSE pos="-123Cc -26Cc 228 104" fill="solid: ff71820b" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="Main Menu Title" id="228627bd4d459515" memberName="mainMenuTitle"
         virtualName="" explicitFocusOrder="0" pos="0Cc -70C 406 32" edTextCol="ff000000"
         edBkgCol="0" labelText="Variable Metronome Project" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="3.25e1" kerning="0" bold="1" italic="0" justification="36"
         typefaceStyle="Bold"/>
  <TEXTBUTTON name="Main Menu Text Button" id="e90d81599e35f2d0" memberName="mainMenuTextButton"
              virtualName="" explicitFocusOrder="0" pos="0Cc 0C 150 24" bgColOff="ff3fa661"
              bgColOn="ff00ffae" buttonText="Continue" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

