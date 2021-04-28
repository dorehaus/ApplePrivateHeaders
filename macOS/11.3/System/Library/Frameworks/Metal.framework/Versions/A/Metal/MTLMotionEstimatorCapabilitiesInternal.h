/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLMotionEstimatorCapabilities.h>

@interface MTLMotionEstimatorCapabilitiesInternal : MTLMotionEstimatorCapabilities {

	MTLMotionEstimatorCapabilitiesPrivate _private;

}
-(unsigned long long)precisionNumerator;
-(unsigned long long)precisionDenominator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)minTextureWidth;
-(unsigned long long)minTextureHeight;
-(unsigned long long)maxTextureWidth;
-(unsigned long long)maxTextureHeight;
-(MTLMotionEstimatorCapabilitiesPrivate*)descriptorPrivate;
-(unsigned long long)macroBlockWidth;
-(unsigned long long)macroBlockHeight;
-(unsigned long long)regionWidth;
-(unsigned long long)regionHeight;
@end
