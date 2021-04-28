/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKInkRendererHelper : NSObject
+(double)maxRenderingSize;
+(id)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 scale:(double)arg3 ;
+(id)_sharedOfflineInkRendererSmallSize;
+(id)_createFullSizeRenderer;
+(double)_calculateMaxRenderingSize;
+(void)purgeSharedRenderer;
@end
