#pragma once

#include <pch.h>

#include "LinkInterface.h"

struct Params : chowdsp::ParamHolder
{
};

using State = chowdsp::PluginStateImpl<Params>;

class LinkTestPlugin : public chowdsp::PluginBase<State>
{
public:
    LinkTestPlugin();

    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override {}
    void processAudioBlock (juce::AudioBuffer<float>& buffer) override;

    juce::AudioProcessorEditor* createEditor() override;

private:
    SharedLinkInterface linkInterface;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (LinkTestPlugin)
};
