/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CBCentralManager, NSMutableSet, NSString;

@interface HAPBTLECentralManager : HMFObject <CBCentralManagerDelegate> {

	NSObject*<OS_dispatch_queue> workQueue;
	CBCentralManager* centralManager;
	NSMutableSet* delegates;
	long long state;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,retain) CBCentralManager * centralManager; 
@property (nonatomic,retain) NSMutableSet * delegates; 
@property (assign) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getInstance;
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMutableSet *)delegates;
-(void)setDelegates:(NSMutableSet *)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCentralManager:(CBCentralManager *)arg1 ;
-(CBCentralManager *)centralManager;
-(id)_getCentralManager;
-(void)registerCentralManagerDelegate:(id)arg1 ;
@end

