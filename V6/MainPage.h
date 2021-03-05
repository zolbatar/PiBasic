#pragma once

#include "MainPage.g.h"

namespace winrt::DARIC::implementation
{
	struct MainPage : MainPageT<MainPage>
	{
		MainPage();

		bool IsFullScreen();
		//void IsFullScreen(bool value);

		void toggleFullScreen_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e);
		void toggleFullScreen_Unchecked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e);
		void buttonQuit_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e);
	};
}

namespace winrt::DARIC::factory_implementation
{
	struct MainPage : MainPageT<MainPage, implementation::MainPage>
	{
	};
}
