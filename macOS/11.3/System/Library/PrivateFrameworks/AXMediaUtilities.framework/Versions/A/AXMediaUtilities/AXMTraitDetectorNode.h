/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXMTraitDetectorNode : AXMEvaluationNode <NSSecureCoding> {

	char _shouldEvaluateColorInformation;
	long long _sampleFrequency;
	double _colorDistanceTheshold;

}

@property (assign,nonatomic) long long sampleFrequency;                        //@synthesize sampleFrequency=_sampleFrequency - In the implementation block
@property (assign,nonatomic) char shouldEvaluateColorInformation;              //@synthesize shouldEvaluateColorInformation=_shouldEvaluateColorInformation - In the implementation block
@property (assign,nonatomic) double colorDistanceTheshold;                     //@synthesize colorDistanceTheshold=_colorDistanceTheshold - In the implementation block
+(char)supportsSecureCoding;
+(id)title;
+(char)isSupported;
-(void)nodeInitialize;
-(char)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(char)requiresVisionFramework;
-(char)shouldEvaluateColorInformation;
-(void)_evaluateColorInformation:(id)arg1 ;
-(id)_blurValueForVisionObservation:(id)arg1 ;
-(id)_brightnessValueForVisionObservation:(id)arg1 ;
-(long long)sampleFrequency;
-(void)setSampleFrequency:(long long)arg1 ;
-(void)setShouldEvaluateColorInformation:(char)arg1 ;
-(double)colorDistanceTheshold;
-(void)setColorDistanceTheshold:(double)arg1 ;
@end
