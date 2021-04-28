/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AACCore.framework/Versions/A/AACCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AEInvalidationRouterDelegate;
@class NSObject, NSError;

@interface AEInvalidationRouter : NSObject {

	char _processedInvalidation;
	char _forwardError;
	NSObject*<OS_dispatch_queue> _queue;
	id<AEInvalidationRouterDelegate> _delegate;
	long long _mode;
	NSError* _storedError;

}

@property (nonatomic,readonly) id invalidationHandler; 
-(id)initWithQueue:(id)arg1 ;
-(id)invalidationHandler;
-(void)setRouterMode:(long long)arg1 ;
-(void)fetchCapturedErrorWithCompletion:(/*^block*/id)arg1 ;
-(void)setRouterDelegate:(id)arg1 ;
@end

