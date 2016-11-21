// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CDM_CDM_PATHS_H_
#define MEDIA_CDM_CDM_PATHS_H_

#include <string>

#include "base/files/file_path.h"

namespace media {

// Returns the path of a CDM relative to DIR_COMPONENTS.
// On platforms where a platform specific path is used, returns
//   |cdm_base_path|/_platform_specific/<platform>_<arch>
// Otherwise, returns an empty path.
base::FilePath GetPlatformSpecificDirectory(const std::string& cdm_base_path);

}  // namespace media

#endif  // MEDIA_CDM_CDM_PATHS_H_
