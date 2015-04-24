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

@class MSDirectoryServicesSubscribedSkuFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSDirectoryServicesModels.h"

/**
* The header for type MSDirectoryServicesSubscribedSkuCollectionFetcher.
*/

@protocol MSDirectoryServicesSubscribedSkuCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSDirectoryServicesSubscribedSku> *subscribedSkus, MSODataException *exception))callback;

- (id<MSDirectoryServicesSubscribedSkuCollectionFetcher>)select:(NSString *)params;
- (id<MSDirectoryServicesSubscribedSkuCollectionFetcher>)filter:(NSString *)params;
- (id<MSDirectoryServicesSubscribedSkuCollectionFetcher>)top:(int)value;
- (id<MSDirectoryServicesSubscribedSkuCollectionFetcher>)skip:(int)value;
- (id<MSDirectoryServicesSubscribedSkuCollectionFetcher>)expand:(NSString *)value;
- (id<MSDirectoryServicesSubscribedSkuCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSDirectoryServicesSubscribedSkuCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSDirectoryServicesSubscribedSkuCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSDirectoryServicesSubscribedSkuFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addSubscribedSku:(MSDirectoryServicesSubscribedSku *)entity callback:(void (^)(MSDirectoryServicesSubscribedSku *subscribedSku, MSODataException *e))callback;

@end

@interface MSDirectoryServicesSubscribedSkuCollectionFetcher : MSODataCollectionFetcher<MSDirectoryServicesSubscribedSkuCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end