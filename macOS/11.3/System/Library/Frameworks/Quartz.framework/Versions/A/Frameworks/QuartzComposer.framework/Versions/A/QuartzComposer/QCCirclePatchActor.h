/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCPatchActor.h>

@interface QCCirclePatchActor : QCPatchActor
-(CGSize)sizeForNode:(id)arg1 ;
-(CGPoint)pointForPort:(id)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 ;
-(id)_portTextAttributesForNode:(id)arg1 ;
-(id)_portForPoint:(CGPoint)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 outBounds:(CGRect*)arg4 ;
-(void)_makeCGPathForNode:(id)arg1 bounds:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(char)pointInTitleRect:(CGPoint)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 ;
-(char)dragsOnPortForNode:(id)arg1 ;
-(void)_makeSelectionPathForNode:(id)arg1 border:(float)arg2 bounds:(CGRect)arg3 inContext:(CGContextRef)arg4 ;
-(void)_drawBackgroundGradientLayerForNode:(id)arg1 bounds:(CGRect)arg2 reflectionHeight:(double)arg3 inContext:(CGContextRef)arg4 ;
-(void)_drawHighLightForNode:(id)arg1 bounds:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(SCD_Struct_QC4*)nodeMD5List:(id)arg1 bounds:(CGRect)arg2 view:(id)arg3 zoom:(double)arg4 outCount:(unsigned long long*)arg5 ;
-(void)_drawTitleForNode:(id)arg1 bounds:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(void)_drawPortsForNode:(id)arg1 bounds:(CGRect)arg2 view:(id)arg3 inContext:(CGContextRef)arg4 ;
-(float)_actualScaleFactor:(id)arg1 ;
@end

