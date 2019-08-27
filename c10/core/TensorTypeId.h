#pragma once

#include <iostream>
#include <string>
#include "c10/macros/Macros.h"

namespace c10 {

// NB: Ordering will be subject to change
enum class TensorTypeId : uint8_t {
  UndefinedTensorId,
  CPUTensorId, // PyTorch/Caffe2 supported
  CUDATensorId, // PyTorch/Caffe2 supported
  SparseCPUTensorId, // PyTorch only
  SparseCUDATensorId, // PyTorch only
  MKLDNNTensorId, // Caffe2 only
  OpenGLTensorId, // Caffe2 only
  OpenCLTensorId, // Caffe2 only
  IDEEPTensorId, // Caffe2 only
  HIPTensorId, // PyTorch/Caffe2 supported
  SparseHIPTensorId, // PyTorch only
  MSNPUTensorId, // PyTorch only
  XLATensorId, // PyTorch only
  MkldnnCPUTensorId,
  QuantizedCPUTensorId, // PyTorch only
  ComplexCPUTensorId, // PyTorch only
  ComplexCUDATensorId // PyTorch only
};

C10_API const char* toString(TensorTypeId);
C10_API std::ostream& operator<<(std::ostream&, TensorTypeId);

} // namespace c10
