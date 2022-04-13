/*
  ==============================================================================

    ScaleDisplay.cpp
    Created: 12 Apr 2022 5:53:36pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "ScaleDisplay.h"

//==============================================================================
ScaleDisplay::ScaleDisplay()
{
    
}

ScaleDisplay::~ScaleDisplay()
{
    
}

//==============================================================================
void ScaleDisplay::paint(juce::Graphics& g)
{
    g.setColour(juce::Colour(84, 83, 84));
    g.drawEllipse(2, 2, getWidth()-4, getHeight()-4, 2);
}

void ScaleDisplay::resized()
{
    
}
