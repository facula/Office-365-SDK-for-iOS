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

@class MSOutlookServicesEventFetcher;
@class MSOutlookServicesEventCollectionFetcher;
@class MSOutlookServicesCalendarOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookServicesModels.h"

/**
* The header for type MSOutlookServicesCalendarFetcher.
*/

@protocol MSOutlookServicesCalendarFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSOutlookServicesCalendar *calendar, MSODataException *exception))callback;
- (id<MSOutlookServicesCalendarFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSOutlookServicesCalendarFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSOutlookServicesCalendarFetcher>)select:(NSString *)params;
- (id<MSOutlookServicesCalendarFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOutlookServicesCalendarOperations *operations;

- (MSOutlookServicesEventCollectionFetcher *)getCalendarView;
- (MSOutlookServicesEventFetcher *) getCalendarViewById:(NSString*)_id;
- (MSOutlookServicesEventCollectionFetcher *)getEvents;
- (MSOutlookServicesEventFetcher *) getEventsById:(NSString*)_id;

@end

@interface MSOutlookServicesCalendarFetcher : MSODataEntityFetcher<MSOutlookServicesCalendarFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateCalendar:(MSOutlookServicesCalendar *)calendar callback:(void (^)(MSOutlookServicesCalendar *calendar, MSODataException *error))callback;
- (NSURLSessionTask *) deleteCalendar:(void (^)(int status, MSODataException *exception))callback;

@end