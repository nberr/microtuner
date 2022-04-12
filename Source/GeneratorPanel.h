/*
  ==============================================================================

    GeneratorPanel.h
    Created: 5 Apr 2022 10:47:46pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include "PanelBase.h"

//==============================================================================
class GeneratorPanel
:   public PanelBase,
    public juce::Button::Listener,
    public juce::Slider::Listener
{
public:
    //==============================================================================
    GeneratorPanel(MicrotunerAudioProcessor* processor, bool isAPanel);
    ~GeneratorPanel();
    
    //==============================================================================
    void paint(juce::Graphics& g) override;
    void resized() override;
    
    //==============================================================================
    void buttonClicked(juce::Button* b) override;
    
    //==============================================================================
    void sliderValueChanged(juce::Slider* s) override;
    
private:
    //==============================================================================
    GeneratorLookAndFeel glaf;
    
    bool isAPanel;
    
    juce::TextButton useGeneratorButton;
    
    juce::Slider pitchSlider;
    juce::Slider octaveNumeratorSlider;
    juce::Slider octaveDenominatorSlider;
    juce::Slider randSlider;
    
    std::vector<juce::Slider *> sliders = {
        &pitchSlider,
        &octaveNumeratorSlider,
        &octaveDenominatorSlider,
        &randSlider
    };
    
    juce::TextButton generateButton {"Generate"};
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GeneratorPanel)
};
