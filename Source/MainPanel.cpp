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
:   PanelBase(processor),
    abPanel(processor),
    scaleFilePanel(processor),
    generatorPanel(processor),
    scaleDisplayPanel(processor)
{
    setName("MainPanel");
    setComponentID("MainPanelID");
    
    for (auto p : panels) {
        addAndMakeVisible(p);
    }
}

MainPanel::~MainPanel()
{
    
}

//==============================================================================
void MainPanel::resized()
{
    abPanel.setBounds(0, 0, 46, 342);
    scaleFilePanel.setBounds(abPanel.getRight(), 0, 342, 168);
    generatorPanel.setBounds(abPanel.getRight(), scaleFilePanel.getBottom(), 342, 174);
    scaleDisplayPanel.setBounds(scaleFilePanel.getRight(), 0, 314, 342);
}
