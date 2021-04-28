/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVCaptionConversionAdjustment.h>

@interface AVCaptionConversionTimeRangeAdjustment : AVCaptionConversionAdjustment {

	void* _timeRangeAdjustmentInternal;

}

@property (readonly) SCD_Struct_CM3 startAdjustment; 
@property (readonly) SCD_Struct_CM3 durationAdjustment; 
+(id)captionConversionTimeRangeAdjustmentWithFigDictionary:(CFDictionaryRef)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithFigDictionary:(CFDictionaryRef)arg1 ;
-(id)adjustmentType;
-(SCD_Struct_CM3)startAdjustment;
-(SCD_Struct_CM3)durationAdjustment;
@end

