/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGFeatureAugmenter.h>

@class NSString;

@interface PGFeatureAugmenterMixUp : NSObject <PGFeatureAugmenter> {

	float _alpha;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) float alpha;                           //@synthesize alpha=_alpha - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)name;
+(id)instanceWithParameters:(id)arg1 error:(id*)arg2 ;
+(char)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3 ;
+(id)mixupOfFloatVector:(id)arg1 withFloatVector:(id)arg2 lambda:(float)arg3 ;
-(unsigned long long)count;
-(float)alpha;
-(id)_randomIndicesWithUpperBound:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(id)floatVectorWithFloatVector:(id)arg1 error:(id*)arg2 ;
-(id)floatVectorsWithFloatVectors:(id)arg1 error:(id*)arg2 ;
-(id)initWithCount:(unsigned long long)arg1 alpha:(float)arg2 error:(id*)arg3 ;
@end
