/*
  ==============================================================================

    GeneratorPanel.cpp
    Created: 5 Apr 2022 10:47:46pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "GeneratorPanel.h"

//==============================================================================
GeneratorPanel::GeneratorPanel(MicrotunerAudioProcessor* processor, bool isAPanel)
:   PanelBase(processor)
{
    setName("GeneratorPanel");
    setComponentID("GeneratorPanelID");
    
    this->isAPanel = isAPanel;
}

GeneratorPanel::~GeneratorPanel()
{
    
}

//==============================================================================
void GeneratorPanel::paint(juce::Graphics& g)
{
    g.setColour(juce::Colours::white);
    
    juce::String panelOwner = "B";
    
    if (isAPanel) {
        panelOwner = "A";
    }
    
    g.drawText(panelOwner, 0, 0, 40, 40, juce::Justification::centred);
}

void GeneratorPanel::resized()
{
    
}

