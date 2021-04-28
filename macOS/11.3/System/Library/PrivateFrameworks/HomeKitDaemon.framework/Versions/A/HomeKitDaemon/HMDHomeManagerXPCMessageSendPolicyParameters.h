/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDXPCMessageSendPolicyParameters.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface HMDHomeManagerXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters <NSCopying, NSMutableCopying> {

	char _active;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (getter=isActive,readonly) char active;                       //@synthesize active=_active - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(char)isActive;
-(id)signature;
-(id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
@end

