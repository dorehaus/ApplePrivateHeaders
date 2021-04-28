/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class IKComposer;

@interface IKImagePasteboardLayer : CALayer {

	IKComposer* _composer;

}
+(char)registerLayerWithView:(id)arg1 ;
+(id)addImagePasteLayer:(id)arg1 ;
+(id)imageDataFromPasteboard;
+(double)fadeDuration;
+(char)canPaste;
-(void)ikMouseDown:(id)arg1 ;
-(void)selectLayer:(id)arg1 extendSelection:(char)arg2 ;
-(void)mouseDownOutsideSelection:(id)arg1 ;
-(char)ikKeyDown:(id)arg1 ;
-(void)clearPastedImage;
-(void)addImageFromPasteboard:(id)arg1 ;
-(void)applyInContext:(CGContextRef)arg1 ;
-(void)willApply;
-(void)doRemovePastedImage:(id)arg1 ;
-(void)doAddPastedImage:(id)arg1 select:(char)arg2 ;
-(void)applyPaste;
-(void)setup:(id)arg1 ;
@end

