#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::ViewManagement;

namespace winrt::DARIC::implementation
{
	MainPage::MainPage()
	{
		InitializeComponent();
	}

	bool MainPage::IsFullScreen()
	{
		auto view = ApplicationView::GetForCurrentView();
		return view.IsFullScreenMode();
	}
}

void winrt::DARIC::implementation::MainPage::toggleFullScreen_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
	auto view = ApplicationView::GetForCurrentView();
	if (!view.IsFullScreenMode()) {
		if (view.TryEnterFullScreenMode())
		{
			ApplicationView::PreferredLaunchWindowingMode(ApplicationViewWindowingMode::FullScreen);
		}
	}
}

void winrt::DARIC::implementation::MainPage::toggleFullScreen_Unchecked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
	auto view = ApplicationView::GetForCurrentView();
	if (view.IsFullScreenMode())
	{
		view.ExitFullScreenMode();
		ApplicationView::PreferredLaunchWindowingMode(ApplicationViewWindowingMode::Auto);
	}
}


void winrt::DARIC::implementation::MainPage::buttonQuit_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e)
{
	auto app = Application::Current();
	app.Exit();
}
