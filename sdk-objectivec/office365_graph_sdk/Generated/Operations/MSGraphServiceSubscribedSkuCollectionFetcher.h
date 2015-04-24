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

@class MSGraphServiceSubscribedSkuFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceSubscribedSkuCollectionFetcher.
*/

@protocol MSGraphServiceSubscribedSkuCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphServiceSubscribedSku> *subscribedSkus, MSODataException *exception))callback;

- (id<MSGraphServiceSubscribedSkuCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphServiceSubscribedSkuCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphServiceSubscribedSkuCollectionFetcher>)top:(int)value;
- (id<MSGraphServiceSubscribedSkuCollectionFetcher>)skip:(int)value;
- (id<MSGraphServiceSubscribedSkuCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphServiceSubscribedSkuCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphServiceSubscribedSkuCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceSubscribedSkuCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphServiceSubscribedSkuFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addSubscribedSku:(MSGraphServiceSubscribedSku *)entity callback:(void (^)(MSGraphServiceSubscribedSku *subscribedSku, MSODataException *e))callback;

@end

@interface MSGraphServiceSubscribedSkuCollectionFetcher : MSODataCollectionFetcher<MSGraphServiceSubscribedSkuCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end