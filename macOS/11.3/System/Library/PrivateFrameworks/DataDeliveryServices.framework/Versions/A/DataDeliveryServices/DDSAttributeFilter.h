/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/Versions/A/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface DDSAttributeFilter : NSObject <NSSecureCoding> {

	NSMutableDictionary* _filters;

}

@property (nonatomic,retain) NSMutableDictionary * filters;              //@synthesize filters=_filters - In the implementation block
+(char)supportsSecureCoding;
+(unsigned long long)hashObject:(id)arg1 ;
+(unsigned long long)hashDictionary:(id)arg1 ;
+(unsigned long long)hashSet:(id)arg1 ;
+(id)attributeFilter;
+(id)attributeFilterWithDictionary:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setFilters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)filters;
-(id)_setForKey:(id)arg1 ;
-(void)addAllowedValue:(id)arg1 forKey:(id)arg2 ;
-(void)addAllowedValues:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateAllowedValuesAndKeys:(/*^block*/id)arg1 ;
-(id)allowedValuesForKey:(id)arg1 ;
-(char)isEqualToQueryFilter:(id)arg1 ;
-(void)addEntriesFromFilter:(id)arg1 ;
-(id)entriesMatchingAttributes:(id)arg1 ;
-(char)doesContainAttributes:(id)arg1 ;
-(void)removeAllowedValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllowedValues:(id)arg1 forKey:(id)arg2 ;
@end

