/*
  ==============================================================================

    PanelBase.cpp
    Created: 5 Apr 2022 10:45:39pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "PanelBase.h"

//==============================================================================
PanelBase::PanelBase(MicrotunerAudioProcessor* processor)
{
    setName("PanelBase");
    setComponentID("PanelBaseID");
    
    this->processor = processor;
}

PanelBase::~PanelBase()
{
    
}

//==============================================================================
void PanelBase::paint(juce::Graphics& g)
{
    g.setColour(juce::Colours::white);
    g.fillAll();
        
    g.setColour(juce::Colours::black);
    g.drawRoundedRectangle(0, 0, getWidth(), getHeight(), 2, 2);
}
