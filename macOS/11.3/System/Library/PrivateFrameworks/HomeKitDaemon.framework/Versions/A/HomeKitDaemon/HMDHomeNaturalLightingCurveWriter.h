/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDLightProfileDataSource;
@class HMDHome, NSString;

@interface HMDHomeNaturalLightingCurveWriter : HMFObject <HMFLogging> {

	HMDHome* _home;
	id<HMDLightProfileDataSource> _dataSource;

}

@property (__weak,readonly) HMDHome * home;                                 //@synthesize home=_home - In the implementation block
@property (readonly) id<HMDLightProfileDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (copy,readonly) NSString * logIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDLightProfileDataSource>)dataSource;
-(HMDHome *)home;
-(NSString *)logIdentifier;
-(id)initWithHome:(id)arg1 ;
-(void)setNaturalLightingEnabled:(char)arg1 forLightProfiles:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithHome:(id)arg1 dataSource:(id)arg2 ;
@end

