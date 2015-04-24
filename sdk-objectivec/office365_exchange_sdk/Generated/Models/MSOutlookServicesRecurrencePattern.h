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

#import <Foundation/Foundation.h>
#import "MSOutlookServicesProtocols.h"
#import "MSOutlookServicesRecurrencePatternType.h"
#import "MSOutlookServicesDayOfWeek.h"
#import "MSOutlookServicesWeekIndex.h"


/**
* The header for type RecurrencePattern.
*/

@interface MSOutlookServicesRecurrencePattern : NSObject

@property (retain, nonatomic, readonly) NSString *odataType;
@property  (nonatomic, getter=type, setter=setType:) MSOutlookServicesRecurrencePatternType Type;
- (void)setTypeString:(NSString *)value;
@property (nonatomic, getter=interval, setter=setInterval:) int Interval;
@property (nonatomic, getter=month, setter=setMonth:) int Month;
@property (nonatomic, getter=dayOfMonth, setter=setDayOfMonth:) int DayOfMonth;
@property (retain, nonatomic, readwrite, getter=daysOfWeek, setter=setDaysOfWeek:) NSMutableArray<MSOutlookServicesDayOfWeek> *DaysOfWeek;
@property  (nonatomic, getter=firstDayOfWeek, setter=setFirstDayOfWeek:) MSOutlookServicesDayOfWeek FirstDayOfWeek;
- (void)setFirstDayOfWeekString:(NSString *)value;
@property  (nonatomic, getter=index, setter=setIndex:) MSOutlookServicesWeekIndex Index;
- (void)setIndexString:(NSString *)value;

@end