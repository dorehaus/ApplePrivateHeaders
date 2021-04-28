/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@interface TSCH3DFrustumSlice : NSObject {

	tvec3<float> _width;
	tvec3<float> _height;
	line<glm::detail::tvec3<float>> _origin;

}

@property (nonatomic,readonly) line<glm::detail::tvec3<float>> origin;              //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) tvec3<float> width;                                  //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) tvec3<float> height;                                 //@synthesize height=_height - In the implementation block
+(id)sliceWithOrigin:(line<glm::detail::tvec3<float>>)arg1 width:(tvec3<float>)arg2 height:(tvec3<float>)arg3 ;
-(tvec3<float>)width;
-(tvec3<float>)height;
-(line<glm::detail::tvec3<float>>)origin;
-(tvec3<float>)atNormalizedPosition:(tvec2<float>)arg1 ;
-(id)initWithOrigin:(line<glm::detail::tvec3<float>>)arg1 width:(tvec3<float>)arg2 height:(tvec3<float>)arg3 ;
@end

