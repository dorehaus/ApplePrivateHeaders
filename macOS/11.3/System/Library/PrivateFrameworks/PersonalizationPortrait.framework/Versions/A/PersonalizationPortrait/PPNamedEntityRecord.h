/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/Versions/A/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/PPRecord.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class PPSource, NSString, PPNamedEntity, PPNamedEntityMetadata, NSSet;

@interface PPNamedEntityRecord : _PASZonedObject <PPRecord, NSCopying, NSMutableCopying, NSSecureCoding, MLFeatureProvider> {

	PPNamedEntity* _entity;
	PPSource* _source;
	NSString* _extractionOsBuild;
	float _initialScore;
	float _decayRate;
	unsigned _extractionAssetVersion;
	unsigned char _algorithm;
	unsigned char _changeType;
	PPNamedEntityMetadata* _metadata;
	char _bucketizedSentimentScore;

}

@property (nonatomic,readonly) PPNamedEntity * entity;                        //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) PPSource * source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) unsigned long long algorithm; 
@property (nonatomic,readonly) double initialScore; 
@property (nonatomic,readonly) double decayRate; 
@property (nonatomic,readonly) NSString * extractionOsBuild;                  //@synthesize extractionOsBuild=_extractionOsBuild - In the implementation block
@property (nonatomic,readonly) unsigned extractionAssetVersion; 
@property (nonatomic,readonly) unsigned char changeType;                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) double sentimentScore; 
@property (nonatomic,readonly) PPNamedEntityMetadata * metadata; 
@property (nonatomic,readonly) NSSet * featureNames; 
+(char)supportsSecureCoding;
+(id)describeAlgorithm:(unsigned long long)arg1 ;
+(id)describeChangeType:(unsigned char)arg1 ;
+(id)algorithmForName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PPSource *)source;
-(unsigned char)changeType;
-(PPNamedEntity *)entity;
-(unsigned long long)algorithm;
-(double)decayRate;
-(double)sentimentScore;
-(PPNamedEntityMetadata *)metadata;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(double)initialScore;
-(NSString *)extractionOsBuild;
-(unsigned)extractionAssetVersion;
-(char)isEqualToNamedEntityRecord:(id)arg1 ;
@end
