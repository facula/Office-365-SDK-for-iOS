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

#import "MSOutlookServicesODataEntities.h"

/**
* The implementation file for type MSOutlookServicesEventOperations.
*/

@implementation MSOutlookServicesEventOperations

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {
 
    return [super initOperationWithUrl:urlComponent parent:parent];
}

- (NSURLSessionTask *)acceptWithComment:(NSString *) comment callback:(void (^)(int returnValue, MSODataException *exception))callback {
	
	NSString *commentString = [self.resolver.jsonSerializer serialize:comment property:@"Comment"];
	NSURLSessionTask *task = [self acceptRawWithComment:commentString callback:^(NSString *returnValue, MSODataException *exception) {
       
	   if (exception == nil) {

			int result = (int)[super.resolver.jsonSerializer deserialize:[returnValue dataUsingEncoding:NSUTF8StringEncoding] asClass:nil];
            callback(result, exception);
        } 
		else {

            callback((int)[returnValue integerValue], exception);
        }
    }];
    
    return task;
}

- (NSURLSessionTask *)acceptRawWithComment:(NSString *) comment callback:(void(^)(NSString *returnValue, MSODataException *exception))callback {

	id<MSODataRequest> request = [super.resolver createODataRequest];
	NSArray *parameters = [[NSArray alloc] initWithObjects:
                          [[NSDictionary alloc] initWithObjectsAndKeys :comment,@"Comment", nil], nil];

	NSData* payload = [[MSODataBaseContainerHelper generatePayloadWithParameters:parameters dependencyResolver:self.resolver] dataUsingEncoding:NSUTF8StringEncoding];

	[request setContent:payload];


	[request.url appendPathComponent:@"Accept"];
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
    				
- (NSURLSessionTask *)declineWithComment:(NSString *) comment callback:(void (^)(int returnValue, MSODataException *exception))callback {
	
	NSString *commentString = [self.resolver.jsonSerializer serialize:comment property:@"Comment"];
	NSURLSessionTask *task = [self declineRawWithComment:commentString callback:^(NSString *returnValue, MSODataException *exception) {
       
	   if (exception == nil) {

			int result = (int)[super.resolver.jsonSerializer deserialize:[returnValue dataUsingEncoding:NSUTF8StringEncoding] asClass:nil];
            callback(result, exception);
        } 
		else {

            callback((int)[returnValue integerValue], exception);
        }
    }];
    
    return task;
}

- (NSURLSessionTask *)declineRawWithComment:(NSString *) comment callback:(void(^)(NSString *returnValue, MSODataException *exception))callback {

	id<MSODataRequest> request = [super.resolver createODataRequest];
	NSArray *parameters = [[NSArray alloc] initWithObjects:
                          [[NSDictionary alloc] initWithObjectsAndKeys :comment,@"Comment", nil], nil];

	NSData* payload = [[MSODataBaseContainerHelper generatePayloadWithParameters:parameters dependencyResolver:self.resolver] dataUsingEncoding:NSUTF8StringEncoding];

	[request setContent:payload];


	[request.url appendPathComponent:@"Decline"];
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
    				
- (NSURLSessionTask *)tentativelyAcceptWithComment:(NSString *) comment callback:(void (^)(int returnValue, MSODataException *exception))callback {
	
	NSString *commentString = [self.resolver.jsonSerializer serialize:comment property:@"Comment"];
	NSURLSessionTask *task = [self tentativelyAcceptRawWithComment:commentString callback:^(NSString *returnValue, MSODataException *exception) {
       
	   if (exception == nil) {

			int result = (int)[super.resolver.jsonSerializer deserialize:[returnValue dataUsingEncoding:NSUTF8StringEncoding] asClass:nil];
            callback(result, exception);
        } 
		else {

            callback((int)[returnValue integerValue], exception);
        }
    }];
    
    return task;
}

- (NSURLSessionTask *)tentativelyAcceptRawWithComment:(NSString *) comment callback:(void(^)(NSString *returnValue, MSODataException *exception))callback {

	id<MSODataRequest> request = [super.resolver createODataRequest];
	NSArray *parameters = [[NSArray alloc] initWithObjects:
                          [[NSDictionary alloc] initWithObjectsAndKeys :comment,@"Comment", nil], nil];

	NSData* payload = [[MSODataBaseContainerHelper generatePayloadWithParameters:parameters dependencyResolver:self.resolver] dataUsingEncoding:NSUTF8StringEncoding];

	[request setContent:payload];


	[request.url appendPathComponent:@"TentativelyAccept"];
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