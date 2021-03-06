// Copyright 2012 Dean Michael Berris <dberris@google.com>.
// Copyright 2012 Google, Inc.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef NETWORK_PROTOCOL_HTTP_MESSAGE_WRAPPERS_STATUS_MESSAGE_IPP_20120311
#define NETWORK_PROTOCOL_HTTP_MESSAGE_WRAPPERS_STATUS_MESSAGE_IPP_20120311

#include <network/protocol/http/message/wrappers/status_message.hpp>

namespace network { namespace http {

status_message_wrapper::status_message_wrapper(response_base &response)
: response_(response)
{}

status_message_wrapper::operator std::string () const {
  if (cache_) return *cache_;
  std::string tmp;
  response_.get_status_message(tmp);
  cache_ = tmp;
  return *cache_;
}

}  // namespace http
}  // namespace network

#endif  // NETWORK_PROTOCOL_HTTP_MESSAGE_WRAPPERS_STATUS_MESSAGE_IPP_20120311
