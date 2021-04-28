/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCH3DAbstractBarVertexResource.h>

@class TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarVertexResource : TSCH3DAbstractBarVertexResource {

	TSCH3DBarExtrusionGeometry* _geometry;

}
-(id)get;
-(id)geometry;
-(long long)numVertices;
-(long long)verticesOffset;
-(long long)capOffset;
-(long long)numCapVertices;
-(id)initWithGeometry:(id)arg1 ;
@end

