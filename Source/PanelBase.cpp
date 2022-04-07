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
    g.setColour(juce::Colour(25, 25, 25));
    g.fillAll();
        
    g.setColour(juce::Colour(143, 143, 143));
    g.drawRoundedRectangle(0, 0, getWidth(), getHeight(), 2, 2);
}
