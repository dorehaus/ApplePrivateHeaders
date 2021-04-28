/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/Versions/A/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSMapTable, NSString;

@interface _CDContextualLocationRegistrationMonitor : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _registrations;
	NSMutableDictionary* _managers;
	NSMapTable* _effectiveBundleIDs;
	NSMutableDictionary* _effectiveBundleIDRegionInfos;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * registrations;                          //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * managers;                        //@synthesize managers=_managers - In the implementation block
@property (nonatomic,readonly) NSMapTable * effectiveBundleIDs;                       //@synthesize effectiveBundleIDs=_effectiveBundleIDs - In the implementation block
@property (readonly) NSMutableDictionary * effectiveBundleIDRegionInfos;              //@synthesize effectiveBundleIDRegionInfos=_effectiveBundleIDRegionInfos - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3 ;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2 ;
-(NSMutableSet *)registrations;
-(NSMutableDictionary *)managers;
-(NSMapTable *)effectiveBundleIDs;
-(NSMutableDictionary *)effectiveBundleIDRegionInfos;
-(id)regionInfosForRegistration:(id)arg1 ;
-(void)addRegistration:(id)arg1 ;
-(void)removeRegistration:(id)arg1 ;
@end

