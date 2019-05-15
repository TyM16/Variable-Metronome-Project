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
    StartScreenTitle->setFont (Font ("Bahnschrift", 32.50f, Font::plain).withTypefaceStyle ("Bold"));
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
                                    TRANS("Select a Metronome Mode")));
    addAndMakeVisible (mainMenuTitle.get());
    mainMenuTitle->setFont (Font ("Bahnschrift", 40.00f, Font::plain).withTypefaceStyle ("Regular"));
    mainMenuTitle->setJustificationType (Justification::centredTop);
    mainMenuTitle->setEditable (false, false, false);
    mainMenuTitle->setColour (TextEditor::textColourId, Colours::black);
    mainMenuTitle->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    startGeneralMetTextButton.reset (new TextButton ("General Metronome Text Button"));
    addAndMakeVisible (startGeneralMetTextButton.get());
    startGeneralMetTextButton->setTooltip (TRANS("Start a normal metronome."));
    startGeneralMetTextButton->setButtonText (TRANS("General"));
    startGeneralMetTextButton->addListener (this);
    startGeneralMetTextButton->setColour (TextButton::buttonColourId, Colour (0xff463fa6));
    startGeneralMetTextButton->setColour (TextButton::buttonOnColourId, Colour (0xff1b1f22));

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

    goBackButton.reset (new TextButton ("go Back Buton"));
    addAndMakeVisible (goBackButton.get());
    goBackButton->setButtonText (TRANS("Back"));
    goBackButton->setConnectedEdges (Button::ConnectedOnBottom);
    goBackButton->addListener (this);

    goBackButton->setBounds (112, 360, 150, 24);

    internalPath1.startNewSubPath (478.0f, 272.0f);
    internalPath1.lineTo (448.0f, 322.0f);
    internalPath1.closeSubPath();

    internalPath2.startNewSubPath (512.0f, 176.0f);
    internalPath2.lineTo (544.0f, 392.0f);
    internalPath2.lineTo (484.0f, 392.0f);
    internalPath2.closeSubPath();

    internalPath3.startNewSubPath (408.0f, 196.0f);
    internalPath3.lineTo (436.0f, 392.0f);
    internalPath3.lineTo (372.0f, 392.0f);
    internalPath3.closeSubPath();


    //[UserPreSize]

    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..



	//Set hidden menus to be invisible.

	mainMenuTitle->setVisible(false);

	goBackButton->setVisible(false);

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
    goBackButton = nullptr;


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
        float x = 268.0f, y = 92.0f, width = 384.0f, height = 368.0f;
        Colour fillColour = Colour (0xfff4c780);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillEllipse (x, y, width, height);
    }

    {
        float x = 404.0f, y = 164.0f, width = 112.0f, height = 228.0f;
        Colour fillColour = Colour (0xff664111);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRoundedRectangle (x, y, width, height, 1.000f);
    }

    {
        float x = 460.0f, y = 164.0f, width = 56.0f, height = 228.0f;
        Colour fillColour = Colour (0xff582906);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRoundedRectangle (x, y, width, height, 1.000f);
    }

    {
        float x = 0, y = 0;
        Colour fillColour = Colour (0xff2aa52b);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath1, AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        Colour fillColour = Colour (0xff582906);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath2, AffineTransform::translation(x, y));
    }

    {
        float x = 0, y = 0;
        Colour fillColour = Colour (0xff664111);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath3, AffineTransform::translation(x, y));
    }

    {
        int x = 418, y = 196, width = 84, height = 84;
        Colour fillColour = Colour (0xfff13636);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 460, y = 196, width = 42, height = 84;
        Colour fillColour = Colour (0xffe30c0c);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 444, y = 200, width = 15, height = 75;
        Colour fillColour = Colours::azure;
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        int x = 460, y = 200, width = 15, height = 75;
        Colour fillColour = Colour (0xffbfc8d1);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    {
        float x = 455.0f, y = 176.0f, width = 8.0f, height = 92.0f;
        Colour fillColour = Colour (0xff454144);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRoundedRectangle (x, y, width, height, 10.000f);
    }

    {
        float x = 449.0f, y = 188.0f, width = 20.0f, height = 20.0f;
        Colour fillColour = Colour (0xff454144);
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
    mainMenuTitle->setBounds ((getWidth() / 2) - (406 / 2), (getHeight() / 2) + -150, 406, 32);
    startGeneralMetTextButton->setBounds ((getWidth() / 2) + -6 - (150 / 2), (getHeight() / 2) + -62, 150, 24);
    startVariableMetTextButton->setBounds ((getWidth() / 2) + -6 - (150 / 2), (getHeight() / 2) + -22, 150, 24);
    startFPSTextButton->setBounds ((getWidth() / 2) + -6 - (150 / 2), (getHeight() / 2) + 18, 150, 24);
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



		StartScreenTitle->setVisible(false);


		StartScreenButton->setVisible(false);

		goBackButton->setVisible(true);

		mainMenuTitle->setVisible(true);

		startGeneralMetTextButton->setVisible(true);

		startVariableMetTextButton->setVisible(true);

		startFPSTextButton->setVisible(true);


        //[/UserButtonCode_StartScreenButton]
    }
    else if (buttonThatWasClicked == startGeneralMetTextButton.get())
    {
        //[UserButtonCode_startGeneralMetTextButton] -- add your button handler code here..



		//Transition from main menu to General Metronome Interface:



		mainMenuTitle->setVisible(false);

		goBackButton->setVisible(true);

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

		goBackButton->setVisible(true);

		addAndMakeVisible(variableMet);



        //[/UserButtonCode_startVariableMetTextButton]
    }
    else if (buttonThatWasClicked == startFPSTextButton.get())
    {
        //[UserButtonCode_startFPSTextButton] -- add your button handler code here..



		//Transition from main menu to FPS Test:



		mainMenuTitle->setVisible(false);

		goBackButton->setVisible(true);

		startGeneralMetTextButton->setVisible(false);

		startVariableMetTextButton->setVisible(false);

		startFPSTextButton->setVisible(false);

		goBackButton->setVisible(true);

		addAndMakeVisible(metronomeComp);

		metronomeComp.setMetronomeMode(2);

		metronomeComp.setFramesPerSecond(50);



        //[/UserButtonCode_startFPSTextButton]
    }
    else if (buttonThatWasClicked == goBackButton.get())
    {
        //[UserButtonCode_goBackButton] -- add your button handler code here..
        //[/UserButtonCode_goBackButton]
        StartScreenTitle->setVisible(true);

		StartScreenButton->setVisible(true);

		goBackButton->setVisible(false);

		mainMenuTitle->setVisible(false);

		startGeneralMetTextButton->setVisible(false);

		startVariableMetTextButton->setVisible(false);

		startFPSTextButton->setVisible(false);
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
    <ELLIPSE pos="268 92 384 368" fill="solid: fff4c780" hasStroke="0"/>
    <ROUNDRECT pos="404 164 112 228" cornerSize="1.0" fill="solid: ff664111"
               hasStroke="0"/>
    <ROUNDRECT pos="460 164 56 228" cornerSize="1.0" fill="solid: ff582906"
               hasStroke="0"/>
    <PATH pos="0 0 100 100" fill="solid: ff2aa52b" hasStroke="0" nonZeroWinding="1">s 478 272 l 448 322 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff582906" hasStroke="0" nonZeroWinding="1">s 512 176 l 544 392 l 484 392 x</PATH>
    <PATH pos="0 0 100 100" fill="solid: ff664111" hasStroke="0" nonZeroWinding="1">s 408 196 l 436 392 l 372 392 x</PATH>
    <RECT pos="418 196 84 84" fill="solid: fff13636" hasStroke="0"/>
    <RECT pos="460 196 42 84" fill="solid: ffe30c0c" hasStroke="0"/>
    <RECT pos="444 200 15 75" fill="solid: fff0ffff" hasStroke="0"/>
    <RECT pos="460 200 15 75" fill="solid: ffbfc8d1" hasStroke="0"/>
    <ROUNDRECT pos="455 176 8 92" cornerSize="10.0" fill="solid: ff454144" hasStroke="0"/>
    <ELLIPSE pos="449 188 20 20" fill="solid: ff454144" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="Start Screen Title" id="228627bd4d459515" memberName="StartScreenTitle"
         virtualName="" explicitFocusOrder="0" pos="0Cc -70C 406 32" edTextCol="ff000000"
         edBkgCol="0" labelText="Variable Metronome Project" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Bahnschrift"
         fontsize="32.5" kerning="0.0" bold="1" italic="0" justification="36"
         typefaceStyle="Bold"/>
  <TEXTBUTTON name="Start Screen Button" id="e90d81599e35f2d0" memberName="StartScreenButton"
              virtualName="" explicitFocusOrder="0" pos="0Cc 0C 150 24" bgColOff="ff3fa661"
              bgColOn="ff00ffae" buttonText="Start!" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
  <LABEL name="Main Menu Title" id="c7b08488dbab2505" memberName="mainMenuTitle"
         virtualName="" explicitFocusOrder="0" pos="0Cc -150C 406 32"
         edTextCol="ff000000" edBkgCol="0" labelText="Select a Metronome Mode:"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Bahnschrift" fontsize="40.0" kerning="0.0" bold="0"
         italic="0" justification="12"/>
  <TEXTBUTTON name="General Metronome Text Button" id="aac10be79918b669" memberName="startGeneralMetTextButton"
              virtualName="" explicitFocusOrder="0" pos="-6Cc -62C 150 24"
              tooltip="Start a normal metronome." bgColOff="ff463fa6" bgColOn="ff1b1f22"
              buttonText="General" connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="Variable Metronome Text Button" id="2c06a7966112a4d1" memberName="startVariableMetTextButton"
              virtualName="" explicitFocusOrder="0" pos="-6Cc -22C 150 24"
              tooltip="Start the variable metronome." bgColOff="ffd51349" buttonText="Variable"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="FPS Test Text Button" id="342202c67f7975ab" memberName="startFPSTextButton"
              virtualName="" explicitFocusOrder="0" pos="-6Cc 18C 150 24" tooltip="Perform a test on FPS of the animated component."
              bgColOff="ff37b522" buttonText="FPS Test" connectedEdges="0"
              needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="go Back Buton" id="34896acc693570fc" memberName="goBackButton"
              virtualName="" explicitFocusOrder="0" pos="112 360 150 24" buttonText="Back"
              connectedEdges="8" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...

//[/EndFile]

