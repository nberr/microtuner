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
    //setLookAndFeel(&sflaf);
    
    addAndMakeVisible(folderSelector);
    addAndMakeVisible(fileSelector);
    
    addAndMakeVisible(next);
    addAndMakeVisible(prev);
    
    addAndMakeVisible(info);
}

ScaleFilePanel::~ScaleFilePanel()
{
    setLookAndFeel(nullptr);
}

//==============================================================================
void ScaleFilePanel::paint(juce::Graphics& g)
{
    g.setColour(juce::Colour(25, 25, 25));
    g.fillAll();
    
    g.setColour(juce::Colours::white);
    g.drawText("Scale File", 16, 17, 81, 16, juce::Justification::left);
    
    g.setColour(juce::Colour(84, 83, 84));
    g.fillRect(110, 30, 206, 2);
    
    g.setColour(juce::Colour(151, 150, 150));
    g.drawText("Folder", 19, 58, 53, 18, juce::Justification::left);
    g.drawText("File", 19, 90, 28, 15, juce::Justification::left);
}

void ScaleFilePanel::resized()
{
    folderSelector.setBounds(96, 58, 216, 18);
    fileSelector.setBounds(96, 90, 216, 18);
    
    next.setBounds(167, 128, 39, 26);
    prev.setBounds(128, 128, 39, 26);
    
    info.setBounds(290, 128, 26, 26);
}
