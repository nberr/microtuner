/*
  ==============================================================================

    ABPanel.h
    Created: 5 Apr 2022 10:47:03pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include "PanelBase.h"

//==============================================================================
class ABPanel
:   public PanelBase,
    public juce::Button::Listener
{
public:
    //==============================================================================
    ABPanel(MicrotunerAudioProcessor* processor);
    ~ABPanel();
    
    //==============================================================================
    void resized() override;
    
    //==============================================================================
    void buttonClicked(juce::Button* b) override;
    
private:
    //==============================================================================
    juce::TextButton aButton {"A"};
    juce::TextButton bButton {"B"};
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ABPanel)
};
