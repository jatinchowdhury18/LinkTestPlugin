#pragma once

#include <pch.h>

struct LinkInterface
{
    bool isEnabled() const noexcept
    {
        return link.has_value();
    }

    void toggleEnable (bool shouldBeEnabled)
    {
        if (! shouldBeEnabled)
        {
            link.reset();
            return;
        }

        link.emplace (120.0);
        link->enable (true);
    }

    std::optional<ableton::Link> link;
};

using SharedLinkInterface = juce::SharedResourcePointer<LinkInterface>;