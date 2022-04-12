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
    setLookAndFeel(&ablaf);
    
    aButton.setName("A Button");
    aButton.setToggleable(true);
    aButton.setToggleState(true, juce::dontSendNotification);
    aButton.addListener(this);
    addAndMakeVisible(aButton);
    
    bButton.setName("B Button");
    bButton.setToggleable(true);
    bButton.setToggleState(false, juce::dontSendNotification);
    bButton.addListener(this);
    addAndMakeVisible(bButton);
    
}

ABPanel::~ABPanel()
{
    setLookAndFeel(nullptr);
}

//==============================================================================
void ABPanel::paint(juce::Graphics& g)
{
    g.setColour(juce::Colour(143, 143, 143));
    g.fillAll();
    
    g.setColour(juce::Colour(25, 25, 25));
    if (aButton.getToggleState()) {
        g.fillRect(38, 0, 8, 166);
    }
    else {
        g.fillRect(38, aButton.getBottom()+4, 8, 168);
    }
}

void ABPanel::resized()
{
    aButton.setBounds(0, 0, getWidth()-4, 166);
    bButton.setBounds(0, aButton.getBottom()+4, getWidth()-4, 168);
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
    
    repaint();
}
