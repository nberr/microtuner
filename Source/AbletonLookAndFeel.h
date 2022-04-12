/*
  ==============================================================================

    AbletonLookAndFeel.h
    Created: 5 Apr 2022 10:45:10pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
class AbletonLookAndFeel
:   public juce::LookAndFeel_V4
{
public:
    //==============================================================================
    AbletonLookAndFeel() {
        
    }
    
    ~AbletonLookAndFeel() {
        
    }
    
    void drawButtonBackground(juce::Graphics& g, juce::Button& b, const juce::Colour& backgroundColour, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) {
        
        
    }
    
private:
    
};

class ABLookAndFeel
:   public juce::LookAndFeel_V4
{
public:
    ABLookAndFeel() {

    }
    
    ~ABLookAndFeel() {
        
    }
    
    void drawButtonBackground(juce::Graphics& g, juce::Button& b, const juce::Colour& backgroundColour, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) {
        
        if (b.getToggleState()) {
            g.setColour(juce::Colours::blue);
        }
        else {
            g.setColour(juce::Colours::green);
        }
        
        g.setColour(juce::Colour(25, 25, 25));
        g.fillRoundedRectangle(0, 0, b.getWidth(), b.getHeight(), 6);
        
        g.setColour(juce::Colour(90, 90, 90));
        g.fillEllipse(17, 100, 6, 6);
        
    }
    
    void drawButtonText(juce::Graphics& g, juce::TextButton& b, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) {
        if (b.getToggleState()) {
            g.setColour(juce::Colour(245, 180, 62));
        }
        else {
            g.setColour(juce::Colour(151, 150, 150));
        }
        
        g.drawText(b.getButtonText(), 5, b.getHeight()*0.5f, 30, 14, juce::Justification::centred);
    }
    
};

class GeneratorLookAndFeel
:   public juce::LookAndFeel_V4
{
public:
    GeneratorLookAndFeel() {

    }
    
    ~GeneratorLookAndFeel() {
        
    }
    
    void drawButtonBackground(juce::Graphics& g, juce::Button& b, const juce::Colour& backgroundColour, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) {
        
        if (b.getName() == "Generate Button") {
            
            if (b.isEnabled()) {
                g.setColour(juce::Colour(245, 180, 62));
                if (shouldDrawButtonAsDown) {
                    g.fillRoundedRectangle(0, 0, b.getWidth(), b.getHeight(), 20);
                }
                else {
                    g.drawRoundedRectangle(0, 0, b.getWidth(), b.getHeight(), 20, 2);
                }
            }
            else {
                g.setColour(juce::Colour(127, 127, 127));
                if (shouldDrawButtonAsDown) {
                    g.fillRect(0, 0, b.getWidth(), b.getHeight());
                }
                else {
                    g.drawRoundedRectangle(0, 0, b.getWidth(), b.getHeight(), 20, 2);
                }
            }
        }
        else {
            
            g.setColour(juce::Colour(40, 40, 40));
            g.drawRoundedRectangle(0, 0, b.getWidth(), b.getHeight(), 0, 2);
            
            g.setColour(juce::Colour(245, 180, 62));
            
            if (b.getToggleState()) {
                g.fillRect(2, 2, b.getWidth()-4, b.getHeight()-4);
            }
            else {
                g.drawRoundedRectangle(2, 2, b.getWidth()-4, b.getHeight()-4, 0, 2);
            }
            
        }
        
    }
    
    void drawButtonText(juce::Graphics& g, juce::TextButton& b, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) {
        if (b.getName() == "Generate Button") {
            
            if (b.isEnabled()) {
                
                if (shouldDrawButtonAsDown) {
                    g.setColour(juce::Colour(25, 25, 25));
                }
                else {
                    g.setColour(juce::Colour(245, 180, 62));
                }
                
            }
            else {
                g.setColour(juce::Colour(127, 127, 127));
                if (shouldDrawButtonAsDown) {
                    g.fillRect(0, 0, b.getWidth(), b.getHeight());
                }
                else {
                    g.drawRoundedRectangle(0, 0, b.getWidth(), b.getHeight(), 20, 2);
                }
            }
            
            g.drawText("Generate", 0, 0, b.getWidth(), b.getHeight(), juce::Justification::centred);
        }
    }
    
    juce::CaretComponent* createCaretComponent (juce::Component* keyFocusOwner)
    {
        auto caret = new juce::CaretComponent (keyFocusOwner);

        caret->setColour (juce::CaretComponent::caretColourId, keyFocusOwner->findColour (juce::Label::textColourId));

        return caret;
    }

    juce::Label* createSliderTextBox (juce::Slider& slider)
    {
        auto* l = new juce::Label();

        l->setJustificationType (juce::Justification::centred);
        l->setColour (juce::Label::textColourId, slider.findColour (juce::Slider::textBoxTextColourId));
        l->setColour (juce::Label::textWhenEditingColourId, slider.findColour (juce::Slider::textBoxTextColourId));
        l->setColour (juce::Label::outlineWhenEditingColourId, juce::Colours::transparentWhite);
        l->setFont (18);

        return l;
    }
    
};

class ScaleFileLookAndFeel
:   public juce::LookAndFeel_V4
{
public:
    ScaleFileLookAndFeel() {

    }
    
    ~ScaleFileLookAndFeel() {
        
    }
    
    void drawButtonBackground(juce::Graphics& g, juce::Button& b, const juce::Colour& backgroundColour, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) {
        
        
    }
};

class NoteLookAndFeel
:   public juce::LookAndFeel_V4
{
public:
    NoteLookAndFeel() {

    }
    
    ~NoteLookAndFeel() {
        
    }
    
    void drawButtonBackground(juce::Graphics& g, juce::Button& b, const juce::Colour& backgroundColour, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) {
        
        if (b.getName() == "Blend Button") {
            
            g.setColour(juce::Colour(40, 40, 40));
            g.drawRoundedRectangle(0, 0, b.getWidth(), b.getHeight(), 0, 2);
            
            g.setColour(juce::Colour(245, 180, 62));
            if (b.getToggleState()) {
                g.fillRect(2, 2, b.getWidth()-4, b.getHeight()-4);
            }
            else {
                g.drawRoundedRectangle(2, 2, b.getWidth()-4, b.getHeight()-4, 0, 2);
            }
            
        }
        else if (b.getName() == "Follow Button") {
            
            g.setColour(juce::Colour(40, 40, 40));
            g.drawRoundedRectangle(0, 0, b.getWidth(), b.getHeight(), 0, 2);
            
            g.setColour(juce::Colour(245, 180, 62));
            if (b.getToggleState()) {
                g.fillRect(2, 2, b.getWidth()-4, b.getHeight()-4);
            }
            else {
                g.drawRoundedRectangle(2, 2, b.getWidth()-4, b.getHeight()-4, 0, 2);
            }
            
        }
        else if (b.getName() == "Revert Button") {
            
            
            
            g.setColour(juce::Colour(245, 180, 62));
            if (shouldDrawButtonAsDown) {
                g.fillRoundedRectangle(0, 0, b.getWidth(), b.getHeight(), 20);
            }
            else {
                g.drawRoundedRectangle(0, 0, b.getWidth(), b.getHeight(), 20, 2);
            }
            
        }
        
    }
    
    void drawButtonText(juce::Graphics& g, juce::TextButton& b, bool shouldDrawButtonAsHighlighted, bool shouldDrawButtonAsDown) {
        
        if (b.getName() == "Blend Button") {
            
            if (b.getToggleState()) {
                g.setColour(juce::Colour(25, 25, 25));
                g.drawText("On", 40, 8, 23, 16, juce::Justification::centred);
            }
            else {
                g.setColour(juce::Colour(245, 180, 62));
                g.drawText("Off", 35, 8, 29, 16, juce::Justification::centred);
            }
        }
        else if (b.getName() == "Follow Button") {
            
            if (b.getToggleState()) {
                g.setColour(juce::Colour(25, 25, 25));
            }
            else {
                g.setColour(juce::Colour(245, 180, 62));
            }
            
            g.drawText("Follow", 27, 6, 52, 16, juce::Justification::centred);
            
        }
        else if (b.getName() == "Revert Button") {
            
            if (shouldDrawButtonAsDown) {
                g.setColour(juce::Colour(25, 25, 25));
            }
            else {
                g.setColour(juce::Colour(245, 180, 62));
            }
            
            g.drawText("Revert", 23, 6, 57, 16, juce::Justification::centred);
            
        }
        
    }
};
