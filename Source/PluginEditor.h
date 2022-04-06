/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

#include "MenuPanel.h"
#include "MainPanel.h"
#include "NotePanel.h"
#include "BlendPanel.h"

//==============================================================================
/**
*/
class MicrotunerAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    MicrotunerAudioProcessorEditor (MicrotunerAudioProcessor&);
    ~MicrotunerAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

    //==============================================================================
    void setShowBlendPanel(bool shouldShow);
    
private:
    //==============================================================================
    MicrotunerAudioProcessor& audioProcessor;
    
    //==============================================================================
    MenuPanel menuPanel;
    MainPanel mainPanel;
    NotePanel notePanel;
    BlendPanel blendPanel;
    
    std::vector<PanelBase *> panels = {
        &menuPanel,
        &mainPanel,
        &notePanel,
        &blendPanel
    };
    
    bool showBlendPanel = false;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MicrotunerAudioProcessorEditor)
};
