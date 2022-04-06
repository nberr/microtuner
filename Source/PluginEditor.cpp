/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
MicrotunerAudioProcessorEditor::MicrotunerAudioProcessorEditor (MicrotunerAudioProcessor& p)
:   AudioProcessorEditor (&p),
    audioProcessor (p),
    menuPanel(&p),
    mainPanel(&p),
    notePanel(&p),
    blendPanel(&p)
{
    setSize(960, 342);
    setResizable(false, false);
    
    for (auto p : panels) {
        addAndMakeVisible(p);
    }
}

MicrotunerAudioProcessorEditor::~MicrotunerAudioProcessorEditor()
{
}

//==============================================================================
void MicrotunerAudioProcessorEditor::paint (juce::Graphics& g)
{
    
}

void MicrotunerAudioProcessorEditor::resized()
{
    (showBlendPanel) ? setSize(960 + 372, 342) : setSize (960, 342);
    
    menuPanel.setBounds(0, 0, 126, 342);
    mainPanel.setBounds(menuPanel.getRight(), 0, 702, 342);
    notePanel.setBounds(mainPanel.getRight(), 0, 132, 342);
    blendPanel.setBounds(notePanel.getRight(), 0, 372, 342);
}

//==============================================================================
void MicrotunerAudioProcessorEditor::setShowBlendPanel(bool shouldShow)
{
    showBlendPanel = shouldShow;
    resized();
}
