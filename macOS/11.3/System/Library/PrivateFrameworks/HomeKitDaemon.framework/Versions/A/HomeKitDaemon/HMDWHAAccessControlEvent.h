/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDWHAAccessControlEvent : HMDLogEvent <HMDAWDLogEvent> {

	char _isP2PEnabled;
	char _isPasswordSet;
	int _privilegeLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char isP2PEnabled;                     //@synthesize isP2PEnabled=_isP2PEnabled - In the implementation block
@property (assign,nonatomic) int privilegeLevel;                    //@synthesize privilegeLevel=_privilegeLevel - In the implementation block
@property (assign,nonatomic) char isPasswordSet;                    //@synthesize isPasswordSet=_isPasswordSet - In the implementation block
+(id)eventWithP2PEnabled:(char)arg1 privilegeLevel:(long long)arg2 passwordSet:(char)arg3 ;
+(int)awdUserPrivilegeFromHMUserPrivilege:(long long)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(void)setIsP2PEnabled:(char)arg1 ;
-(int)privilegeLevel;
-(void)setPrivilegeLevel:(int)arg1 ;
-(void)setIsPasswordSet:(char)arg1 ;
-(char)isP2PEnabled;
-(char)isPasswordSet;
@end
