/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
MicrotunerAudioProcessorEditor::MicrotunerAudioProcessorEditor (MicrotunerAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
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
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
