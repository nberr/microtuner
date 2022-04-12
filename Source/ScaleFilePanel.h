/*
  ==============================================================================

    ScaleFilePanel.h
    Created: 5 Apr 2022 10:47:31pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include "PanelBase.h"

//==============================================================================
class ScaleFilePanel
:   public PanelBase
{
public:
    //==============================================================================
    ScaleFilePanel(MicrotunerAudioProcessor* processor);
    ~ScaleFilePanel();
    
    //==============================================================================
    void paint(juce::Graphics& g) override;
    void resized() override;
    
private:
    //==============================================================================
    juce::ComboBox folderSelector;
    juce::ComboBox fileSelector;
    
    juce::TextButton next {">"};
    juce::TextButton prev {"<"};
    
    juce::TextButton info;
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ScaleFilePanel)
};
