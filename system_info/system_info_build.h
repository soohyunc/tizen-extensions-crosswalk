// Copyright (c) 2013 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SYSTEM_INFO_SYSTEM_INFO_BUILD_H_
#define SYSTEM_INFO_SYSTEM_INFO_BUILD_H_

#include <glib.h>
#include <string>

#include "common/extension_adapter.h"
#include "common/picojson.h"
#include "common/utils.h"
#include "system_info/system_info_utils.h"

class SysInfoBuild {
 public:
  explicit SysInfoBuild(ContextAPI* api);
  ~SysInfoBuild();
  void Get(picojson::value& error, picojson::value& data);
  inline void StartListening() {
    timeout_cb_id_ = g_timeout_add(system_info::default_timeout_interval,
                                   SysInfoBuild::OnUpdateTimeout,
                                   static_cast<gpointer>(this));
  }
  inline void StopListening() {
    if (timeout_cb_id_ > 0)
      g_source_remove(timeout_cb_id_);
  }

 private:
  bool UpdateHardware();
  bool UpdateOSBuild();
  static gboolean OnUpdateTimeout(gpointer user_data);

  ContextAPI* api_;
  std::string model_;
  std::string manufacturer_;
  std::string buildversion_;
  int timeout_cb_id_;

  DISALLOW_COPY_AND_ASSIGN(SysInfoBuild);
};

#endif  // SYSTEM_INFO_SYSTEM_INFO_BUILD_H_
