// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_IPC_UI_EVENTS_PARAM_TRAITS_MACROS_H_
#define UI_EVENTS_IPC_UI_EVENTS_PARAM_TRAITS_MACROS_H_

#include "base/component_export.h"
#include "ipc/ipc_message_macros.h"
#include "ui/events/types/scroll_types.h"

#undef IPC_MESSAGE_EXPORT
#define IPC_MESSAGE_EXPORT COMPONENT_EXPORT(UI_EVENTS_IPC)

IPC_ENUM_TRAITS_MIN_MAX_VALUE(
    ui::input_types::ScrollGranularity,
    ui::input_types::ScrollGranularity::kFirstScrollGranularity,
    ui::input_types::ScrollGranularity::kMaxValue)

#endif  // UI_EVENTS_IPC_UI_EVENTS_PARAM_TRAITS_MACROS_H_
