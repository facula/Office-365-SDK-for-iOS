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

/**
* The implementation file for type MSDirectoryServicesUserOperations.
*/

@implementation MSDirectoryServicesUserOperations

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {
 
    return [super initOperationWithUrl:urlComponent parent:parent];
}

- (NSURLSessionTask *)assignLicenseWithAddLicenses:(MSDirectoryServicesAssignedLicense *) addLicenses removeLicenses:(NSString *) removeLicenses callback:(void (^)(MSDirectoryServicesUser *user, MSODataException *exception))callback {
	
	NSString *addLicensesString = [self.resolver.jsonSerializer serialize:addLicenses property:@"addLicenses"];
	NSString *removeLicensesString = [self.resolver.jsonSerializer serialize:removeLicenses property:@"removeLicenses"];
	NSURLSessionTask *task = [self assignLicenseRawWithAddLicenses:addLicensesString removeLicenses:removeLicensesString callback:^(NSString *returnValue, MSODataException *exception) {
       
	   if (exception == nil) {

			MSDirectoryServicesUser * result = (MSDirectoryServicesUser *)[super.resolver.jsonSerializer deserialize:[returnValue dataUsingEncoding:NSUTF8StringEncoding] asClass:[MSDirectoryServicesUser class]];
            callback(result, exception);
        } 
		else {

            callback(nil, exception);
        }
    }];
    
    return task;
}

- (NSURLSessionTask *)assignLicenseRawWithAddLicenses:(NSString *) addLicenses removeLicenses:(NSString *) removeLicenses callback:(void(^)(NSString *returnValue, MSODataException *exception))callback {

	id<MSODataRequest> request = [super.resolver createODataRequest];
	NSArray *parameters = [[NSArray alloc] initWithObjects:
                          [[NSDictionary alloc] initWithObjectsAndKeys :addLicenses,@"addLicenses", nil],
                          [[NSDictionary alloc] initWithObjectsAndKeys :removeLicenses,@"removeLicenses", nil], nil];

	NSData* payload = [[MSODataBaseContainerHelper generatePayloadWithParameters:parameters dependencyResolver:self.resolver] dataUsingEncoding:NSUTF8StringEncoding];

	[request setContent:payload];


	[request.url appendPathComponent:@"assignLicense"];
	[request setVerb:HTTP_VERB_POST];

	NSURLSessionTask *task = [super oDataExecuteRequest:request 
											   callback:^(id<MSODataResponse> response, MSODataException *exception) {
        
		if (exception == nil) {
            
			callback([[NSString alloc] initWithData:response.data encoding:NSUTF8StringEncoding], exception);
        }
        else {

            callback([[NSString alloc] initWithFormat:@"%d", response.status], exception);
        }
    }];
    
    return task;
}
    				
@end