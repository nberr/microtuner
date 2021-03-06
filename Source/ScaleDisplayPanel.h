/*
  ==============================================================================

    ScaleDisplayPanel.h
    Created: 5 Apr 2022 10:48:11pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include "PanelBase.h"

#include "ScaleDisplay.h"

//==============================================================================
class ScaleDisplayPanel
:   public PanelBase
{
public:
    //==============================================================================
    ScaleDisplayPanel(MicrotunerAudioProcessor* processor);
    ~ScaleDisplayPanel();
    
    //==============================================================================
    void paint(juce::Graphics& g) override;
    void resized() override;
    
private:
    ScaleDisplay scaleDisplay;
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ScaleDisplayPanel)
};
