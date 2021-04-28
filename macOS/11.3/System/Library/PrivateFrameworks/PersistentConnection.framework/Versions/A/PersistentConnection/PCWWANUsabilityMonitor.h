/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/Versions/A/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorProtocol.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CUTWeakReference, NSString, PCInterfaceUsabilityMonitor, CoreTelephonyClient, CTXPCServiceSubscriptionContext;

@interface PCWWANUsabilityMonitor : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _monitorDelegateQueue;
	CUTWeakReference* _delegateReference;
	char _isInCall;
	char _isInHighPowerState;
	char _trackUsability;
	unsigned long long _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	NSString* _interfaceName;
	PCInterfaceUsabilityMonitor* _interfaceMonitor;
	int _currentRAT;
	int _powerlogCDRXToken;
	CoreTelephonyClient* _ctClient;
	int _wwanContextID;
	NSObject*<OS_dispatch_queue> _ctServerQueue;
	CTXPCServiceSubscriptionContext* _currentDataSimContext;

}

@property (nonatomic,readonly) int currentRAT;                                              //@synthesize currentRAT=_currentRAT - In the implementation block
@property (nonatomic,readonly) char isLTEWithCDRX; 
@property (nonatomic,readonly) CFStringRef wwanInterfaceName; 
@property (nonatomic,readonly) NSString * networkCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isRadioHot; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
@property (nonatomic,readonly) long long interfaceIdentifier; 
@property (nonatomic,readonly) int linkQuality; 
@property (nonatomic,readonly) char isInterfaceUsable; 
@property (nonatomic,readonly) char isInterfaceHistoricallyUsable; 
@property (nonatomic,readonly) char isInternetReachable; 
@property (nonatomic,retain,readonly) NSString * linkQualityString; 
@property (nonatomic,readonly) char isPoorLinkQuality; 
@property (nonatomic,readonly) char isBadLinkQuality; 
@property (nonatomic,readonly) char isNetworkingPowerExpensiveToUse; 
-(char)isInterfaceUsable;
-(NSString *)linkQualityString;
-(char)isPoorLinkQuality;
-(char)isInterfaceHistoricallyUsable;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(id)_currentDataSimContext;
-(char)isNetworkingPowerExpensiveToUse;
-(char)isBadLinkQuality;
-(char)isRadioHot;
-(int)currentRAT;
-(char)isLTEWithCDRX;
-(CFStringRef)wwanInterfaceName;
-(void)setTrackedTimeInterval:(double)arg1 ;
-(void)setThresholdOffTransitionCount:(unsigned long long)arg1 ;
-(void)setTrackUsability:(char)arg1 ;
-(void)_forwardConfigurationOnIvarQueue;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/id)arg1 ;
-(id)initWithDelegateQueue:(id)arg1 ;
-(void)_setupWWANMonitor;
-(void)_adjustInterfaceNameForWWANContextID:(int)arg1 interfaceName:(id)arg2 forContext:(id)arg3 ;
-(char)_isCurrentDataSimContextOnIvarQueue:(id)arg1 ;
-(void)dealloc;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(void)setDelegate:(id<PCInterfaceUsabilityMonitorDelegate>)arg1 ;
-(int)linkQuality;
-(long long)interfaceIdentifier;
-(char)isInternetReachable;
-(NSString *)networkCode;
@end

