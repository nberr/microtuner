/*
  ==============================================================================

    ScaleDisplayPanel.cpp
    Created: 5 Apr 2022 10:48:11pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "ScaleDisplayPanel.h"

//==============================================================================
ScaleDisplayPanel::ScaleDisplayPanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("ScaleDisplayPanel");
    setComponentID("ScaleDisplayPanelID");
}

ScaleDisplayPanel::~ScaleDisplayPanel()
{
    
}

//==============================================================================
void ScaleDisplayPanel::resized()
{
    
}

