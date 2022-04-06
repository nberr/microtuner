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
    void resized() override;
    
private:
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ScaleFilePanel)
};
