/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMeaningfulEventTrait.h>

@interface PGMeaningfulEventPartOfDayTrait : PGMeaningfulEventTrait {

	unsigned long long _value;
	unsigned long long _forbiddenValue;

}

@property (nonatomic,readonly) unsigned long long value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long forbiddenValue;              //@synthesize forbiddenValue=_forbiddenValue - In the implementation block
-(char)isActive;
-(unsigned long long)value;
-(id)initWithPartOfDay:(unsigned long long)arg1 ;
-(id)debugDescriptionWithMomentNode:(id)arg1 ;
-(id)initWithPartOfDay:(unsigned long long)arg1 forbiddenPartOfDay:(unsigned long long)arg2 ;
-(unsigned long long)forbiddenValue;
@end
