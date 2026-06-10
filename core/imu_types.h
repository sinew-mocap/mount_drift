// SPDX-License-Identifier: MIT
// Copyright (c) 2026-present K. S. Ernest (iFire) Lee
//
// mount_drift/core — the trivial IMU value types the calibrator operates on.
// Vendor-neutral; mount_drift owns its own copy so it depends on no other cluster.
#pragma once

typedef struct {
	float w, x, y, z;
} Quat;
typedef struct {
	float x, y, z;
} Accel;
