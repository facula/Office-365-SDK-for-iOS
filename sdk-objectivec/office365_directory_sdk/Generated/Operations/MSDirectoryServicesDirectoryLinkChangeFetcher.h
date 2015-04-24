/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSDirectoryServicesDirectoryLinkChangeOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicesModels.h"

/**
* The header for type MSDirectoryServicesDirectoryLinkChangeFetcher.
*/

@protocol MSDirectoryServicesDirectoryLinkChangeFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSDirectoryServicesDirectoryLinkChange *directoryLinkChange, MSODataException *exception))callback;
- (id<MSDirectoryServicesDirectoryLinkChangeFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryServicesDirectoryLinkChangeFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSDirectoryServicesDirectoryLinkChangeFetcher>)select:(NSString *)params;
- (id<MSDirectoryServicesDirectoryLinkChangeFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryServicesDirectoryLinkChangeOperations *operations;


@end

@interface MSDirectoryServicesDirectoryLinkChangeFetcher : MSODataEntityFetcher<MSDirectoryServicesDirectoryLinkChangeFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateDirectoryLinkChange:(MSDirectoryServicesDirectoryLinkChange *)directoryLinkChange callback:(void (^)(MSDirectoryServicesDirectoryLinkChange *directoryLinkChange, MSODataException *error))callback;
- (NSURLSessionTask *) deleteDirectoryLinkChange:(void (^)(int status, MSODataException *exception))callback;

@end