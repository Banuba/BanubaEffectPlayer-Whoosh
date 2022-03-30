/// \file
/// \addtogroup Recognizer
/// @{
///
// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from recognizer.djinni

#pragma once

#include "bnb/utils/interfaces/hardware_class.hpp"
#include "bnb/utils/interfaces/log_record_callback.hpp"
#include "bnb/utils/interfaces/severity_level.hpp"
#include <bnb/utils/defs.hpp>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace bnb { namespace interfaces {

class BNB_EXPORT utility_manager {
public:
    virtual ~utility_manager() {}

    static void initialize(const std::vector<std::string> & resource_paths, const std::string & client_token);

    static void release();

    /** Add resources search path */
    static void add_resource_path(const std::string & resource_path);

    /** Remove resources search path */
    static void remove_resource_path(const std::string & resource_path);

    /** Diagnostic crash. Use this to check you crash analytics systems. */
    static void diagnostic_crash();

    /**
     * Get information about CPU capabilities. Mainly for usage on Android
     * @return JSON-string describing CPU capabilties
     */
    static std::string cpu_env();

    /**
     * Check device SoC class.
     * On Android first call may require presence of OpenGL context to 
     * get info about GPU. 
     * @return hardware class of device
     */
    static ::bnb::interfaces::hardware_class get_hardware_class();

    static void set_log_level(::bnb::interfaces::severity_level level);

    /**
     * Set callback to recieve log events from Banuba SDK.
     * @param cb Callback
     * @param lvl recieve logs with specified and higher levels
     */
    static void set_log_record_callback(const std::shared_ptr<::bnb::interfaces::log_record_callback> & cb, ::bnb::interfaces::severity_level lvl);

    /** Returns SDK version as string */
    static std::string get_banuba_sdk_version_string();

    /**
     * Returns SDK version as number
     * major = version / 10000000
     * minor = (version - major * 10000000) / 100000
     * patch = (version - major * 10000000 - minor * 100000) / 1000
     * revision = version % 1000
     */
    static int32_t get_banuba_sdk_version();

    /**
     * The Banuba SDK tracks the resource version it built for.
     * Returns version of resources as string, represented in the following format
     * “Major.Minor.Patch”.
     */
    static std::string get_banuba_sdk_resources_version_string();

    /**
     * Returns version as number
     * major = version / 10000000
     * minor = (version - major * 10000000) / 100000
     * patch = (version - major * 10000000 - minor * 100000) / 1000
     * revision = version % 1000
     */
    static int32_t get_banuba_sdk_resources_version();

    /**
     * The Banuba SDK supports external resources archives.
     * After the initialization of the Banuba SDK,
     * API provides the capability to request the version of the archive.
     * Returns version of resources archive as string,
     * represented in the following format “Major.Minor.Patch”.
     * Such a version coincides with the Banuba SDK resources version
     * if no external resources are used.
     */
    static std::string get_banuba_sdk_resources_version_archive_string();

    /**
     * Checks if the current version of resources
     * is equal to Banuba SDK expected resources version
     */
    static bool check_banuba_sdk_resources_version();

    /** Checks if Banuba SDK treats as valid the version of external resources */
    static bool check_banuba_sdk_resources_version_ignore_patch();

    /**
     * load GL functions, for dynamic libraries only
     * should be called with active GL context
     */
    static void load_gl_functions();
};

} }  // namespace bnb::interfaces
/// @}
