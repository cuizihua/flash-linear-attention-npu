// Stub npu_cpp_extension.h - provides NPU C++ extension compatibility
// This file provides the necessary includes and macros for NPU operator development

#ifndef OP_PLUGIN_INCLUDE_NPU_CPP_EXTENSION_H
#define OP_PLUGIN_INCLUDE_NPU_CPP_EXTENSION_H

// Core PyTorch includes
#include <torch/extension.h>
#include <ATen/ATen.h>
#include <ATen/Tensor.h>
#include <c10/util/Optional.h>

// Include torch_npu if available
#ifdef TORCH_NPU_AVAILABLE
#include <torch_npu/csrc/core/npu/NPUStream.h>
#include <torch_npu/csrc/core/npu/NPUException.h>
#endif

// Common macros for NPU operations
#define NPU_CHECK_ERROR(expr) \
  do { \
    auto __result = (expr); \
    if (__result != 0) { \
      AT_ERROR("NPU error: ", __result); \
    } \
  } while (0)

// Utility functions
namespace op_plugin {

// Placeholder for NPU-specific utility functions
// These should match the signatures expected by the FLA operators

} // namespace op_plugin

#endif // OP_PLUGIN_INCLUDE_NPU_CPP_EXTENSION_H
