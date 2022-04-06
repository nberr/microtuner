/*
  ==============================================================================

    NotePanel.cpp
    Created: 5 Apr 2022 10:46:22pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "NotePanel.h"

//==============================================================================
NotePanel::NotePanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("NotePanel");
    setComponentID("NotePanelID");
}

NotePanel::~NotePanel()
{
    
}

//==============================================================================
void NotePanel::resized()
{
    
}
