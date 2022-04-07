/*
  ==============================================================================

    MainPanel.h
    Created: 5 Apr 2022 10:46:48pm
    Author:  Nicholas Berriochoa

  ==============================================================================
*/

#pragma once

#include "PanelBase.h"

#include "ABPanel.h"
#include "ScaleFilePanel.h"
#include "GeneratorPanel.h"
#include "ScaleDisplayPanel.h"

//==============================================================================
class MainPanel
:   public PanelBase
{
public:
    //==============================================================================
    MainPanel(MicrotunerAudioProcessor* processor);
    ~MainPanel();
    
    //==============================================================================
    void resized() override;
    
    //==============================================================================
    void setAPanelShown(bool shouldShow);
    
private:
    //==============================================================================
    ABPanel abPanel;
    bool aPanelShown = true;
    
    ScaleFilePanel aScaleFilePanel;
    GeneratorPanel aGeneratorPanel;
    ScaleDisplayPanel aScaleDisplayPanel;
    
    ScaleFilePanel bScaleFilePanel;
    GeneratorPanel bGeneratorPanel;
    ScaleDisplayPanel bScaleDisplayPanel;
    
    std::vector<PanelBase *> panels = {
        &abPanel,
        &aScaleFilePanel,
        &aGeneratorPanel,
        &aScaleDisplayPanel,
        &bScaleFilePanel,
        &bGeneratorPanel,
        &bScaleDisplayPanel
    };
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainPanel)
};
