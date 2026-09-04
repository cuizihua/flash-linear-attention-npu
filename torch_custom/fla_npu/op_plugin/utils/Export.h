// Stub Export.h - provides compatibility macros for fla_npu compilation
// This file provides the necessary export/visibility macros used by op_plugin

#ifndef OP_PLUGIN_UTILS_EXPORT_H
#define OP_PLUGIN_UTILS_EXPORT_H

// Define visibility/export macros
#if defined(_WIN32)
  #define OP_PLUGIN_EXPORT __declspec(dllexport)
  #define OP_PLUGIN_IMPORT __declspec(dllimport)
  #define OP_PLUGIN_HIDDEN
#else
  #define OP_PLUGIN_EXPORT __attribute__((visibility("default")))
  #define OP_PLUGIN_IMPORT __attribute__((visibility("default")))
  #define OP_PLUGIN_HIDDEN __attribute__((visibility("hidden")))
#endif

// API macro - typically used for public API functions
#ifndef OP_PLUGIN_API
  #ifdef OP_PLUGIN_BUILD
    #define OP_PLUGIN_API OP_PLUGIN_EXPORT
  #else
    #define OP_PLUGIN_API OP_PLUGIN_IMPORT
  #endif
#endif

#endif // OP_PLUGIN_UTILS_EXPORT_H
