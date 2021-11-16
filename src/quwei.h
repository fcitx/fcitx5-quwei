/*
 * SPDX-FileCopyrightText: 2021~2021 CSSlayer <wengxt@gmail.com>
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */
#ifndef _FCITX5_QUWEI_QUWEI_H_
#define _FCITX5_QUWEI_QUWEI_H_

#include <fcitx/addonfactory.h>
#include <fcitx/inputmethodengine.h>

class QuweiEngine : public fcitx::InputMethodEngineV2 {
    void keyEvent(const fcitx::InputMethodEntry &entry,
                  fcitx::KeyEvent &keyEvent) override;
};

class QuweiEngineFactory : public fcitx::AddonFactory {
    fcitx::AddonInstance *create(fcitx::AddonManager *manager) override {
        FCITX_UNUSED(manager);
        return new QuweiEngine;
    }
};

#endif // _FCITX5_QUWEI_QUWEI_H_
