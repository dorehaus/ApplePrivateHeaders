/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNImageBlurScoreRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _maximumIntermediateSideLength;
	unsigned long long _blurDeterminationMethod;

}

@property (assign,nonatomic) unsigned long long maximumIntermediateSideLength;              //@synthesize maximumIntermediateSideLength=_maximumIntermediateSideLength - In the implementation block
@property (assign,nonatomic) unsigned long long blurDeterminationMethod;                    //@synthesize blurDeterminationMethod=_blurDeterminationMethod - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)maximumIntermediateSideLength;
-(void)setMaximumIntermediateSideLength:(unsigned long long)arg1 ;
-(unsigned long long)blurDeterminationMethod;
-(void)setBlurDeterminationMethod:(unsigned long long)arg1 ;
@end

