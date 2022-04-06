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
    
private:
    //==============================================================================
    ABPanel abPanel;
    ScaleFilePanel scaleFilePanel;
    GeneratorPanel generatorPanel;
    ScaleDisplayPanel scaleDisplayPanel;
    
    std::vector<PanelBase *> panels = {
        &abPanel,
        &scaleFilePanel,
        &generatorPanel,
        &scaleDisplayPanel
    };
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainPanel)
};
