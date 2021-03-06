#include "caffe2/utils/proto_wrap.h"

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/generated_message_util.h>

namespace caffe {

// Caffe wrapper functions for protobuf's GetEmptyStringAlreadyInited() function
// used to avoid duplicated global variable in the case when protobuf
// is built with hidden visibility.
const ::std::string& GetEmptyStringAlreadyInited() {
  return ::google::protobuf::internal::GetEmptyStringAlreadyInited();
}

}  // namespace caffe

namespace ONNX_NAMESPACE {

// ONNX wrapper functions for protobuf's GetEmptyStringAlreadyInited() function
// used to avoid duplicated global variable in the case when protobuf
// is built with hidden visibility.
const ::std::string& GetEmptyStringAlreadyInited() {
  return ::google::protobuf::internal::GetEmptyStringAlreadyInited();
}

}  // namespace ONNX_NAMESPACE

namespace caffe2 {

// Caffe2 wrapper functions for protobuf's GetEmptyStringAlreadyInited() function
// used to avoid duplicated global variable in the case when protobuf
// is built with hidden visibility.
const ::std::string& GetEmptyStringAlreadyInited() {
  return ::google::protobuf::internal::GetEmptyStringAlreadyInited();
}

void ShutdownProtobufLibrary() {
  ::google::protobuf::ShutdownProtobufLibrary();
}

}  // namespace caffe2
