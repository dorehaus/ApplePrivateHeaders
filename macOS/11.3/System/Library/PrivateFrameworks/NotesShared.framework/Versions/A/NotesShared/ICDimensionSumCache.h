/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ICDimensionSumCache : NSObject {

	double _sum;
	double _estimateDimension;
	NSMutableDictionary* _dimensions;

}

@property (assign,nonatomic) double sum;                                      //@synthesize sum=_sum - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) double estimateDimension;                      //@synthesize estimateDimension=_estimateDimension - In the implementation block
-(id)init;
-(unsigned long long)count;
-(NSMutableDictionary *)dimensions;
-(double)sum;
-(void)setSum:(double)arg1 ;
-(double)dimensionForKey:(id)arg1 ;
-(id)initWithKeys:(id)arg1 andEstimateDimension:(double)arg2 ;
-(void)setDimension:(double)arg1 forKey:(id)arg2 ;
-(void)removeDimensionForKey:(id)arg1 ;
-(double)estimateDimension;
@end

