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
    setLookAndFeel(&glaf);
    
    this->isAPanel = isAPanel;
    
    useGeneratorButton.setToggleable(true);
    useGeneratorButton.setToggleState(false, juce::dontSendNotification);
    useGeneratorButton.addListener(this);
    addAndMakeVisible(useGeneratorButton);
    
    for (auto s : sliders) {
        s->setColour(juce::Slider::textBoxTextColourId, juce::Colour(245, 180, 62));
        s->setColour(juce::Slider::textBoxOutlineColourId, juce::Colour(245, 180, 62));
        s->setColour(juce::Slider::trackColourId, juce::Colours::transparentWhite);
        
        s->setSliderStyle(juce::Slider::SliderStyle::LinearBarVertical);
        s->setEnabled(false);
        s->addListener(this);
        addAndMakeVisible(s);
    }
    
    pitchSlider.setRange(2, 128, 1);
    pitchSlider.setValue(12);
    
    octaveNumeratorSlider.setRange(1, 128, 1);
    octaveNumeratorSlider.setValue(1);
    
    octaveDenominatorSlider.setRange(1, 128, 1);
    octaveDenominatorSlider.setValue(1);
    
    randSlider.setRange(0, 100, 0.8f);
    randSlider.setValue(0);
    randSlider.setTextValueSuffix(" %");
    randSlider.setNumDecimalPlacesToDisplay(2);
    
    generateButton.setName("Generate Button");
    generateButton.setEnabled(false);
    generateButton.addListener(this);
    addAndMakeVisible(generateButton);
    
}

GeneratorPanel::~GeneratorPanel()
{
    setLookAndFeel(nullptr);
}

//==============================================================================
void GeneratorPanel::paint(juce::Graphics& g)
{
    g.setColour(juce::Colour(25, 25, 25));
    if (isAPanel) {
        g.fillRoundedRectangle(0, 0, getWidth(), getHeight()-4, 4);
        g.fillRect(0, 0, getWidth(), 4);
    }
    else {
        g.fillRect(0, 0, getWidth(), getHeight()-4);
    }
        
    g.setColour(juce::Colours::white);
    juce::String generatorName = (isAPanel) ? "Generator A" : "Generator B";
    g.drawText(generatorName, 42, useGeneratorButton.getY() + 4, 106, 15, juce::Justification::left);
    
    g.setColour(juce::Colour(84, 83, 84));
    g.fillRect(164, 36, 152, 2);
    
    g.setColour(juce::Colour(151, 150, 150));
    g.drawText("Pitches", 28, 64, 62, 15, juce::Justification::centred);
    g.drawText("Octave", 135, 64, 60, 15, juce::Justification::centred);
    g.drawText("/", 162, 88, 9, 17, juce::Justification::centred);
    g.drawText("Rand", 248, 64, 42, 15, juce::Justification::centred);
    
    g.setColour(juce::Colour(143, 143, 143));
    g.fillRect(0, 170, getWidth(), 4);
}

void GeneratorPanel::resized()
{
    useGeneratorButton.setBounds(14, 20, 22, 22);
    
    pitchSlider.setBounds(34, 84, 58, 26);
    octaveNumeratorSlider.setBounds(114, 84, 42, 26);
    octaveDenominatorSlider.setBounds(174, 84, 42, 26);
    randSlider.setBounds(234, 84, 70, 26);
    
    generateButton.setBounds(82, 126, 170, 26);
    
}

//==============================================================================
void GeneratorPanel::buttonClicked(juce::Button* b)
{
    if (b == &useGeneratorButton) {
        useGeneratorButton.setToggleState(!useGeneratorButton.getToggleState(), juce::NotificationType::dontSendNotification);
        
        pitchSlider.setEnabled(useGeneratorButton.getToggleState());
        octaveNumeratorSlider.setEnabled(useGeneratorButton.getToggleState());
        octaveDenominatorSlider.setEnabled(useGeneratorButton.getToggleState());
        randSlider.setEnabled(useGeneratorButton.getToggleState());
        
        generateButton.setEnabled(useGeneratorButton.getToggleState());
        
    }
}

//==============================================================================
void GeneratorPanel::sliderValueChanged(juce::Slider* s)
{
    if (s == &randSlider) {
        if (randSlider.getValue() == 100) {
            randSlider.setNumDecimalPlacesToDisplay(0);
        }
        else if (randSlider.getValue() >= 10) {
            randSlider.setNumDecimalPlacesToDisplay(1);
        }
        else {
            randSlider.setNumDecimalPlacesToDisplay(2);
        }
    }
}
