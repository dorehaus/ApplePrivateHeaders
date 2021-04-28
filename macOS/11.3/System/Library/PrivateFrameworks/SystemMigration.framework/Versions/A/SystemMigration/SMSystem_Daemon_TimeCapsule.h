/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SMSystem_Daemon.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSString, NSObject;

@interface SMSystem_Daemon_TimeCapsule : SMSystem_Daemon {

	NSMutableArray* availableShares;
	NSString* humanName;
	NSObject*<OS_dispatch_queue> sharesQueue;

}

@property (retain) NSMutableArray * availableShares; 
@property (retain) NSString * humanName; 
@property (retain) NSObject*<OS_dispatch_queue> sharesQueue; 
+(unsigned long long)requiredScannerState;
+(id)timeCapsuleURLForHostname:(id)arg1 ;
-(id)description;
-(id)accessibilityDescription;
-(id)systemName;
-(unsigned long long)systemType;
-(id)childSystems;
-(NSString *)humanName;
-(void)setHumanName:(NSString *)arg1 ;
-(char)selectableSystem;
-(double)estimatedTransferRate;
-(id)initWithURL:(id)arg1 humanName:(id)arg2 ;
-(void)addRemoteShare:(id)arg1 ;
-(NSMutableArray *)availableShares;
-(void)setAvailableShares:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)sharesQueue;
-(void)setSharesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
