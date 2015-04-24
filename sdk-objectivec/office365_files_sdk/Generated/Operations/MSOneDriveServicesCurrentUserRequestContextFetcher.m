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

#import "MSOneDriveServicesODataEntities.h"

@implementation MSOneDriveServicesCurrentUserRequestContextFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSOneDriveServicesCurrentUserRequestContext class]]) {

		_operations = [[MSOneDriveServicesCurrentUserRequestContextOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateCurrentUserRequestContext:(id)entity callback:(void (^)(MSOneDriveServicesCurrentUserRequestContext *currentUserRequestContext, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteCurrentUserRequestContext:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSOneDriveServicesDriveFetcher *) getdrive {

	 return [[MSOneDriveServicesDriveFetcher alloc] initWithUrl:@"drive" parent:self asClass:[MSOneDriveServicesDrive class]];
}

- (MSOneDriveServicesItemCollectionFetcher *)getfiles {

    return [[MSOneDriveServicesItemCollectionFetcher alloc] initWithUrl:@"files" parent:self asClass:[MSOneDriveServicesItem class]];
}

- (id<MSOneDriveServicesItemFetcher>)getfilesById:(NSString *)_id {

    return [[[MSOneDriveServicesItemCollectionFetcher alloc] initWithUrl:@"files" parent:self asClass:[MSOneDriveServicesItem class]] getById:_id];
}

@end