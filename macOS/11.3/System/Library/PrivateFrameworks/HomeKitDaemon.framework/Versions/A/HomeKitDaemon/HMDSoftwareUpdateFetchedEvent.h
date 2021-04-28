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

@interface HMDSoftwareUpdateFetchedEvent : HMDLogEvent <HMDAWDLogEvent> {

	char _userInitiated;
	char _newUpdateFetched;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=wasUserInitiated,nonatomic) char userInitiated;                    //@synthesize userInitiated=_userInitiated - In the implementation block
@property (assign,getter=wasNewUpdateFetched,nonatomic) char newUpdateFetched;              //@synthesize newUpdateFetched=_newUpdateFetched - In the implementation block
+(id)eventWasUserInitiated:(char)arg1 wasNewUpdateFetched:(char)arg2 ;
-(void)setUserInitiated:(char)arg1 ;
-(char)wasUserInitiated;
-(char)wasNewUpdateFetched;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(void)setNewUpdateFetched:(char)arg1 ;
@end

