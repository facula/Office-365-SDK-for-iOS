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

@class MSGraphServiceReferenceAttachmentOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceReferenceAttachmentFetcher.
*/

@protocol MSGraphServiceReferenceAttachmentFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphServiceReferenceAttachment *referenceAttachment, MSODataException *exception))callback;
- (id<MSGraphServiceReferenceAttachmentFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceReferenceAttachmentFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphServiceReferenceAttachmentFetcher>)select:(NSString *)params;
- (id<MSGraphServiceReferenceAttachmentFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphServiceReferenceAttachmentOperations *operations;


@end

@interface MSGraphServiceReferenceAttachmentFetcher : MSODataEntityFetcher<MSGraphServiceReferenceAttachmentFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateReferenceAttachment:(MSGraphServiceReferenceAttachment *)referenceAttachment callback:(void (^)(MSGraphServiceReferenceAttachment *referenceAttachment, MSODataException *error))callback;
- (NSURLSessionTask *) deleteReferenceAttachment:(void (^)(int status, MSODataException *exception))callback;

@end