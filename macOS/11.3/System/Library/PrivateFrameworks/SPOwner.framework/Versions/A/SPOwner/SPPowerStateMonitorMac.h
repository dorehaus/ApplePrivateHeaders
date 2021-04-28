/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SPOwner/SPOwner-Structs.h>
#import <SPOwner/SPPowerStateMonitor.h>

@protocol SPPowerMonitorDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface SPPowerStateMonitorMac : NSObject <SPPowerStateMonitor> {

	id<SPPowerMonitorDelegate> _delegate;
	unsigned long long _state;
	IOPMConnectionRef _powerManagementConnection;
	NSObject*<OS_dispatch_queue> _monitorQueue;

}

@property (assign,nonatomic) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) IOPMConnectionRef powerManagementConnection;              //@synthesize powerManagementConnection=_powerManagementConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> monitorQueue;                //@synthesize monitorQueue=_monitorQueue - In the implementation block
@property (assign,nonatomic,__weak) id<SPPowerMonitorDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SPPowerMonitorDelegate>)delegate;
-(void)setDelegate:(id<SPPowerMonitorDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)claimWakeWithReason:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)monitorQueue;
-(unsigned long long)parseCapabilities:(unsigned)arg1 ;
-(IOPMConnectionRef)powerManagementConnection;
-(void)setPowerManagementConnection:(IOPMConnectionRef)arg1 ;
-(void)setMonitorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
