/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSUUID, NSString;

@interface HMDCameraSignificantEventFaceClassificationModel : HMBModel

@property (retain) NSUUID * personManagerUUID; 
@property (retain) NSUUID * personUUID; 
@property (retain) NSString * personName; 
@property (retain) NSUUID * unassociatedFaceCropUUID; 
+(id)hmbProperties;
+(id)hmbExternalRecordType;
-(id)createFaceClassification;
@end

