/*
 * Copyright (C) 2024 Paranoid Android
 *
 * SPDX-License-Identifier: Apache-2.0
 */

package com.xiaomi.settings.camera;

import android.annotation.TargetApi;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.SystemProperties;
import android.service.quicksettings.Tile;
import android.service.quicksettings.TileService;
import androidx.preference.PreferenceManager;

public class CameraApertureTileService extends TileService {

    private static final String APERTURE_PROP_KEY = "persist.vendor.camera.manualApertureFnumber";
    private static final String APERTURE_PROP_VALUE_1 = "1.9";
    private static final String APERTURE_PROP_VALUE_2 = "4.0";

    private void updateUI(String apertureValue) {
        final Tile tile = getQsTile();
        tile.setState(Tile.STATE_ACTIVE);
        tile.setLabel(apertureValue);
        tile.updateTile();
    }

    @Override
    public void onStartListening() {
        super.onStartListening();
        // Read the current value of the property
        String currentApertureValue = SystemProperties.get(APERTURE_PROP_KEY, APERTURE_PROP_VALUE_1);
        updateUI(currentApertureValue);
    }

    @Override
    public void onStopListening() {
        super.onStopListening();
    }

    @Override
    public void onClick() {
        super.onClick();
        // Read the current value of the property
        String currentApertureValue = SystemProperties.get(APERTURE_PROP_KEY, APERTURE_PROP_VALUE_1);
        // Toggle the property value
        String newApertureValue = APERTURE_PROP_VALUE_1.equals(currentApertureValue) ? APERTURE_PROP_VALUE_2 : APERTURE_PROP_VALUE_1;
        // Set the new property value
        SystemProperties.set(APERTURE_PROP_KEY, newApertureValue);
        updateUI(newApertureValue);
    }
}
