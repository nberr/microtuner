/*
  ==============================================================================

    BlendPanel.cpp
    Created: 5 Apr 2022 10:46:39pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "BlendPanel.h"

//==============================================================================
BlendPanel::BlendPanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("BlendPanel");
    setComponentID("BlendPanelID");
}

BlendPanel::~BlendPanel()
{
    
}

//==============================================================================
void BlendPanel::paint(juce::Graphics& g)
{
    g.setColour(juce::Colour(143, 143, 143));
    g.fillAll();
    
    g.setColour(juce::Colour(25, 25, 25));
    g.fillRect(0, 0, getWidth(), getHeight()-4);
}


void BlendPanel::resized()
{
    
}
