/*
  ==============================================================================

    BlendPanel.h
    Created: 5 Apr 2022 10:46:39pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include "PanelBase.h"

//==============================================================================
class BlendPanel
:   public PanelBase
{
public:
    //==============================================================================
    BlendPanel(MicrotunerAudioProcessor* processor);
    ~BlendPanel();
    
    //==============================================================================
    void resized() override;
    
private:
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BlendPanel)
};
