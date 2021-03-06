#include "pch.h"
#include "Output.h"
#if __has_include("Output.g.cpp")
#include "Output.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::ViewManagement;
//using namespace winrt::Microsoft::Graphics::Canvas;
//using namespace Microsoft::Graphics::Canvas::UI::Xaml;
//using namespace winrt::Microsoft::Graphics::Canvas;

namespace winrt::DARIC::implementation
{
    Output::Output()
    {
        InitializeComponent();
    }
}
