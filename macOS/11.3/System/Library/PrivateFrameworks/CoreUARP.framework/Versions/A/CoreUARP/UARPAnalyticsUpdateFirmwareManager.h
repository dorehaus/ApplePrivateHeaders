/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/Versions/A/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;
@class UARPController, NSMutableArray, NSObject;

@interface UARPAnalyticsUpdateFirmwareManager : NSObject {

	UARPController* _controller;
	NSMutableArray* _stateArray;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _purgeTimer;

}
-(void)dealloc;
-(id)description;
-(void)configurePurgeTimer;
-(void)purgeStaleUpdateStateRecords;
-(id)updateStateForAccessoryID:(id)arg1 assetID:(id)arg2 ;
-(void)updateComplete:(id)arg1 ;
-(id)updateStatesForAccessoryID:(id)arg1 ;
-(id)initWithController:(id)arg1 queue:(id)arg2 ;
-(void)stagingStartedForAccessoryID:(id)arg1 assetID:(id)arg2 userIntent:(char)arg3 ;
-(void)stagingCompleteForAccessoryID:(id)arg1 assetID:(id)arg2 status:(unsigned long long)arg3 ;
-(void)setAccessoryIDUnreachable:(id)arg1 ;
@end

