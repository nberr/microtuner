/*
  ==============================================================================

    MenuPanel.cpp
    Created: 5 Apr 2022 10:45:53pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "MenuPanel.h"

//==============================================================================
MenuPanel::MenuPanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("MenuPanel");
    setComponentID("MenuPanelID");
    
    addAndMakeVisible(modeComboBox);
    
    MPEButton.setToggleable(true);
    MPEButton.setToggleState(false, juce::NotificationType::dontSendNotification);
    addAndMakeVisible(MPEButton);
    
    pitchSlider.setColour(juce::Slider::textBoxTextColourId, juce::Colour(24, 24, 24));
    pitchSlider.setColour(juce::Slider::textBoxOutlineColourId, juce::Colour(68, 68, 68));
    pitchSlider.setColour(juce::Slider::trackColourId, juce::Colour(220, 220, 220));
    pitchSlider.setRange(1, 48, 1);
    pitchSlider.setValue(1);
    pitchSlider.setSliderStyle(juce::Slider::SliderStyle::LinearBarVertical);
    addAndMakeVisible(pitchSlider);
    
    freqSlider.setColour(juce::Slider::textBoxTextColourId, juce::Colour(24, 24, 24));
    freqSlider.setColour(juce::Slider::textBoxOutlineColourId, juce::Colour(68, 68, 68));
    freqSlider.setColour(juce::Slider::trackColourId, juce::Colour(220, 220, 220));
    freqSlider.setRange(16.35f, 4186.01f, 32.83f);
    freqSlider.setValue(261.63f);
    freqSlider.setNumDecimalPlacesToDisplay(2);
    freqSlider.setSliderStyle(juce::Slider::SliderStyle::LinearBarVertical);
    addAndMakeVisible(freqSlider);
    
    transposeSlider.setColour(juce::Slider::textBoxTextColourId, juce::Colour(24, 24, 24));
    transposeSlider.setColour(juce::Slider::textBoxOutlineColourId, juce::Colour(68, 68, 68));
    transposeSlider.setColour(juce::Slider::trackColourId, juce::Colour(220, 220, 220));
    transposeSlider.setRange(-64, 64, 1);
    transposeSlider.setValue(0);
    transposeSlider.setSliderStyle(juce::Slider::SliderStyle::LinearBarVertical);
    addAndMakeVisible(transposeSlider);
}

MenuPanel::~MenuPanel()
{
    
}

//==============================================================================
void MenuPanel::paint(juce::Graphics& g)
{
    g.setColour(juce::Colour(143, 143, 143));
    g.fillAll();
    
    g.setColour(juce::Colour(220, 220, 220));
    g.fillRect(pitchSlider.getBounds());
    g.fillRect(freqSlider.getBounds());
    g.fillRect(transposeSlider.getBounds());
}

void MenuPanel::resized()
{
    modeComboBox.setBounds(12, 34, 102, 26);
    MPEButton.setBounds(12, 102, 102, 26);
    pitchSlider.setBounds(12, 176, 102, 26);
    freqSlider.setBounds(12, 240, 102, 26);
    transposeSlider.setBounds(12, 304, 102, 26);
}
