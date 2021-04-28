/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/Versions/A/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface _CLVIOEstimation : NSObject <NSCopying, NSSecureCoding> {

	int _trackingState;
	double _originTimestamp;
	double _timestamp;
	NSData* _inertialState;
	NSData* _inertialCovariance;
	CGSize _cameraImageResolution;
	SCD_Struct_CL26 _inertialStateInfo;
	SCD_Struct_CL26 _inertialCovarianceInfo;
	SCD_Struct_CL24 _cameraIntrinsics;
	SCD_Struct_CL13 _cameraPose;

}

@property (assign,nonatomic) int trackingState;                                   //@synthesize trackingState=_trackingState - In the implementation block
@property (assign,nonatomic) double originTimestamp;                              //@synthesize originTimestamp=_originTimestamp - In the implementation block
@property (assign,nonatomic) double timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL26 inertialStateInfo;                   //@synthesize inertialStateInfo=_inertialStateInfo - In the implementation block
@property (nonatomic,copy) NSData * inertialState;                                //@synthesize inertialState=_inertialState - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL26 inertialCovarianceInfo;              //@synthesize inertialCovarianceInfo=_inertialCovarianceInfo - In the implementation block
@property (nonatomic,copy) NSData * inertialCovariance;                           //@synthesize inertialCovariance=_inertialCovariance - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL13 cameraPose;                          //@synthesize cameraPose=_cameraPose - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL24 cameraIntrinsics;                    //@synthesize cameraIntrinsics=_cameraIntrinsics - In the implementation block
@property (assign,nonatomic) CGSize cameraImageResolution;                        //@synthesize cameraImageResolution=_cameraImageResolution - In the implementation block
+(char)supportsSecureCoding;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(double)originTimestamp;
-(SCD_Struct_CL26)inertialStateInfo;
-(NSData *)inertialState;
-(SCD_Struct_CL26)inertialCovarianceInfo;
-(NSData *)inertialCovariance;
-(SCD_Struct_CL13)cameraPose;
-(SCD_Struct_CL24)cameraIntrinsics;
-(CGSize)cameraImageResolution;
-(void)setOriginTimestamp:(double)arg1 ;
-(void)setInertialStateInfo:(SCD_Struct_CL26)arg1 ;
-(void)setInertialState:(NSData *)arg1 ;
-(void)setInertialCovarianceInfo:(SCD_Struct_CL26)arg1 ;
-(void)setInertialCovariance:(NSData *)arg1 ;
-(void)setCameraPose:(SCD_Struct_CL13)arg1 ;
-(void)setCameraIntrinsics:(SCD_Struct_CL24)arg1 ;
-(void)setCameraImageResolution:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setTrackingState:(int)arg1 ;
-(int)trackingState;
@end

