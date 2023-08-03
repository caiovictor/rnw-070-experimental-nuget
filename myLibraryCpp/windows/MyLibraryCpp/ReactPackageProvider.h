#pragma once
#include "ReactPackageProvider.g.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::MyLibraryCpp::implementation
{
    struct ReactPackageProvider : ReactPackageProviderT<ReactPackageProvider>
    {
        ReactPackageProvider() = default;

        void CreatePackage(IReactPackageBuilder const &packageBuilder) noexcept;
    };
} // namespace winrt::MyLibraryCpp::implementation

namespace winrt::MyLibraryCpp::factory_implementation
{

struct ReactPackageProvider : ReactPackageProviderT<ReactPackageProvider, implementation::ReactPackageProvider> {};

} // namespace winrt::MyLibraryCpp::factory_implementation
