/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DPStringRandomizer.h>

@interface _DPHCMSRandomizer : NSObject <_DPStringRandomizer> {

	double _epsilon;
	unsigned long long _m;
	unsigned long long _k;
	double _fragmentEpsilon;
	unsigned long long _fragmentM;
	unsigned long long _fragmentK;

}

@property (nonatomic,readonly) double epsilon;                            //@synthesize epsilon=_epsilon - In the implementation block
@property (m,nonatomic,readonly) unsigned long long m;                    //@synthesize m=_m - In the implementation block
@property (k,nonatomic,readonly) unsigned long long k;                    //@synthesize k=_k - In the implementation block
@property (nonatomic,readonly) double fragmentEpsilon;                    //@synthesize fragmentEpsilon=_fragmentEpsilon - In the implementation block
@property (nonatomic,readonly) unsigned long long fragmentM;              //@synthesize fragmentM=_fragmentM - In the implementation block
@property (nonatomic,readonly) unsigned long long fragmentK;              //@synthesize fragmentK=_fragmentK - In the implementation block
+(id)randomizerWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3 fragmentEpsilon:(double)arg4 fragmentBitCount:(unsigned long long)arg5 fragmentHashFunctionCount:(unsigned long long)arg6 ;
+(id)randomizerWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3 ;
-(id)description;
-(id)init;
-(double)epsilon;
-(unsigned long long)k;
-(id)randomizeStrings:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3 ;
-(id)randomizeBitValues:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)m;
-(id)initWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3 fragmentEpsilon:(double)arg4 fragmentBitCount:(unsigned long long)arg5 fragmentHashFunctionCount:(unsigned long long)arg6 ;
-(id)initWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3 ;
-(double)fragmentEpsilon;
-(unsigned long long)fragmentK;
-(unsigned long long)fragmentM;
-(id)hcmsSampleForString:(id)arg1 ;
-(id)hcmsSampleForFragment:(id)arg1 ;
@end

