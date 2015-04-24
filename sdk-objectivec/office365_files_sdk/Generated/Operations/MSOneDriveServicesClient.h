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

@class MSOneDriveServicesItemCollectionFetcher;
@class MSOneDriveServicesDriveFetcher;
@class MSOneDriveServicesCurrentUserRequestContextFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOneDriveServicesModels.h"

/**
* The header for type MSOneDriveServicesClient.
*/

@interface MSOneDriveServicesClient : MSODataBaseContainer

- (instancetype)initWithUrl:(NSString *)url  dependencyResolver:(id<MSODataDependencyResolver>)resolver;
-(MSOneDriveServicesItemCollectionFetcher*) getfiles;
-(MSOneDriveServicesDriveFetcher*) getdrive;
-(MSOneDriveServicesCurrentUserRequestContextFetcher*) getme;

@end