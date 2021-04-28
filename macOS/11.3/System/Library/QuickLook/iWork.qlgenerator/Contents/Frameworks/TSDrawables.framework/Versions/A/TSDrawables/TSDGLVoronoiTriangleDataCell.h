/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSDrawables/TSDrawables-Structs.h>
@interface TSDGLVoronoiTriangleDataCell : NSObject {

	unsigned long long _triangleCount;
	unsigned long long _vertexCount;
	SCD_Struct_TS13* _vertexData;
	SCD_Struct_TS14 _centerPoint;
	CGRect _bounds;

}

@property (nonatomic,readonly) unsigned long long triangleCount;              //@synthesize triangleCount=_triangleCount - In the implementation block
@property (nonatomic,readonly) unsigned long long vertexCount;                //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TS14* vertexData;                   //@synthesize vertexData=_vertexData - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TS14 centerPoint;                   //@synthesize centerPoint=_centerPoint - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                 //@synthesize bounds=_bounds - In the implementation block
-(void)dealloc;
-(unsigned long long)triangleCount;
-(CGRect)bounds;
-(unsigned long long)vertexCount;
-(SCD_Struct_TS14)centerPoint;
-(id)initWithTrianglePoints:(SCD_Struct_TS14*)arg1 ;
-(void)p_setupTriangleDataWithEdges:(vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double>>>*)arg1 ;
-(id)cellsBySplittingCellIntoTriangles;
-(id)initWithEdges:(vector<boost::polygon::segment_data<double>, std::__1::allocator<boost::polygon::segment_data<double>>>*)arg1 ;
-(SCD_Struct_TS14*)vertexData;
@end

