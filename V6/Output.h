#pragma once

#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "Output.g.h"

namespace winrt::DARIC::implementation
{
    struct Output : OutputT<Output>
    {
        Output();
    };
}

namespace winrt::DARIC::factory_implementation
{
    struct Output : OutputT<Output, implementation::Output>
    {
    };
}
