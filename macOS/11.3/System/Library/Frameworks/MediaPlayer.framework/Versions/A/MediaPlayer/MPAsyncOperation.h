/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/MPUserIdentityConsuming.h>

@protocol OS_dispatch_queue;
@class ICUserIdentity, NSObject, NSError, NSString;

@interface MPAsyncOperation : NSOperation <MPUserIdentityConsuming> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _isExecuting;
	char _isFinished;
	ICUserIdentity* _userIdentity;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSError * error;                   //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) ICUserIdentity * userIdentity;              //@synthesize userIdentity=_userIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSError *)error;
-(void)start;
-(void)finish;
-(char)isFinished;
-(char)isExecuting;
-(char)isConcurrent;
-(char)isAsynchronous;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(ICUserIdentity *)userIdentity;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
@end

