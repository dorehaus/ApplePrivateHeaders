/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/Versions/A/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSUserDefaultObservation.h>

@protocol WBSUserDefaultObservation <NSObject>
@required
-(void)invalidate;

@end


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSString, NSObject;

@interface WBSUserDefaultObservation : NSObject <WBSUserDefaultObservation> {

	NSUserDefaults* _defaults;
	/*^block*/id _handler;
	NSString* _key;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithUserDefaults:(id)arg1 key:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end
