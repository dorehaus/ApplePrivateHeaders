/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Versions/A/Frameworks/MPSRayIntersector.framework/Versions/A/MPSRayIntersector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSRayIntersector/MPSPolygonAccelerationStructure.h>

@interface MPSQuadrilateralAccelerationStructure : MPSPolygonAccelerationStructure

@property (assign,nonatomic) unsigned long long quadrilateralCount; 
-(id)vertexBuffer;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithGroup:(id)arg1 ;
-(void)setPolygonType:(unsigned long long)arg1 ;
-(unsigned long long)quadrilateralCount;
-(void)setQuadrilateralCount:(unsigned long long)arg1 ;
@end

