/*
  ==============================================================================

    BlendPanel.cpp
    Created: 5 Apr 2022 10:46:39pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#include "BlendPanel.h"

//==============================================================================
BlendPanel::BlendPanel(MicrotunerAudioProcessor* processor)
:   PanelBase(processor)
{
    setName("BlendPanel");
    setComponentID("BlendPanelID");
    
    blendSlider.setName("Blend Slider");
    blendSlider.setRange(0.0f, 1.0f, 0.01f);
    blendSlider.setValue(1.0f);
    blendSlider.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    blendSlider.setLookAndFeel(&blaf);
    addAndMakeVisible(blendSlider);
    
    addAndMakeVisible(blendedScale);
}

BlendPanel::~BlendPanel()
{
    blendSlider.setLookAndFeel(nullptr);
}

//==============================================================================
void BlendPanel::paint(juce::Graphics& g)
{
    g.setColour(juce::Colour(143, 143, 143));
    g.fillAll();
    
    g.setColour(juce::Colour(25, 25, 25));
    g.fillRect(0, 0, getWidth(), getHeight()-4);
    
    g.setColour(juce::Colours::white);
    g.drawText("Blend Output", 142, 15, 115, 19, juce::Justification::centred);
    
    g.setColour(juce::Colour(151, 150, 150));
    g.drawText("A", 17, 18, 14, 14, juce::Justification::centred);
    g.drawText("B", 17, 306, 10, 14, juce::Justification::centred);
}


void BlendPanel::resized()
{
    blendSlider.setBounds(20, 43, 25, 263);
    blendedScale.setBounds(82, 50, 238, 238);
}
