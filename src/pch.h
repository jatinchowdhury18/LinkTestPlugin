#pragma once

/**
 * Pre-compiled headers for JUCE plugins
 */

// C++/STL headers here...

// JUCE modules
#include <chowdsp_plugin_base/chowdsp_plugin_base.h>
#include <chowdsp_gui/chowdsp_gui.h>

// Any other widely used headers that don't change...
JUCE_BEGIN_IGNORE_WARNINGS_GCC_LIKE ("-Wzero-as-null-pointer-constant",
                                     "-Wimplicit-int-conversion",
                                     "-Wfour-char-constants",
                                     "-Wshadow",
                                     "-Wdeprecated-declarations")
#include <ableton/Link.hpp>
JUCE_END_IGNORE_WARNINGS_GCC_LIKE
