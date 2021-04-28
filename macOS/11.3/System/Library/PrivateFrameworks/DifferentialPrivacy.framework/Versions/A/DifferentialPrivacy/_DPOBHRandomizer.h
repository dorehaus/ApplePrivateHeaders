/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DPStringRandomizer.h>

@class _DPBiasedCoin, _DPRandomBitPositionGenerator;

@interface _DPOBHRandomizer : NSObject <_DPStringRandomizer> {

	unsigned long long _m;
	double _epsilon;
	_DPBiasedCoin* _epsilonCoin;
	_DPRandomBitPositionGenerator* _bitPositionGenerator;
	double _cEpsilon;

}

@property (m,nonatomic,readonly) unsigned long long m;                                            //@synthesize m=_m - In the implementation block
@property (nonatomic,readonly) double epsilon;                                                    //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) _DPBiasedCoin * epsilonCoin;                                       //@synthesize epsilonCoin=_epsilonCoin - In the implementation block
@property (nonatomic,readonly) _DPRandomBitPositionGenerator * bitPositionGenerator;              //@synthesize bitPositionGenerator=_bitPositionGenerator - In the implementation block
@property (nonatomic,readonly) double cEpsilon;                                                   //@synthesize cEpsilon=_cEpsilon - In the implementation block
+(id)obhRandomizerWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(id)description;
-(id)init;
-(double)epsilon;
-(id)randomizeStrings:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)randomizeBitValues:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDimensionality:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(char)getBitValueAtIndex:(unsigned long long)arg1 forString:(id)arg2 ;
-(id)randomizedBitForString:(id)arg1 ;
-(unsigned long long)m;
-(_DPBiasedCoin *)epsilonCoin;
-(_DPRandomBitPositionGenerator *)bitPositionGenerator;
-(double)cEpsilon;
@end

