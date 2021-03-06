// Copyright (c) 2013 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DOWNLOAD_DOWNLOAD_UTILS_H_
#define DOWNLOAD_DOWNLOAD_UTILS_H_

#include <string>
#include <algorithm>

namespace download_utils {

template <typename T>
static std::string ToString(T a) {
  std::ostringstream ss;
  ss << a;
  return ss.str();
}

const char* EnumToPChar(int error) {  // enum download_error_e
  switch (error) {
  case DOWNLOAD_ERROR_NONE:
    return "DOWNLOAD_ERROR_NONE";
  case DOWNLOAD_ERROR_INVALID_PARAMETER:
    return "DOWNLOAD_ERROR_INVALID_PARAMETER";
  case DOWNLOAD_ERROR_OUT_OF_MEMORY:
    return "DOWNLOAD_ERROR_OUT_OF_MEMORY";
  case DOWNLOAD_ERROR_NETWORK_UNREACHABLE:
    return "DOWNLOAD_ERROR_NETWORK_UNREACHABLE";
  case DOWNLOAD_ERROR_CONNECTION_TIMED_OUT:
    return "DOWNLOAD_ERROR_CONNECTION_TIMED_OUT";
  case DOWNLOAD_ERROR_NO_SPACE:
    return "DOWNLOAD_ERROR_NO_SPACE";
  case DOWNLOAD_ERROR_FIELD_NOT_FOUND:
    return "DOWNLOAD_ERROR_FIELD_NOT_FOUND";
  case DOWNLOAD_ERROR_INVALID_STATE:
    return "DOWNLOAD_ERROR_INVALID_STATE";
  case DOWNLOAD_ERROR_CONNECTION_FAILED:
    return "DOWNLOAD_ERROR_CONNECTION_FAILED";
  case DOWNLOAD_ERROR_INVALID_URL:
    return "DOWNLOAD_ERROR_INVALID_URL";
  case DOWNLOAD_ERROR_INVALID_DESTINATION:
    return "DOWNLOAD_ERROR_INVALID_DESTINATION";
  case DOWNLOAD_ERROR_TOO_MANY_DOWNLOADS:
    return "DOWNLOAD_ERROR_TOO_MANY_DOWNLOADS";
  case DOWNLOAD_ERROR_QUEUE_FULL:
    return "DOWNLOAD_ERROR_QUEUE_FULL";
  case DOWNLOAD_ERROR_ALREADY_COMPLETED:
    return "DOWNLOAD_ERROR_ALREADY_COMPLETED";
  case DOWNLOAD_ERROR_FILE_ALREADY_EXISTS:
    return "DOWNLOAD_ERROR_FILE_ALREADY_EXISTS";
  case DOWNLOAD_ERROR_CANNOT_RESUME:
    return "DOWNLOAD_ERROR_CANNOT_RESUME";
  case DOWNLOAD_ERROR_TOO_MANY_REDIRECTS:
    return "DOWNLOAD_ERROR_TOO_MANY_REDIRECTS";
  case DOWNLOAD_ERROR_UNHANDLED_HTTP_CODE:
    return "DOWNLOAD_ERROR_UNHANDLED_HTTP_CODE";
  case DOWNLOAD_ERROR_REQUEST_TIMEOUT:
    return "DOWNLOAD_ERROR_REQUEST_TIMEOUT";
  case DOWNLOAD_ERROR_RESPONSE_TIMEOUT:
    return "DOWNLOAD_ERROR_RESPONSE_TIMEOUT";
  case DOWNLOAD_ERROR_SYSTEM_DOWN:
    return "DOWNLOAD_ERROR_SYSTEM_DOWN";
  case DOWNLOAD_ERROR_ID_NOT_FOUND:
    return "DOWNLOAD_ERROR_ID_NOT_FOUND";
  case DOWNLOAD_ERROR_NO_DATA:
    return "DOWNLOAD_ERROR_NO_DATA";
  case DOWNLOAD_ERROR_IO_ERROR:
    return "DOWNLOAD_ERROR_IO_ERROR";
  default:
    return "DOWNLOAD_UNKNOWN_ERROR";
  }
}

const char* EnumToPChar(download_state_e state) {
  switch (state) {
  case DOWNLOAD_STATE_NONE:
    return "DOWNLOAD_STATE_NONE";
  case DOWNLOAD_STATE_READY:
    return "DOWNLOAD_STATE_READY";
  case DOWNLOAD_STATE_QUEUED:
    return "DOWNLOAD_STATE_QUEUED";
  case DOWNLOAD_STATE_DOWNLOADING:
    return "DOWNLOAD_STATE_DOWNLOADING";
  case DOWNLOAD_STATE_PAUSED:
    return "DOWNLOAD_STATE_PAUSED";
  case DOWNLOAD_STATE_COMPLETED:
    return "DOWNLOAD_STATE_COMPLETED";
  case DOWNLOAD_STATE_FAILED:
    return "DOWNLOAD_STATE_FAILED";
  case DOWNLOAD_STATE_CANCELED:
    return "DOWNLOAD_STATE_CANCELED";
  default:
    return "DOWNLOAD_UNKNOWN_STATE";
  }
}

const char* EnumToPChar(download_network_type_e net_type) {
  switch (net_type) {
  case DOWNLOAD_NETWORK_DATA_NETWORK:
    return "DOWNLOAD_NETWORK_DATA_NETWORK";
  case DOWNLOAD_NETWORK_WIFI:
    return "DOWNLOAD_NETWORK_WIFI";
  case DOWNLOAD_NETWORK_WIFI_DIRECT:
    return "DOWNLOAD_NETWORK_WIFI_DIRECT";
  case DOWNLOAD_NETWORK_ALL:
    return "DOWNLOAD_NETWORK_ALL";
  default:
    return "DOWNLOAD_UNKNOWN_NETWORK_TYPE";
  }
}

}  // namespace download_utils

#endif  // DOWNLOAD_DOWNLOAD_UTILS_H_
