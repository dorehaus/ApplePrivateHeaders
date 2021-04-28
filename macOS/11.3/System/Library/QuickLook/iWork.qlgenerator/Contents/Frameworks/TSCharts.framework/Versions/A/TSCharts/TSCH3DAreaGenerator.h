/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@interface TSCH3DAreaGenerator : NSObject {

	vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float>>>* _top;
	vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float>>>* _bottom;
	tvec2<float> _YLimits;
	float _zeroValue;

}
+(id)generatorWithYLimits:(tvec2<float>)arg1 zeroValue:(float)arg2 ;
-(void)addRowWithXValues:(const vector<float, std::__1::allocator<float>>*)arg1 yValues:(const vector<float, std::__1::allocator<float>>*)arg2 ;
-(id)createGeometryWithXValues:(const vector<float, std::__1::allocator<float>>*)arg1 yValues:(const vector<float, std::__1::allocator<float>>*)arg2 ;
-(id)initWithYLimits:(tvec2<float>)arg1 zeroValue:(float)arg2 ;
-(float)clampedZero;
-(void)clipLine:(const vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float>>>*)arg1 into:(vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float>>>*)arg2 ;
@end
