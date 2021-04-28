/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@interface IKTemplateLayer : CALayer {

	CGRect* _templateRects;
	long long _templateRectsCount;

}
-(void)setTemplateRects:(CGRect*)arg1 count:(long long)arg2 ;
-(CGRect*)templateRects:(long long*)arg1 ;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(char)handleMouseDown:(CGPoint)arg1 ;
-(char)handleDoubleClick:(CGPoint)arg1 ;
@end
