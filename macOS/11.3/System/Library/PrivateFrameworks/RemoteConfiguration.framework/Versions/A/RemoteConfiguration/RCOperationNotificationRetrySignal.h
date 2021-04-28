/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/Versions/A/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RCOperationRetrySignal.h>

@protocol OS_dispatch_group, NSObject;
@class NSObject, NSString;

@interface RCOperationNotificationRetrySignal : NSObject <RCOperationRetrySignal> {

	NSObject*<OS_dispatch_group> _group;
	unsigned long long _timeoutTime;
	id<NSObject> _notificationObserver;
	NSString* _notificationName;
	double _timeout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)onQueue:(id)arg1 signal:(/*^block*/id)arg2 ;
-(id)initWithNotificationName:(id)arg1 timeout:(double)arg2 ;
@end

