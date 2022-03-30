// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from recognizer.djinni

#import "BNBHardwareClass.h"
#import "BNBLogRecordCallback.h"
#import "BNBSeverityLevel.h"
#import <Foundation/Foundation.h>


__attribute__((__visibility__("default"))) @interface BNBUtilityManager : NSObject

+ (void)initialize:(nonnull NSArray<NSString *> *)resourcePaths
       clientToken:(nonnull NSString *)clientToken;

+ (void)release;

/** Add resources search path */
+ (void)addResourcePath:(nonnull NSString *)resourcePath;

/** Remove resources search path */
+ (void)removeResourcePath:(nonnull NSString *)resourcePath;

/** Diagnostic crash. Use this to check you crash analytics systems. */
+ (void)diagnosticCrash;

/**
 * Get information about CPU capabilities. Mainly for usage on Android
 * @return JSON-string describing CPU capabilties
 */
+ (nonnull NSString *)cpuEnv;

/**
 * Check device SoC class.
 * On Android first call may require presence of OpenGL context to 
 * get info about GPU. 
 * @return hardware class of device
 */
+ (BNBHardwareClass)getHardwareClass;

+ (void)setLogLevel:(BNBSeverityLevel)level;

/**
 * Set callback to recieve log events from Banuba SDK.
 * @param cb Callback
 * @param lvl recieve logs with specified and higher levels
 */
+ (void)setLogRecordCallback:(nullable id<BNBLogRecordCallback>)cb
                         lvl:(BNBSeverityLevel)lvl;

/** Returns SDK version as string */
+ (nonnull NSString *)getBanubaSdkVersionString;

/**
 * Returns SDK version as number
 * major = version / 10000000
 * minor = (version - major * 10000000) / 100000
 * patch = (version - major * 10000000 - minor * 100000) / 1000
 * revision = version % 1000
 */
+ (int32_t)getBanubaSdkVersion;

/**
 * The Banuba SDK tracks the resource version it built for.
 * Returns version of resources as string, represented in the following format
 * “Major.Minor.Patch”.
 */
+ (nonnull NSString *)getBanubaSdkResourcesVersionString;

/**
 * Returns version as number
 * major = version / 10000000
 * minor = (version - major * 10000000) / 100000
 * patch = (version - major * 10000000 - minor * 100000) / 1000
 * revision = version % 1000
 */
+ (int32_t)getBanubaSdkResourcesVersion;

/**
 * The Banuba SDK supports external resources archives.
 * After the initialization of the Banuba SDK,
 * API provides the capability to request the version of the archive.
 * Returns version of resources archive as string,
 * represented in the following format “Major.Minor.Patch”.
 * Such a version coincides with the Banuba SDK resources version
 * if no external resources are used.
 */
+ (nonnull NSString *)getBanubaSdkResourcesVersionArchiveString;

/**
 * Checks if the current version of resources
 * is equal to Banuba SDK expected resources version
 */
+ (BOOL)checkBanubaSdkResourcesVersion;

/** Checks if Banuba SDK treats as valid the version of external resources */
+ (BOOL)checkBanubaSdkResourcesVersionIgnorePatch;

/**
 * load GL functions, for dynamic libraries only
 * should be called with active GL context
 */
+ (void)loadGlFunctions;

@end
