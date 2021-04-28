/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomePresenceCheck.h>

@class HMDHome, NSDictionary, HMDDevice, NSArray, NSString;

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresenceCheck> {

	HMDHome* _home;
	NSDictionary* _userPresenceMap;
	HMDDevice* _lastUpdateByDevice;

}

@property (nonatomic,__weak,readonly) HMDHome * home;                          //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSDictionary * userPresenceMap;                 //@synthesize userPresenceMap=_userPresenceMap - In the implementation block
@property (nonatomic,readonly) NSArray * authorizedUsers; 
@property (nonatomic,readonly) HMDDevice * lastUpdateByDevice;                 //@synthesize lastUpdateByDevice=_lastUpdateByDevice - In the implementation block
@property (nonatomic,readonly) char hasPresenceRegionForAllUsers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(HMDHome *)home;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(id)initWithHome:(id)arg1 userPresenceMap:(id)arg2 lastUpdateByDevice:(id)arg3 ;
-(id)serializedUUIDDictionary;
-(id)serializedIdentifierDictionary;
-(char)isUserAtHome:(id)arg1 ;
-(char)isUserNotAtHome:(id)arg1 ;
-(char)isAnyUserAtHome;
-(char)isNoUserAtHome;
-(char)areUsersAtHome:(id)arg1 ;
-(char)areUsersNotAtHome:(id)arg1 ;
-(char)hasPresenceRegionForAllUsers;
-(NSDictionary *)userPresenceMap;
-(NSArray *)authorizedUsers;
-(char)isPresenceRegionKnownForUser:(id)arg1 ;
-(HMDDevice *)lastUpdateByDevice;
@end

