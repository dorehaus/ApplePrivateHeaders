/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Versions/A/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Montreal/MontrealNNDescription.h>
#import <Montreal/MontrealNNDescriptionProtocol.h>

@class NSNumber, NSString;

@interface MontrealNNModelOptimizerParam : MontrealNNDescription <MontrealNNDescriptionProtocol> {

	float _learningRate;
	float _momentum;
	unsigned long long _optimizerType;
	NSNumber* _gradientClipMin;
	NSNumber* _gradientClipMax;

}

@property (readonly) unsigned long long optimizerType;              //@synthesize optimizerType=_optimizerType - In the implementation block
@property (readonly) float learningRate;                            //@synthesize learningRate=_learningRate - In the implementation block
@property (readonly) float momentum;                                //@synthesize momentum=_momentum - In the implementation block
@property (readonly) NSNumber * gradientClipMin;                    //@synthesize gradientClipMin=_gradientClipMin - In the implementation block
@property (readonly) NSNumber * gradientClipMax;                    //@synthesize gradientClipMax=_gradientClipMax - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDictionary:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(float)learningRate;
-(NSNumber *)gradientClipMin;
-(NSNumber *)gradientClipMax;
-(float)momentum;
-(id)initWithOptimizerType:(unsigned long long)arg1 learningRate:(float)arg2 momentum:(float)arg3 gradientClipMin:(id)arg4 gradientClipMax:(id)arg5 ;
-(unsigned long long)optimizerType;
@end

