/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCH3Dvec3DataBuffer;

@interface TSCH3DGeometry : NSObject {

	TSCH3Dvec3DataBuffer* _vertexBuffer;
	TSCH3Dvec3DataBuffer* _normalBuffer;
	int _numVertices;
	box<glm::detail::tvec3<float>> _geometryBounds;

}

@property (nonatomic,readonly) box<glm::detail::tvec3<float>> geometryBounds; 
+(id)geometry;
-(id)init;
-(id)vertexBuffer;
-(void)reset;
-(int)numVertices;
-(unsigned)capOffset;
-(id)normalBuffer;
-(unsigned)geometryOffset;
-(int)geometryCount;
-(unsigned)capCount;
-(vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float>>>*)vertexArray;
-(void)transformArrays:(const tmat4x4<float>*)arg1 ;
-(id)selectionKnobPositions;
-(vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float>>>*)normalArray;
-(tvec3<float>*)vertexArrayPointer;
-(tvec3<float>*)normalArrayPointer;
-(void)allocateArrays:(int)arg1 ;
-(id)elementsBoundsPositions;
-(box<glm::detail::tvec3<float>>)geometryBounds;
@end

