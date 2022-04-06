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
:   public PanelBase
{
public:
    //==============================================================================
    NotePanel(MicrotunerAudioProcessor* processor);
    ~NotePanel();
    
    //==============================================================================
    void resized() override;
    
private:
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NotePanel)
};
