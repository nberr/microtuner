/*
  ==============================================================================

    BlendPanel.h
    Created: 5 Apr 2022 10:46:39pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include "PanelBase.h"

#include "ScaleDisplay.h"
#include "AbletonLookAndFeel.h"

//==============================================================================
class BlendPanel
:   public PanelBase
{
public:
    //==============================================================================
    BlendPanel(MicrotunerAudioProcessor* processor);
    ~BlendPanel();
    
    //==============================================================================
    void paint(juce::Graphics& g) override;
    void resized() override;
    
private:
    ScaleDisplay blendedScale;
    juce::Slider blendSlider;
    
    BlendLookAndFeel blaf;
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BlendPanel)
};
