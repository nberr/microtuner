/*
  ==============================================================================

    MainPanel.cpp
    Created: 5 Apr 2022 10:46:48pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "MainPanel.h"

//==============================================================================
MainPanel::MainPanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("MainPanel");
    setComponentID("MainPanelID");
}

MainPanel::~MainPanel()
{
    
}

//==============================================================================
void MainPanel::resized()
{
    
}
