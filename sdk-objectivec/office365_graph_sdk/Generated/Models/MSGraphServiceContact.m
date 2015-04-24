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

#import "MSGraphServiceModels.h"

/**
* The implementation file for type MSGraphServiceContact.
*/

@implementation MSGraphServiceContact	

@synthesize odataType = _odataType;
@synthesize city = _city;
@synthesize country = _country;
@synthesize department = _department;
@synthesize dirSyncEnabled = _dirSyncEnabled;
@synthesize displayName = _displayName;
@synthesize facsimileTelephoneNumber = _facsimileTelephoneNumber;
@synthesize givenName = _givenName;
@synthesize jobTitle = _jobTitle;
@synthesize lastDirSyncTime = _lastDirSyncTime;
@synthesize mail = _mail;
@synthesize mailNickname = _mailNickname;
@synthesize mobile = _mobile;
@synthesize physicalDeliveryOfficeName = _physicalDeliveryOfficeName;
@synthesize postalCode = _postalCode;
@synthesize provisioningErrors = _provisioningErrors;
@synthesize proxyAddresses = _proxyAddresses;
@synthesize sipProxyAddress = _sipProxyAddress;
@synthesize state = _state;
@synthesize streetAddress = _streetAddress;
@synthesize surname = _surname;
@synthesize telephoneNumber = _telephoneNumber;
@synthesize thumbnailPhoto = _thumbnailPhoto;
@synthesize manager = _manager;
@synthesize directReports = _directReports;
@synthesize memberOf = _memberOf;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.Graph.Contact";
    }

	return self;
}

@end