/*
  ==============================================================================

    NotePanel.h
    Created: 5 Apr 2022 10:46:22pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include "PanelBase.h"

//==============================================================================
class NotePanel
:   public PanelBase,
    public juce::Button::Listener
{
public:
    //==============================================================================
    NotePanel(MicrotunerAudioProcessor* processor);
    ~NotePanel();
    
    //==============================================================================
    void paint(juce::Graphics& g) override;
    void resized() override;
    
    //==============================================================================
    void buttonClicked(juce::Button* b) override;
    
private:
    //==============================================================================
    juce::TextButton followButton {"Follow"};
    
    juce::Slider positionSlider;
    juce::Slider centSlider;
    
    juce::TextButton revertButton {"Revert"};
    
    juce::TextButton blendButton {"Off"};
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NotePanel)
};
