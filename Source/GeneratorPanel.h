/*
  ==============================================================================

    GeneratorPanel.h
    Created: 5 Apr 2022 10:47:46pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include "PanelBase.h"

//==============================================================================
class GeneratorPanel
:   public PanelBase
{
public:
    //==============================================================================
    GeneratorPanel(MicrotunerAudioProcessor* processor, bool isAPanel);
    ~GeneratorPanel();
    
    //==============================================================================
    void paint(juce::Graphics& g) override;
    void resized() override;
    
private:
    //==============================================================================
    bool isAPanel;
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GeneratorPanel)
};
