/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/Versions/A/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class IOKConnection, TSgPTPClock, NSObject;

@interface TSgPTPManager : NSObject {

	IOKConnection* _connection;
	TSgPTPClock* _systemDomain;
	NSObject*<OS_dispatch_queue> _systemDomainQueue;
	unsigned long long _systemDomainClockIdentifier;

}

@property (nonatomic,readonly) unsigned long long systemDomainClockIdentifier;              //@synthesize systemDomainClockIdentifier=_systemDomainClockIdentifier - In the implementation block
@property (nonatomic,retain,readonly) TSgPTPClock * systemDomain; 
+(id)gPTPManager;
+(void)notifyWhengPTPManagerIsAvailable:(/*^block*/id)arg1 ;
+(id)sharedgPTPManager;
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
+(id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)systemDomainClockIdentifier;
-(TSgPTPClock *)systemDomain;
-(char)addDomain:(unsigned long long*)arg1 error:(id*)arg2 ;
-(char)removeDomainWithIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)addAVBDomainIndex:(unsigned short)arg1 identifier:(unsigned long long*)arg2 error:(id*)arg3 ;
-(char)removeAVBDomainWithIndex:(unsigned short)arg1 error:(id*)arg2 ;
-(char)addAirPlayDomain:(unsigned long long*)arg1 error:(id*)arg2 ;
-(char)removeAirPlayDomainWithError:(id*)arg1 ;
@end

