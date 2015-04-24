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

#import "MSDirectoryServicesODataEntities.h"

@implementation MSDirectoryServicesApplicationFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSDirectoryServicesApplication class]]) {

		_operations = [[MSDirectoryServicesApplicationOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (NSURLSessionTask *)updateApplication:(id)entity callback:(void (^)(MSDirectoryServicesApplication *application, MSODataException *exception))callback {

	return [super updateEntity:entity callback:callback];
}

- (NSURLSessionTask *)deleteApplication:(void (^)(int status, MSODataException *exception))callback {

	return [super deleteWithCallback:callback];
}

- (MSDirectoryServicesExtensionPropertyCollectionFetcher *)getextensionProperties {

    return [[MSDirectoryServicesExtensionPropertyCollectionFetcher alloc] initWithUrl:@"extensionProperties" parent:self asClass:[MSDirectoryServicesExtensionProperty class]];
}

- (id<MSDirectoryServicesExtensionPropertyFetcher>)getextensionPropertiesById:(NSString *)_id {

    return [[[MSDirectoryServicesExtensionPropertyCollectionFetcher alloc] initWithUrl:@"extensionProperties" parent:self asClass:[MSDirectoryServicesExtensionProperty class]] getById:_id];
}

@end