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
    GeneratorPanel(MicrotunerAudioProcessor* processor);
    ~GeneratorPanel();
    
    //==============================================================================
    void resized() override;
    
private:
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GeneratorPanel)
};
