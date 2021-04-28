/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString, NSDate;

@interface AFHeartBeat : NSObject <AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _heartBeatTimer;
	NSObject*<OS_dispatch_source> _expirationTimer;
	/*^block*/id _heartBeatHandler;
	/*^block*/id _invalidationHandler;
	AQ _numberOfHeartBeats;
	NSString* _identifier;
	NSDate* _effectiveDate;
	double _expirationDuration;
	double _heartBeatInterval;

}

@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * effectiveDate;                        //@synthesize effectiveDate=_effectiveDate - In the implementation block
@property (nonatomic,readonly) double expirationDuration;                          //@synthesize expirationDuration=_expirationDuration - In the implementation block
@property (nonatomic,readonly) double heartBeatInterval;                           //@synthesize heartBeatInterval=_heartBeatInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfHeartBeats; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSString *)identifier;
-(void)_invalidate;
-(void)_fire;
-(NSDate *)effectiveDate;
-(double)expirationDuration;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 effectiveDate:(id)arg3 expirationDuration:(double)arg4 heartBeatInterval:(double)arg5 heartBeatHandler:(/*^block*/id)arg6 invalidationHandler:(/*^block*/id)arg7 ;
-(unsigned long long)numberOfHeartBeats;
-(double)heartBeatInterval;
@end

