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
#import "MSDirectoryServicesProtocols.h"

@class MSDirectoryServicesAlternativeSecurityId;
@class MSDirectoryServicesDirectoryObject;
@class MSDirectoryServicesDirectoryObject;


#import "MSDirectoryServicesDirectoryObject.h"

/**
* The header for type Device.
*/

@interface MSDirectoryServicesDevice : MSDirectoryServicesDirectoryObject
@property (nonatomic) BOOL accountEnabled;
@property (retain, nonatomic, readwrite) NSMutableArray<MSDirectoryServicesAlternativeSecurityId> *alternativeSecurityIds;
@property (retain, nonatomic, readwrite) NSDate *approximateLastLogonTimestamp;
@property (retain, nonatomic, readwrite) NSString *deviceId;
@property (retain, nonatomic, readwrite) NSString *deviceMetadata;
@property (nonatomic) int deviceObjectVersion;
@property (retain, nonatomic, readwrite) NSString *deviceOSType;
@property (retain, nonatomic, readwrite) NSString *deviceOSVersion;
@property (retain, nonatomic, readwrite) NSMutableArray *devicePhysicalIds;
@property (retain, nonatomic, readwrite) NSString *deviceTrustType;
@property (nonatomic) BOOL dirSyncEnabled;
@property (retain, nonatomic, readwrite) NSString *displayName;
@property (retain, nonatomic, readwrite) NSDate *lastDirSyncTime;
@property (retain, nonatomic, readwrite) NSMutableArray<MSDirectoryServicesDirectoryObject> *registeredOwners;
@property (retain, nonatomic, readwrite) NSMutableArray<MSDirectoryServicesDirectoryObject> *registeredUsers;

@end