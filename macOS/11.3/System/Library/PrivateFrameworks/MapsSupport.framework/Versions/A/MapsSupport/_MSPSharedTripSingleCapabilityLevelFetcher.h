/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPSharedTripCapabilityLevelFetcherObserver.h>

@protocol OS_dispatch_queue;
@class MSPSharedTripContact, NSTimer, NSObject, NSString;

@interface _MSPSharedTripSingleCapabilityLevelFetcher : NSObject <MSPSharedTripCapabilityLevelFetcherObserver> {

	MSPSharedTripContact* _contact;
	/*^block*/id _completion;
	_MSPSharedTripSingleCapabilityLevelFetcher* _keepAliveReference;
	double _timeoutInterval;
	NSTimer* _timeoutTimer;
	unsigned long long _type;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)_timeout;
-(void)_finish;
-(void)capabilityLevelsDidUpdate;
-(id)initWithContact:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

