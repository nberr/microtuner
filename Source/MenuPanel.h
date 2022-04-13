/*
  ==============================================================================

    MenuPanel.h
    Created: 5 Apr 2022 10:45:53pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include "PanelBase.h"

class MenuPanel
:   public PanelBase
{
public:
    //==============================================================================
    MenuPanel(MicrotunerAudioProcessor* processor);
    ~MenuPanel();
    
    //==============================================================================
    void paint(juce::Graphics& g) override;
    void resized() override;
    
private:
    //==============================================================================
    juce::ComboBox modeComboBox;
    
    juce::TextButton MPEButton {"Off"};
    
    juce::Slider pitchSlider;
    juce::Slider freqSlider;
    juce::Slider transposeSlider;
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MenuPanel)
};
