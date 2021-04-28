/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/Versions/A/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSGrant.h>

@protocol OS_xpc_object;
@class NSString, NSObject;

@interface RBSEndowmentGrant : RBSGrant {

	NSString* _endowmentNamespace;
	NSObject*<OS_xpc_object> _encodedEndowment;

}

@property (nonatomic,copy,readonly) NSString * endowmentNamespace;                     //@synthesize endowmentNamespace=_endowmentNamespace - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> encodedEndowment;              //@synthesize encodedEndowment=_encodedEndowment - In the implementation block
+(id)grantWithNamespace:(id)arg1 endowment:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(NSString *)endowmentNamespace;
-(NSObject*<OS_xpc_object>)encodedEndowment;
@end

