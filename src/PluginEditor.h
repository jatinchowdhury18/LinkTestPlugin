#pragma once

#include "LinkTestPlugin.h"

class PluginEditor : public juce::AudioProcessorEditor
{
public:
    explicit PluginEditor (LinkTestPlugin& plugin) : juce::AudioProcessorEditor (plugin)
    {
        addAndMakeVisible (enableLinkButton);
        enableLinkButton.setColour (juce::TextButton::ColourIds::buttonOnColourId, juce::Colours::red);
        enableLinkButton.setClickingTogglesState (true);
        enableLinkButton.setToggleState (linkInterface->isEnabled(), juce::dontSendNotification);
        enableLinkButton.onClick = [this]
        {
            linkInterface->toggleEnable (enableLinkButton.getToggleState());
        };

        setSize (400, 400);
    }

    void paint (juce::Graphics& g) override
    {
        g.fillAll (juce::Colours::darkgrey);
    }

    void resized() override
    {
        enableLinkButton.setBounds (0, 0, 100, 30);
    }

private:
    juce::TextButton enableLinkButton { "Link" };

    SharedLinkInterface linkInterface;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PluginEditor)
};
