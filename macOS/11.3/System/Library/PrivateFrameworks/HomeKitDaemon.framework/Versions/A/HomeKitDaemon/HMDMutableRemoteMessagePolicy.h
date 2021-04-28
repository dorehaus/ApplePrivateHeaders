/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDRemoteMessagePolicy.h>

@interface HMDMutableRemoteMessagePolicy : HMDRemoteMessagePolicy

@property (assign) char requiresSecureMessage; 
@property (assign) char allowsAnonymousMessage; 
@property (assign) char requiresAccountMessage; 
@property (assign) unsigned long long transportRestriction; 
@property (assign) unsigned long long roles; 
+(id)remoteMessagePolicyWithRequiresSecureMessage:(char)arg1 allowsAnonymousMessage:(char)arg2 requiresAccountMessage:(char)arg3 transportRestriction:(unsigned long long)arg4 roles:(unsigned long long)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRoles:(unsigned long long)arg1 ;
-(void)setRequiresSecureMessage:(char)arg1 ;
-(void)setRequiresAccountMessage:(char)arg1 ;
-(void)setTransportRestriction:(unsigned long long)arg1 ;
-(void)setAllowsAnonymousMessage:(char)arg1 ;
@end
