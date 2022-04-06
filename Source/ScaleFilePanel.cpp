/*
  ==============================================================================

    ScaleFilePanel.cpp
    Created: 5 Apr 2022 10:47:31pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "ScaleFilePanel.h"

//==============================================================================
ScaleFilePanel::ScaleFilePanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("ScaleFilePanel");
    setComponentID("ScaleFilePanelID");
}

ScaleFilePanel::~ScaleFilePanel()
{
    
}

//==============================================================================
void ScaleFilePanel::resized()
{
    
}
