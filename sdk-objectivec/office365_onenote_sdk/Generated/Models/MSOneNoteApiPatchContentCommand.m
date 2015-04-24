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

#import "MSOneNoteApiModels.h"

/**
* The implementation file for type PatchContentCommand.
*/

@implementation MSOneNoteApiPatchContentCommand	

@synthesize odataType = _odataType;
@synthesize action = _action;
@synthesize target = _target;
@synthesize content = _content;
@synthesize position = _position;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OneNote.Api.PatchContentCommand";
	}

	return self;
}

- (void)setactionString:(NSString *)value {

	if ([value isEqualToString:@"Replace"]) {

		self.action = MSOneNoteApi_PatchActionType_Replace;
	}

	if ([value isEqualToString:@"Append"]) {

		self.action = MSOneNoteApi_PatchActionType_Append;
	}

	if ([value isEqualToString:@"Delete"]) {

		self.action = MSOneNoteApi_PatchActionType_Delete;
	}

	if ([value isEqualToString:@"Insert"]) {

		self.action = MSOneNoteApi_PatchActionType_Insert;
	}

	if ([value isEqualToString:@"Prepend"]) {

		self.action = MSOneNoteApi_PatchActionType_Prepend;
	}
}
- (void)setpositionString:(NSString *)value {

	if ([value isEqualToString:@"After"]) {

		self.position = MSOneNoteApi_PatchInsertPosition_After;
	}

	if ([value isEqualToString:@"Before"]) {

		self.position = MSOneNoteApi_PatchInsertPosition_Before;
	}
}

@end