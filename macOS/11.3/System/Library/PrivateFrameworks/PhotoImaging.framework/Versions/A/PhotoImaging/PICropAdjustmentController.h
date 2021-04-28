/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAdjustmentController.h>

@interface PICropAdjustmentController : PIAdjustmentController

@property (assign,nonatomic) CGRect cropRect; 
@property (assign,nonatomic) long long constraintWidth; 
@property (assign,nonatomic) long long constraintHeight; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) double angleRadians; 
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) double pitchRadians; 
@property (assign,nonatomic) double yaw; 
@property (assign,nonatomic) double yawRadians; 
@property (assign,nonatomic) char autoCropped; 
@property (assign,getter=isSmart,nonatomic) char smart; 
@property (assign,getter=isOriginalCrop,nonatomic) char originalCrop; 
+(id)originalCropKey;
+(id)smartKey;
+(id)heightKey;
+(id)widthKey;
+(id)yOriginKey;
+(id)xOriginKey;
+(id)yawKey;
+(id)pitchKey;
+(id)angleKey;
+(id)constraintHeightKey;
+(id)constraintWidthKey;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(double)angle;
-(void)setAngle:(double)arg1 ;
-(void)setYaw:(double)arg1 ;
-(double)yaw;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(id)initWithAdjustment:(id)arg1 ;
-(void)setOriginalCrop:(char)arg1 ;
-(void)setConstraintHeight:(long long)arg1 ;
-(void)setConstraintWidth:(long long)arg1 ;
-(char)isSmart;
-(void)setSmart:(char)arg1 ;
-(double)pitchRadians;
-(double)yawRadians;
-(void)setPitchRadians:(double)arg1 ;
-(void)setYawRadians:(double)arg1 ;
-(char)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
-(id)visualInputKeys;
-(char)isGeometryIdentityForImageSize:(CGSize)arg1 ;
-(char)isCropConstrained;
-(char)isCropIdentityForImageSize:(CGSize)arg1 ;
-(long long)constraintWidth;
-(long long)constraintHeight;
-(double)angleRadians;
-(char)autoCropped;
-(char)isOriginalCrop;
-(void)setAngleRadians:(double)arg1 ;
-(void)setAutoCropped:(char)arg1 ;
@end

