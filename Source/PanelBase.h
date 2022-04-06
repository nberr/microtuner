/*
  ==============================================================================

    PanelBase.h
    Created: 5 Apr 2022 10:45:39pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

#include "PluginProcessor.h"

class PanelBase
:   public juce::Component
{
public:
    //==============================================================================
    PanelBase(MicrotunerAudioProcessor* processor);
    ~PanelBase();
    
    //==============================================================================
    void paint(juce::Graphics& g) override;
    
protected:
    //==============================================================================
    MicrotunerAudioProcessor *processor;
};
