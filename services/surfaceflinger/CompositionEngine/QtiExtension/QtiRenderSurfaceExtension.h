/* Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */
#pragma once

#include "compositionengine/impl/RenderSurface.h"

using android::compositionengine::impl::RenderSurface;

namespace android {

namespace compositionengineextension {

class QtiRenderSurfaceExtension {
public:
    QtiRenderSurfaceExtension();
    QtiRenderSurfaceExtension(RenderSurface* renderSurface);

    int32_t qtiGetClientTargetFormat();

private:
    bool mQtiEnableExtn = false;
    RenderSurface* mQtiRenderSurface = nullptr;
};

} // namespace compositionengineextension
} // namespace android