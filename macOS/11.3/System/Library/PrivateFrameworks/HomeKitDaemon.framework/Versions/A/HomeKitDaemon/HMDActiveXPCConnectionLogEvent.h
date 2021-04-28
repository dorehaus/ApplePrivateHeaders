/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDActiveXPCConnectionLogEvent : HMDLogEvent {

	char _activated;
	char _added;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (getter=isActivated,readonly) char activated;              //@synthesize activated=_activated - In the implementation block
@property (readonly) char added;                                     //@synthesize added=_added - In the implementation block
+(id)initWithNewXPCConnectionAdded:(id)arg1 ;
+(id)initWithXPCConnectionRemoved:(id)arg1 ;
-(NSString *)name;
-(char)isActivated;
-(char)added;
-(id)initWithXPCConnection:(id)arg1 added:(char)arg2 ;
@end
