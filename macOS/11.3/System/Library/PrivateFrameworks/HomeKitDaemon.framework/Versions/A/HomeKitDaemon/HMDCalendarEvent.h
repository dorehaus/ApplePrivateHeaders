/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDTimeEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@class NSDateComponents, NSString, NSSet, NSUUID;

@interface HMDCalendarEvent : HMDTimeEvent <NSSecureCoding, HMFDumpState, HMFLogging, HMDHomeMessageReceiver> {

	os_unfair_lock_s _lock;
	NSDateComponents* _fireDateComponents;

}

@property (retain) NSDateComponents * fireDateComponents;                                     //@synthesize fireDateComponents=_fireDateComponents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(char)supportsSecureCoding;
+(id)logCategory;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFireDateComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)fireDateComponents;
-(id)emptyModelObject;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(char)areMonthDayNotMatching:(id)arg1 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(id)_nextTimerDate;
-(id)analyticsTriggerEventData;
@end

