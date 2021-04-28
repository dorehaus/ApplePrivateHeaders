/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKCropAnnotationRenderer : AKAnnotationRenderer
+(CGPathRef)cropHandle:(long long)arg1 forAnnotation:(id)arg2 withPageController:(id)arg3 ;
+(CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1 ;
+(CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1 ;
+(void)_concreteRenderAnnotation:(id)arg1 intoContext:(CGContextRef)arg2 forDisplay:(char)arg3 pageControllerOrNil:(id)arg4 ;
+(char)_concretePointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3 ;
+(char)_concretePointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2 ;
+(void)_pixelAlignedBaseRect:(CGRect*)arg1 interiorRect:(CGRect*)arg2 scaleFactor:(double*)arg3 forAnnotation:(id)arg4 withPageController:(id)arg5 ;
+(CGPathRef)_newClipMaskEOPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)_newRectanglePathForAnnotation:(id)arg1 withPageController:(id)arg2 outLineWidth:(double*)arg3 ;
+(CGPathRef)newLeftEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newRightEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newBottomEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newTopEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newTopLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newTopRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newBottomLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newBottomRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
@end

