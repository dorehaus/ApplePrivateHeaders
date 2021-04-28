/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDMediaDestinationControllerLogEvent : HMDLogEvent {

	NSString* _isTriggeredOnControllerDevice;
	NSString* _userPrivilege;

}

@property (copy,readonly) NSString * isTriggeredOnControllerDevice;              //@synthesize isTriggeredOnControllerDevice=_isTriggeredOnControllerDevice - In the implementation block
@property (copy,readonly) NSString * userPrivilege;                              //@synthesize userPrivilege=_userPrivilege - In the implementation block
-(NSString *)isTriggeredOnControllerDevice;
-(NSString *)userPrivilege;
-(id)initWithIsTriggeredOnControllerDevice:(id)arg1 userPrivilege:(id)arg2 ;
@end

