/*
  ==============================================================================

    ABPanel.cpp
    Created: 5 Apr 2022 10:47:03pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "ABPanel.h"

#include "MainPanel.h"

//==============================================================================
ABPanel::ABPanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("ABPanel");
    setComponentID("ABPanelID");
    
    aButton.setToggleable(true);
    aButton.setToggleState(true, juce::dontSendNotification);
    aButton.addListener(this);
    addAndMakeVisible(aButton);
    
    bButton.setToggleable(true);
    bButton.setToggleState(false, juce::dontSendNotification);
    bButton.addListener(this);
    addAndMakeVisible(bButton);
}

ABPanel::~ABPanel()
{
    
}

//==============================================================================
void ABPanel::resized()
{
    aButton.setBounds(0, 0, getWidth(), 166);
    bButton.setBounds(0, aButton.getBottom()+4, getWidth(), 166);
}

//==============================================================================
void ABPanel::buttonClicked(juce::Button* b)
{
    if (b == &aButton) {
        
        aButton.setToggleState(true, juce::dontSendNotification);
        bButton.setToggleState(false, juce::dontSendNotification);
        
        auto mainPanel = (MainPanel *)getParentComponent();
        mainPanel->setAPanelShown(true);
        
    }
    else if (b == &bButton) {
        
        aButton.setToggleState(false, juce::dontSendNotification);
        bButton.setToggleState(true, juce::dontSendNotification);
        
        auto mainPanel = (MainPanel *)getParentComponent();
        mainPanel->setAPanelShown(false);
    }
}
