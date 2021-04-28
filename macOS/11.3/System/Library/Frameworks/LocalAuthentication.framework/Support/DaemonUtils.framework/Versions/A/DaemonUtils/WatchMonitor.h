/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/Versions/A/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SFApproveDiscovery, NSObject, NSDate;

@interface WatchMonitor : NSObject {

	SFApproveDiscovery* _approveDiscovery;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastActivation;

}

@property (retain) SFApproveDiscovery * approveDiscovery;                       //@synthesize approveDiscovery=_approveDiscovery - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * lastActivation;                           //@synthesize lastActivation=_lastActivation - In the implementation block
@property (nonatomic,readonly) char deviceAvailable; 
+(id)sharedInstance;
-(SFApproveDiscovery *)approveDiscovery;
-(void)setApproveDiscovery:(SFApproveDiscovery *)arg1 ;
-(void)_restartWithMinReactivationDelay:(double)arg1 ;
-(void)setLastActivation:(NSDate *)arg1 ;
-(NSDate *)lastActivation;
-(id)init;
-(void)start;
-(NSObject*<OS_dispatch_queue>)queue;
-(char)deviceAvailable;
@end

