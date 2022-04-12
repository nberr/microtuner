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
    aScaleFilePanel(processor),
    aGeneratorPanel(processor, true),
    aScaleDisplayPanel(processor),
    bScaleFilePanel(processor),
    bGeneratorPanel(processor, false),
    bScaleDisplayPanel(processor)
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
void MainPanel::paint(juce::Graphics& g)
{
    g.setColour(juce::Colour(143, 143, 143));
    g.fillAll();
}

void MainPanel::resized()
{
    abPanel.setBounds(0, 0, 46, 342);
    
    if (aPanelShown) {
        
        aScaleFilePanel.setVisible(true);
        aGeneratorPanel.setVisible(true);
        aScaleDisplayPanel.setVisible(true);
        
        bScaleFilePanel.setVisible(false);
        bGeneratorPanel.setVisible(false);
        bScaleDisplayPanel.setVisible(false);
        
    }
    else {
        
        aScaleFilePanel.setVisible(false);
        aGeneratorPanel.setVisible(false);
        aScaleDisplayPanel.setVisible(false);
        
        bScaleFilePanel.setVisible(true);
        bGeneratorPanel.setVisible(true);
        bScaleDisplayPanel.setVisible(true);
        
    }
    
    aScaleFilePanel.setBounds(abPanel.getRight(), 0, 342, 168);
    aGeneratorPanel.setBounds(abPanel.getRight(), aScaleFilePanel.getBottom(), 342, 174);
    aScaleDisplayPanel.setBounds(aScaleFilePanel.getRight(), 0, 314, 342);
    
    bScaleFilePanel.setBounds(abPanel.getRight(), 0, 342, 168);
    bGeneratorPanel.setBounds(abPanel.getRight(), aScaleFilePanel.getBottom(), 342, 174);
    bScaleDisplayPanel.setBounds(aScaleFilePanel.getRight(), 0, 314, 342);
}

//==============================================================================
void MainPanel::setAPanelShown(bool shouldShow)
{
    aPanelShown = shouldShow;
    resized();
}
