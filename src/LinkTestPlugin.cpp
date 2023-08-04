#include "LinkTestPlugin.h"
#include "PluginEditor.h"

LinkTestPlugin::LinkTestPlugin() = default;

void LinkTestPlugin::prepareToPlay ([[maybe_unused]] double sampleRate, [[maybe_unused]] int samplesPerBlock)
{
}

void LinkTestPlugin::processAudioBlock ([[maybe_unused]] juce::AudioBuffer<float>& buffer)
{
}

juce::AudioProcessorEditor* LinkTestPlugin::createEditor()
{
    return new PluginEditor { *this };
}

// This creates new instances of the plugin
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new LinkTestPlugin();
}
