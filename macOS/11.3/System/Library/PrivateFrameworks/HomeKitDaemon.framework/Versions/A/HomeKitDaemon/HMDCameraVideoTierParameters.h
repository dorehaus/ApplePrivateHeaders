/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSDictionary, NSArray, HMDCameraStreamSessionID, HMDCameraVideoTier, NSString;

@interface HMDCameraVideoTierParameters : HMFObject <NSSecureCoding, HMFLogging> {

	NSDictionary* _videoTierCombinations;
	NSArray* _tierOrder;
	HMDCameraStreamSessionID* _sessionID;
	HMDCameraVideoTier* _firstPickedTier;
	HMDCameraVideoTier* _currentPickedTier;

}

@property (nonatomic,retain) HMDCameraVideoTier * firstPickedTier;                //@synthesize firstPickedTier=_firstPickedTier - In the implementation block
@property (nonatomic,retain) NSArray * tierOrder;                                 //@synthesize tierOrder=_tierOrder - In the implementation block
@property (nonatomic,readonly) NSDictionary * videoTierCombinations;              //@synthesize videoTierCombinations=_videoTierCombinations - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSessionID * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) HMDCameraVideoTier * currentPickedTier;              //@synthesize currentPickedTier=_currentPickedTier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)logCategory;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDCameraStreamSessionID *)sessionID;
-(id)logIdentifier;
-(void)updateTierParameters:(id)arg1 firstPickedParameter:(id)arg2 ;
-(char)pickHigherTier;
-(char)pickLowerTier;
-(HMDCameraVideoTier *)currentPickedTier;
-(NSDictionary *)videoTierCombinations;
-(void)updateTierOrder:(id)arg1 ;
-(void)updateFirstPickedTier:(id)arg1 ;
-(void)setCurrentPickedTier:(HMDCameraVideoTier *)arg1 ;
-(void)_generateAllVideoTiers:(id)arg1 ;
-(NSArray *)tierOrder;
-(void)setTierOrder:(NSArray *)arg1 ;
-(void)setFirstPickedTier:(HMDCameraVideoTier *)arg1 ;
-(id)initWithSessionID:(id)arg1 streamingCapabilities:(id)arg2 ;
-(HMDCameraVideoTier *)firstPickedTier;
@end

