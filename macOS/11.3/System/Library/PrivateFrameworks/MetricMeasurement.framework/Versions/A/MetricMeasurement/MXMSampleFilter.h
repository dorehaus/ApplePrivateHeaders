/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/Versions/A/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSMutableDictionary;

@interface MXMSampleFilter : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _tagFilters;
	NSMutableDictionary* _attributetFilters;

}

@property (nonatomic,retain) NSSet * tagFilters;                                   //@synthesize tagFilters=_tagFilters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributetFilters;              //@synthesize attributetFilters=_attributetFilters - In the implementation block
@property (nonatomic,readonly) char finite; 
@property (getter=finite,nonatomic,readonly) char isFinite; 
+(char)supportsSecureCoding;
+(id)filterWithAttributeFilter:(id)arg1 tagFilter:(id)arg2 ;
+(id)filterWithTagFilter:(id)arg1 ;
+(id)filterWithTagFilters:(id)arg1 ;
+(id)filterWithAttributeFilter:(id)arg1 ;
+(id)filterWithAttributeFilters:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributeFilterWithName:(id)arg1 ;
-(char)matchesSamplesWithTag:(id)arg1 ;
-(char)finite;
-(id)initWithAttributeFilters:(id)arg1 tagFilters:(id)arg2 ;
-(id)initWithTagFilter:(id)arg1 ;
-(id)initWithTagFilters:(id)arg1 ;
-(id)initWithAttributeFilter:(id)arg1 ;
-(id)initWithAttributeFilters:(id)arg1 ;
-(id)initWithAttributeFilter:(id)arg1 tagFilter:(id)arg2 ;
-(char)matchesSamplesWithAttributes:(id)arg1 ;
-(char)matchesSamplesWithAttribute:(id)arg1 ;
-(NSSet *)tagFilters;
-(NSMutableDictionary *)attributetFilters;
-(char)matchesSample:(id)arg1 ;
-(char)matchesSampleSet:(id)arg1 ;
-(void)setTagFilters:(NSSet *)arg1 ;
-(void)setAttributetFilters:(NSMutableDictionary *)arg1 ;
@end

