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

@class MSOutlookServicesEventMessageFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookServicesModels.h"

/**
* The header for type MSOutlookServicesEventMessageCollectionFetcher.
*/

@protocol MSOutlookServicesEventMessageCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSOutlookServicesEventMessage> *eventMessages, MSODataException *exception))callback;

- (id<MSOutlookServicesEventMessageCollectionFetcher>)select:(NSString *)params;
- (id<MSOutlookServicesEventMessageCollectionFetcher>)filter:(NSString *)params;
- (id<MSOutlookServicesEventMessageCollectionFetcher>)top:(int)value;
- (id<MSOutlookServicesEventMessageCollectionFetcher>)skip:(int)value;
- (id<MSOutlookServicesEventMessageCollectionFetcher>)expand:(NSString *)value;
- (id<MSOutlookServicesEventMessageCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSOutlookServicesEventMessageCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookServicesEventMessageCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSOutlookServicesEventMessageFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addEventMessage:(MSOutlookServicesEventMessage *)entity callback:(void (^)(MSOutlookServicesEventMessage *eventMessage, MSODataException *e))callback;

@end

@interface MSOutlookServicesEventMessageCollectionFetcher : MSODataCollectionFetcher<MSOutlookServicesEventMessageCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end