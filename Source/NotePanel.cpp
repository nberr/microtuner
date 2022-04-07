/*
  ==============================================================================

    NotePanel.cpp
    Created: 5 Apr 2022 10:46:22pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "NotePanel.h"

#include "PluginEditor.h"

//==============================================================================
NotePanel::NotePanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("NotePanel");
    setComponentID("NotePanelID");
    
    blendButton.setToggleable(true);
    blendButton.addListener(this);
    addAndMakeVisible(blendButton);
}

NotePanel::~NotePanel()
{
    
}

//==============================================================================
void NotePanel::resized()
{
    blendButton.setBounds(16, 300, 100, 26);
}

//==============================================================================
void NotePanel::buttonClicked(juce::Button* b)
{
    if (b == &blendButton) {
        
        blendButton.setToggleState(!blendButton.getToggleState(), juce::dontSendNotification);
        blendButton.setButtonText((blendButton.getToggleState()) ? "On" : "Off");
        
        auto editor = (MicrotunerAudioProcessorEditor *)getParentComponent();
        editor->setShowBlendPanel(blendButton.getToggleState());
        
    }
}
