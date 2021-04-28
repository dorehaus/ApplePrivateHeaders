/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/Versions/A/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <AVFCapture/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMetadataTrackedFacesObjectInternal, NSDictionary;

@interface AVMetadataTrackedFacesObject : AVMetadataObject <NSCopying> {

	AVMetadataTrackedFacesObjectInternal* _trackedFacesObjectInternal;

}

@property (readonly) NSDictionary * payload; 
+(id)trackedFacesWithTime:(SCD_Struct_AV0)arg1 faceKitDictionary:(id)arg2 input:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)payload;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(char)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithTime:(SCD_Struct_AV0)arg1 faceKitDictionary:(id)arg2 input:(id)arg3 ;
@end

