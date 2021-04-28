/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDAssetDownloadSchedulerContinuation.h>

@protocol OS_xpc_object;
@class EDAssetDownloadScheduler, NSObject, NSString;

@interface _EDAssetDownloadSchedulerContinuation : NSObject <EDAssetDownloadSchedulerContinuation> {

	EDAssetDownloadScheduler* _scheduler;
	NSObject*<OS_xpc_object> _activity;

}

@property (assign,nonatomic,__weak) EDAssetDownloadScheduler * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;                        //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(EDAssetDownloadScheduler *)scheduler;
-(void)setScheduler:(EDAssetDownloadScheduler *)arg1 ;
-(void)rescheduleAfterSuccess;
-(void)rescheduleAfterFailure;
-(void)stopScheduling;
@end
