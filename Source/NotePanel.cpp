/*
  ==============================================================================

    NotePanel.cpp
    Created: 5 Apr 2022 10:46:22pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "NotePanel.h"

#include "PluginEditor.h"

//==============================================================================
NotePanel::NotePanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("NotePanel");
    setComponentID("NotePanelID");
    setLookAndFeel(&nlaf);
    
    followButton.setToggleable(true);
    followButton.setToggleState(false, juce::NotificationType::dontSendNotification);
    followButton.addListener(this);
    addAndMakeVisible(followButton);
    
    // TODO: set the range based on how many notes in the scale
    positionSlider.setRange(0, 12, 1);
    positionSlider.setColour(juce::Slider::textBoxTextColourId, juce::Colour(245, 180, 62));
    positionSlider.setColour(juce::Slider::textBoxOutlineColourId, juce::Colour(245, 180, 62));
    positionSlider.setColour(juce::Slider::trackColourId, juce::Colours::transparentWhite);
    positionSlider.setSliderStyle(juce::Slider::SliderStyle::LinearBarVertical);
    addAndMakeVisible(positionSlider);
    
    centSlider.setRange(0, 500, 3.94);
    centSlider.setColour(juce::Slider::textBoxTextColourId, juce::Colour(245, 180, 62));
    centSlider.setColour(juce::Slider::textBoxOutlineColourId, juce::Colour(245, 180, 62));
    centSlider.setColour(juce::Slider::trackColourId, juce::Colours::transparentWhite);
    centSlider.setSliderStyle(juce::Slider::SliderStyle::LinearBarVertical);
    addAndMakeVisible(centSlider);
    
    revertButton.addListener(this);
    addAndMakeVisible(revertButton);
    
    blendButton.setToggleable(true);
    blendButton.addListener(this);
    addAndMakeVisible(blendButton);
}

NotePanel::~NotePanel()
{
    setLookAndFeel(nullptr);
}

//==============================================================================
void NotePanel::paint(juce::Graphics& g)
{
    g.setColour(juce::Colour(143, 143, 143));
    g.fillAll();
    
    g.setColour(juce::Colour(25, 25, 25));
    g.fillRoundedRectangle(0, 0, getWidth()-4, 262, 6);
    g.fillRect(0, 0, 6, 6);
    g.fillRect(0, 258, 4, 4);
    
    g.fillRoundedRectangle(4, 266, 124, 72, 6);
    if (blendButton.getToggleState()) {
        g.fillRect(124, 266, 8, 72);
    }
    
    g.setColour(juce::Colour(84, 83, 84));
    g.fillRect(0, 12, 2, 239);
    
    g.setColour(juce::Colours::white);
    g.drawText("Editor", 39, 13, 54, 16, juce::Justification::centred);
    
    g.drawText("Blend", 42, 275, 48, 16, juce::Justification::centred);
    g.setColour(juce::Colour(90, 90, 90));
    g.fillEllipse(18, 278, 8, 8);
    
    g.setColour(juce::Colour(151, 150, 150));
    g.drawText("Position", 31, 92, 67, 16, juce::Justification::centred);
    g.drawText("Cent", 45, 156, 41, 16, juce::Justification::centred);
}

void NotePanel::resized()
{
    followButton.setBounds(14, 40, 102, 26);
    
    positionSlider.setBounds(30, 112, 70, 26);
    centSlider.setBounds(22, 176, 86, 26);
    
    revertButton.setBounds(14, 224, 102, 26);
    
    blendButton.setBounds(16, 300, 100, 26);
}

//==============================================================================
void NotePanel::buttonClicked(juce::Button* b)
{
    if (b == &blendButton) {
        
        blendButton.setToggleState(!blendButton.getToggleState(), juce::dontSendNotification);
        blendButton.setButtonText((blendButton.getToggleState()) ? "On" : "Off");
        
        auto editor = (MicrotunerAudioProcessorEditor *)getParentComponent();
        editor->setShowBlendPanel(blendButton.getToggleState());
        
    }
}
