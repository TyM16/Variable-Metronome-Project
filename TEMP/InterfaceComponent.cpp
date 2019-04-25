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

    StartScreenTitle.reset (new Label ("Start Screen Title",
                                       TRANS("Variable Metronome Project")));
    addAndMakeVisible (StartScreenTitle.get());
    StartScreenTitle->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Bold"));
    StartScreenTitle->setJustificationType (Justification::centred);
    StartScreenTitle->setEditable (false, false, false);
    StartScreenTitle->setColour (TextEditor::textColourId, Colours::black);
    StartScreenTitle->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    StartScreenButton.reset (new TextButton ("Start Screen Button"));
    addAndMakeVisible (StartScreenButton.get());
    StartScreenButton->setButtonText (TRANS("Start!"));
    StartScreenButton->addListener (this);
    StartScreenButton->setColour (TextButton::buttonColourId, Colour (0xff3fa661));
    StartScreenButton->setColour (TextButton::buttonOnColourId, Colour (0xff00ffae));

    mainMenuTitle.reset (new Label ("Main Menu Title",
                                    TRANS("Select a Metronome Mode:")));
    addAndMakeVisible (mainMenuTitle.get());
    mainMenuTitle->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Bold"));
    mainMenuTitle->setJustificationType (Justification::centred);
    mainMenuTitle->setEditable (false, false, false);
    mainMenuTitle->setColour (TextEditor::textColourId, Colours::black);
    mainMenuTitle->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    startGeneralMetTextButton.reset (new TextButton ("General Metronome Text Button"));
    addAndMakeVisible (startGeneralMetTextButton.get());
    startGeneralMetTextButton->setTooltip (TRANS("Start a normal metronome."));
    startGeneralMetTextButton->setButtonText (TRANS("General"));
    startGeneralMetTextButton->addListener (this);
    startGeneralMetTextButton->setColour (TextButton::buttonColourId, Colour (0xff463fa6));

    startVariableMetTextButton.reset (new TextButton ("Variable Metronome Text Button"));
    addAndMakeVisible (startVariableMetTextButton.get());
    startVariableMetTextButton->setTooltip (TRANS("Start the variable metronome."));
    startVariableMetTextButton->setButtonText (TRANS("Variable"));
    startVariableMetTextButton->addListener (this);
    startVariableMetTextButton->setColour (TextButton::buttonColourId, Colour (0xffd51349));

    startFPSTextButton.reset (new TextButton ("FPS Test Text Button"));
    addAndMakeVisible (startFPSTextButton.get());
    startFPSTextButton->setTooltip (TRANS("Perform a test on FPS of the animated component."));
    startFPSTextButton->setButtonText (TRANS("FPS Test"));
    startFPSTextButton->addListener (this);
    startFPSTextButton->setColour (TextButton::buttonColourId, Colour (0xff37b522));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..

	//Set hidden menus to be invisible.
	mainMenuTitle->setVisible(false);
	startGeneralMetTextButton->setVisible(false);
	startVariableMetTextButton->setVisible(false);
	startFPSTextButton->setVisible(false);
    //[/Constructor]
}

InterfaceComponent::~InterfaceComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    StartScreenTitle = nullptr;
    StartScreenButton = nullptr;
    mainMenuTitle = nullptr;
    startGeneralMetTextButton = nullptr;
    startVariableMetTextButton = nullptr;
    startFPSTextButton = nullptr;

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

    StartScreenTitle->setBounds ((getWidth() / 2) - (406 / 2), (getHeight() / 2) + -70, 406, 32);
    StartScreenButton->setBounds ((getWidth() / 2) - (150 / 2), (getHeight() / 2), 150, 24);
    mainMenuTitle->setBounds ((getWidth() / 2) + -7 - (406 / 2), (getHeight() / 2) + -150, 406, 32);
    startGeneralMetTextButton->setBounds ((getWidth() / 2) - (150 / 2), (getHeight() / 2) + -70, 150, 24);
    startVariableMetTextButton->setBounds ((getWidth() / 2) - (150 / 2), (getHeight() / 2) + -20, 150, 24);
    startFPSTextButton->setBounds ((getWidth() / 2) - (150 / 2), (getHeight() / 2) + 30, 150, 24);
    //[UserResized] Add your own custom resize handling here..
	metronomeComp.setBounds(getLocalBounds());
	generalMet.setBounds(getLocalBounds());
	variableMet.setBounds(getLocalBounds());
    //[/UserResized]
}

void InterfaceComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == StartScreenButton.get())
    {
        //[UserButtonCode_StartScreenButton] -- add your button handler code here..

		//Transition from start screen to main menu:

		StartScreenTitle          ->setVisible(false);
		StartScreenButton         ->setVisible(false);
		mainMenuTitle             ->setVisible(true);
		startGeneralMetTextButton ->setVisible(true);
		startVariableMetTextButton->setVisible(true);
		startFPSTextButton        ->setVisible(true);

        //[/UserButtonCode_StartScreenButton]
    }
    else if (buttonThatWasClicked == startGeneralMetTextButton.get())
    {
        //[UserButtonCode_startGeneralMetTextButton] -- add your button handler code here..

		//Transition from main menu to General Metronome Interface:

		mainMenuTitle->setVisible(false);
		startGeneralMetTextButton->setVisible(false);
		startVariableMetTextButton->setVisible(false);
		startFPSTextButton->setVisible(false);
		addAndMakeVisible(generalMet);

        //[/UserButtonCode_startGeneralMetTextButton]
    }
    else if (buttonThatWasClicked == startVariableMetTextButton.get())
    {
        //[UserButtonCode_startVariableMetTextButton] -- add your button handler code here..

		//Transition from main menu to Variable Metronome:

		mainMenuTitle->setVisible(false);
		startGeneralMetTextButton->setVisible(false);
		startVariableMetTextButton->setVisible(false);
		startFPSTextButton->setVisible(false);
		addAndMakeVisible(variableMet);

        //[/UserButtonCode_startVariableMetTextButton]
    }
    else if (buttonThatWasClicked == startFPSTextButton.get())
    {
        //[UserButtonCode_startFPSTextButton] -- add your button handler code here..

		//Transition from main menu to FPS Test:

		mainMenuTitle->setVisible(false);
		startGeneralMetTextButton->setVisible(false);
		startVariableMetTextButton->setVisible(false);
		startFPSTextButton->setVisible(false);
		addAndMakeVisible(metronomeComp);
		metronomeComp.setMetronomeMode(2);
		metronomeComp.setFramesPerSecond(60);

        //[/UserButtonCode_startFPSTextButton]
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

<JUCER_COMPONENT documentType="Component" className="InterfaceComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44">
    <ELLIPSE pos="71Cc 18Cc 296 224" fill="solid: ff2a6aa5" hasStroke="0"/>
    <ELLIPSE pos="-123Cc -26Cc 228 104" fill="solid: ff71820b" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="Start Screen Title" id="228627bd4d459515" memberName="StartScreenTitle"
         virtualName="" explicitFocusOrder="0" pos="0Cc -70C 406 32" edTextCol="ff000000"
         edBkgCol="0" labelText="Variable Metronome Project" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="3.25e1" kerning="0" bold="1" italic="0" justification="36"
         typefaceStyle="Bold"/>
  <TEXTBUTTON name="Start Screen Button" id="e90d81599e35f2d0" memberName="StartScreenButton"
              virtualName="" explicitFocusOrder="0" pos="0Cc 0C 150 24" bgColOff="ff3fa661"
              bgColOn="ff00ffae" buttonText="Start!" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <LABEL name="Main Menu Title" id="c7b08488dbab2505" memberName="mainMenuTitle"
         virtualName="" explicitFocusOrder="0" pos="-7Cc -150C 406 32"
         edTextCol="ff000000" edBkgCol="0" labelText="Select a Metronome Mode:"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="3.25e1" kerning="0" bold="1"
         italic="0" justification="36" typefaceStyle="Bold"/>
  <TEXTBUTTON name="General Metronome Text Button" id="aac10be79918b669" memberName="startGeneralMetTextButton"
              virtualName="" explicitFocusOrder="0" pos="0Cc -70C 150 24" tooltip="Start a normal metronome."
              bgColOff="ff463fa6" buttonText="General" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <TEXTBUTTON name="Variable Metronome Text Button" id="2c06a7966112a4d1" memberName="startVariableMetTextButton"
              virtualName="" explicitFocusOrder="0" pos="0Cc -20C 150 24" tooltip="Start the variable metronome."
              bgColOff="ffd51349" buttonText="Variable" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="FPS Test Text Button" id="342202c67f7975ab" memberName="startFPSTextButton"
              virtualName="" explicitFocusOrder="0" pos="0Cc 30C 150 24" tooltip="Perform a test on FPS of the animated component."
              bgColOff="ff37b522" buttonText="FPS Test" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

