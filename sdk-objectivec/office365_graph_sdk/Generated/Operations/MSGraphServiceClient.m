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

#import "MSGraphServiceODataEntities.h"

/**
* The implementation file for type MSGraphServiceClient.
*/

@implementation MSGraphServiceClient

- (instancetype)initWithUrl:(NSString *)url dependencyResolver:(id<MSODataDependencyResolver>)resolver {

    return [super initWithUrl:url dependencyResolver:resolver];
}


- (MSGraphServiceDirectoryObjectCollectionFetcher *) getdirectoryObjects {

	return [[MSGraphServiceDirectoryObjectCollectionFetcher alloc] initWithUrl:@"directoryObjects" parent:self];
}

- (MSGraphServiceApplicationCollectionFetcher *) getapplications {

	return [[MSGraphServiceApplicationCollectionFetcher alloc] initWithUrl:@"applications" parent:self];
}

- (MSGraphServiceContactCollectionFetcher *) getcontacts {

	return [[MSGraphServiceContactCollectionFetcher alloc] initWithUrl:@"contacts" parent:self];
}

- (MSGraphServiceDeviceConfigurationCollectionFetcher *) getdeviceConfiguration {

	return [[MSGraphServiceDeviceConfigurationCollectionFetcher alloc] initWithUrl:@"deviceConfiguration" parent:self];
}

- (MSGraphServiceDeviceCollectionFetcher *) getdevices {

	return [[MSGraphServiceDeviceCollectionFetcher alloc] initWithUrl:@"devices" parent:self];
}

- (MSGraphServiceGroupCollectionFetcher *) getgroups {

	return [[MSGraphServiceGroupCollectionFetcher alloc] initWithUrl:@"groups" parent:self];
}

- (MSGraphServiceDirectoryRoleCollectionFetcher *) getdirectoryRoles {

	return [[MSGraphServiceDirectoryRoleCollectionFetcher alloc] initWithUrl:@"directoryRoles" parent:self];
}

- (MSGraphServiceDirectoryRoleTemplateCollectionFetcher *) getdirectoryRoleTemplates {

	return [[MSGraphServiceDirectoryRoleTemplateCollectionFetcher alloc] initWithUrl:@"directoryRoleTemplates" parent:self];
}

- (MSGraphServiceServicePrincipalCollectionFetcher *) getservicePrincipals {

	return [[MSGraphServiceServicePrincipalCollectionFetcher alloc] initWithUrl:@"servicePrincipals" parent:self];
}

- (MSGraphServiceTenantDetailCollectionFetcher *) gettenantDetails {

	return [[MSGraphServiceTenantDetailCollectionFetcher alloc] initWithUrl:@"tenantDetails" parent:self];
}

- (MSGraphServiceUserCollectionFetcher *) getusers {

	return [[MSGraphServiceUserCollectionFetcher alloc] initWithUrl:@"users" parent:self];
}

- (MSGraphServiceOAuth2PermissionGrantCollectionFetcher *) getoauth2PermissionGrants {

	return [[MSGraphServiceOAuth2PermissionGrantCollectionFetcher alloc] initWithUrl:@"oauth2PermissionGrants" parent:self];
}

- (MSGraphServiceSubscribedSkuCollectionFetcher *) getsubscribedSkus {

	return [[MSGraphServiceSubscribedSkuCollectionFetcher alloc] initWithUrl:@"subscribedSkus" parent:self];
}

@end