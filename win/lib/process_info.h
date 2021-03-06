// Copyright 2010 Google Inc. All Rights Reserved.
// Use of this source code is governed by an Apache-style license that can be
// found in the COPYING file.
//
// Information about the current process.

#ifndef RLZ_WIN_LIB_PROCESS_INFO_H_
#define RLZ_WIN_LIB_PROCESS_INFO_H_

#include "base/basictypes.h"

namespace rlz_lib {

class ProcessInfo {
 public:
  enum IntegrityLevel {
    INTEGRITY_UNKNOWN,
    LOW_INTEGRITY,
    MEDIUM_INTEGRITY,
    HIGH_INTEGRITY,
  };

  // All these functions cache the result after first run.
  static bool IsRunningAsSystem();
  static bool HasAdminRights();  // System / Admin / High Elevation on Vista

 private:
  DISALLOW_COPY_AND_ASSIGN(ProcessInfo);
};  // class
};  // namespace

#endif  // RLZ_WIN_LIB_PROCESS_INFO_H_
