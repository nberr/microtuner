/*
  ==============================================================================

    MenuPanel.cpp
    Created: 5 Apr 2022 10:45:53pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "MenuPanel.h"

//==============================================================================
MenuPanel::MenuPanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    
}

MenuPanel::~MenuPanel()
{
    
}

//==============================================================================
void MenuPanel::paint(juce::Graphics& g)
{
    g.setColour(juce::Colour(143, 143, 143));
    g.fillAll();
}

void MenuPanel::resized()
{
    
}
