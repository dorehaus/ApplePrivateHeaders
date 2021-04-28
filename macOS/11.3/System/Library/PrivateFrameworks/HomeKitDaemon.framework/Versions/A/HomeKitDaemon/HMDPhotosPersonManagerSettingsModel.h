/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSUUID;

@interface HMDPhotosPersonManagerSettingsModel : HMBModel

@property (retain) NSNumber * sharingFaceClassificationsEnabled; 
@property (retain) NSUUID * zoneUUID; 
+(id)hmbProperties;
+(id)sentinelParentUUID;
-(id)createSettings;
-(id)initWithModelID:(id)arg1 settings:(id)arg2 ;
@end

