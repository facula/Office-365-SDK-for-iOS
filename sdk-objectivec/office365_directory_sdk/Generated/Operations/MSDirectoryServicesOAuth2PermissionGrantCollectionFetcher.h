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

@class MSDirectoryServicesOAuth2PermissionGrantFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicesModels.h"

/**
* The header for type MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher.
*/

@protocol MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSDirectoryServicesOAuth2PermissionGrant> *oAuth2PermissionGrants, MSODataException *exception))callback;

- (id<MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher>)select:(NSString *)params;
- (id<MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher>)filter:(NSString *)params;
- (id<MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher>)top:(int)value;
- (id<MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher>)skip:(int)value;
- (id<MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher>)expand:(NSString *)value;
- (id<MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSDirectoryServicesOAuth2PermissionGrantFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addOAuth2PermissionGrant:(MSDirectoryServicesOAuth2PermissionGrant *)entity callback:(void (^)(MSDirectoryServicesOAuth2PermissionGrant *oAuth2PermissionGrant, MSODataException *e))callback;

@end

@interface MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher : MSODataCollectionFetcher<MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end