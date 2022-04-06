/*
  ==============================================================================

    BlendPanel.cpp
    Created: 5 Apr 2022 10:46:39pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "BlendPanel.h"

//==============================================================================
BlendPanel::BlendPanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("BlendPanel");
    setComponentID("BlendPanelID");
}

BlendPanel::~BlendPanel()
{
    
}

//==============================================================================
void BlendPanel::resized()
{
    
}
