/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/Versions/A/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzerCreating.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class NSString;

@interface SNCreateFeaturePrintRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest> {

	float _overlapFactor;
	long long _featurePrintType;

}

@property (assign,nonatomic) long long featurePrintType;              //@synthesize featurePrintType=_featurePrintType - In the implementation block
@property (assign,nonatomic) float overlapFactor;                     //@synthesize overlapFactor=_overlapFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isEqualToCreateFeaturePrintRequest:(id)arg1 ;
-(long long)featurePrintType;
-(void)setFeaturePrintType:(long long)arg1 ;
-(float)overlapFactor;
-(void)setOverlapFactor:(float)arg1 ;
-(id)createAnalyzerWithError:(id*)arg1 ;
@end

