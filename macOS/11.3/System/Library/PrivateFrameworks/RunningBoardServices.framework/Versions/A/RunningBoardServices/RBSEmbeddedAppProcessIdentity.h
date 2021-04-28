/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/Versions/A/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSProcessIdentity.h>

@class NSString;

@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity {

	NSString* _embeddedApplicationIdentifier;
	NSString* _applicationJobLabel;

}
-(id)debugDescription;
-(char)isApplication;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(unsigned char)defaultManageFlags;
-(char)_matchesIdentity:(id)arg1 ;
-(id)copyWithEuid:(unsigned)arg1 ;
-(char)isAnonymous;
-(id)encodeForJob;
-(id)_initEmbeddedAppWithBundleID:(id)arg1 euid:(unsigned)arg2 platform:(int)arg3 ;
-(id)_initEmbeddedAppWithBundleID:(id)arg1 euid:(unsigned)arg2 platform:(int)arg3 jobLabel:(id)arg4 ;
-(char)isEmbeddedApplication;
-(id)embeddedApplicationIdentifier;
-(id)applicationJobLabel;
@end
