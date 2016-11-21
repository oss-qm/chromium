// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "media/base/key_system_names.h"

namespace media {

bool IsChildKeySystemOf(const std::string& key_system,
                        const std::string& base) {
  std::string prefix = base + '.';
  return key_system.substr(0, prefix.size()) == prefix;
}

}  // namespace media
