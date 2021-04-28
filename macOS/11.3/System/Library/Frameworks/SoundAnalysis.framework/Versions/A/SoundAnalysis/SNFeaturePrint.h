/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>

@class MLMultiArray, NSString;

@interface SNFeaturePrint : NSObject <SNTimeRangeProvidingWritable, SNTimeRangeProviding> {

	long long _featurePrintType;
	MLMultiArray* _featureVector;
	SCD_Struct_SN4 _timeRange;

}

@property (nonatomic,readonly) long long featurePrintType;                //@synthesize featurePrintType=_featurePrintType - In the implementation block
@property (nonatomic,readonly) MLMultiArray * featureVector;              //@synthesize featureVector=_featureVector - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN4 timeRange;                    //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(long long)featurePrintType;
-(id)initWithFeaturePrintType:(long long)arg1 featureVector:(id)arg2 ;
-(MLMultiArray *)featureVector;
-(char)isEqualToFeaturePrint:(id)arg1 ;
@end

