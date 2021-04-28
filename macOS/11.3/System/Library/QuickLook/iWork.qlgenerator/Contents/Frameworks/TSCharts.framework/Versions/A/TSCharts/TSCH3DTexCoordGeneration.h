/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCH3DNormalDirectionMapper;

@interface TSCH3DTexCoordGeneration : NSObject {

	tmat4x4<float> _transform;
	TSCH3DNormalDirectionMapper* _normalDirectionMapper;

}

@property (nonatomic,retain) TSCH3DNormalDirectionMapper * normalDirectionMapper;              //@synthesize normalDirectionMapper=_normalDirectionMapper - In the implementation block
-(id)init;
-(id)initWithTransform:(const tmat4x4<float>*)arg1 ;
-(void)setNormalDirectionMapper:(TSCH3DNormalDirectionMapper *)arg1 ;
-(TSCH3DNormalDirectionMapper *)normalDirectionMapper;
@end
