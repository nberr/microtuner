/*
  ==============================================================================

    GeneratorPanel.cpp
    Created: 5 Apr 2022 10:47:46pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "GeneratorPanel.h"

//==============================================================================
GeneratorPanel::GeneratorPanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("GeneratorPanel");
    setComponentID("GeneratorPanelID");
}

GeneratorPanel::~GeneratorPanel()
{
    
}

//==============================================================================
void GeneratorPanel::resized()
{
    
}

