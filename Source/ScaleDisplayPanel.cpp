/*
  ==============================================================================

    ScaleDisplayPanel.cpp
    Created: 5 Apr 2022 10:48:11pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "ScaleDisplayPanel.h"

//==============================================================================
ScaleDisplayPanel::ScaleDisplayPanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("ScaleDisplayPanel");
    setComponentID("ScaleDisplayPanelID");
    
    addAndMakeVisible(scaleDisplay);
}

ScaleDisplayPanel::~ScaleDisplayPanel()
{
    
}

//==============================================================================
void ScaleDisplayPanel::paint(juce::Graphics& g)
{
    g.setColour(juce::Colour(25, 25, 25));
    g.fillRoundedRectangle(0, 0, getWidth(), getHeight()-4, 6);
    g.fillRect(0, 0, 5, 5);
    g.fillRect(getWidth()-5, 0, 5, 5);
    g.fillRect(0, getHeight()-9, 5, 5);
    
    g.setColour(juce::Colours::white);
    g.drawText("Scale", 147, 17, 49, 16, juce::Justification::centred);
    
}

void ScaleDisplayPanel::resized()
{
    scaleDisplay.setBounds(52, 49, 238, 238);
}

