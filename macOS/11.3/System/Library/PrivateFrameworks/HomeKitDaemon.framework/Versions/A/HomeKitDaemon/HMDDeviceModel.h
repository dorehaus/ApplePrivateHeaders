/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSUUID, NSArray, NSString, HMDHomeKitVersion, HMFProductInfo, HMDRPIdentity;

@interface HMDDeviceModel : HMDBackingStoreModelObject

@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSArray * handles; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) HMDHomeKitVersion * version; 
@property (nonatomic,copy) HMFProductInfo * productInfo; 
@property (nonatomic,copy) HMDRPIdentity * rpIdentity; 
@property (nonatomic,readonly) NSArray * deviceHandles; 
+(id)properties;
+(id)schemaHashRoot;
-(char)diff:(id)arg1 differingFields:(id*)arg2 ;
-(NSArray *)deviceHandles;
@end

