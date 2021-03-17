﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once
#include "KnownResourceQualifierName.g.h"

namespace winrt::Microsoft::ApplicationModel::Resources::implementation
{
    struct KnownResourceQualifierName
    {
        KnownResourceQualifierName() = default;

        static hstring Contrast();
        static hstring Custom();
        static hstring DeviceFamily();
        static hstring HomeRegion();
        static hstring Language();
        static hstring LayoutDirection();
        static hstring Scale();
        static hstring TargetSize();
        static hstring Theme();
    };
}
namespace winrt::Microsoft::ApplicationModel::Resources::factory_implementation
{
    struct KnownResourceQualifierName : KnownResourceQualifierNameT<KnownResourceQualifierName, implementation::KnownResourceQualifierName>
    {
    };
}
