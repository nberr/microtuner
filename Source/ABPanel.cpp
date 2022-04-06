/*
  ==============================================================================

    ABPanel.cpp
    Created: 5 Apr 2022 10:47:03pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "ABPanel.h"

//==============================================================================
ABPanel::ABPanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("ABPanel");
    setComponentID("ABPanelID");
}

ABPanel::~ABPanel()
{
    
}

//==============================================================================
void ABPanel::resized()
{
    
}


