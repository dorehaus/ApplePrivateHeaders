/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDObjectLookup.h>

@class HMDHomeManager;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup {

	HMDHomeManager* _homeManager;

}

@property (__weak) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
+(id)logCategory;
-(void)scanObjects;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(void)_scanHomes;
-(void)_scanCloudZones;
-(void)_scanAccounts;
@end
