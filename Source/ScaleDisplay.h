/*
  ==============================================================================

    ScaleDisplay.h
    Created: 12 Apr 2022 5:53:36pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class ScaleDisplay
:   public juce::Component
{
public:
    //==============================================================================
    ScaleDisplay();
    ~ScaleDisplay();
    
    //==============================================================================
    void paint(juce::Graphics& g) override;
    void resized() override;
    
private:
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ScaleDisplay)
};
