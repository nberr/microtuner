/*
  ==============================================================================

    MainPanel.h
    Created: 5 Apr 2022 10:46:48pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include "PanelBase.h"

//==============================================================================
class MainPanel
:   public PanelBase
{
public:
    //==============================================================================
    MainPanel(MicrotunerAudioProcessor* processor);
    ~MainPanel();
    
    //==============================================================================
    void resized() override;
    
private:
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainPanel)
};
