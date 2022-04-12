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
}

ScaleDisplayPanel::~ScaleDisplayPanel()
{
    
}

//==============================================================================
void ScaleDisplayPanel::paint(juce::Graphics& g)
{
    g.setColour(juce::Colour(25, 25, 25));
    g.fillRect(0, 0, getWidth(), getHeight()-4);
}

void ScaleDisplayPanel::resized()
{
    
}

