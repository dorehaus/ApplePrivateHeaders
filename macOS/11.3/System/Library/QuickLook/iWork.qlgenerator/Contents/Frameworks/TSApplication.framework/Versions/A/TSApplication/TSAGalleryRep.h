/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSApplication-Structs.h>
#import <TSDrawables/TSDRep.h>
#import <TSApplication/TSWPContainerTextEditingRep.h>
#import <TSApplication/TSDImageDrawingDataSource.h>
#import <TSApplication/TSKChangeSourceObserver.h>

@class TSWPRep, TSDImageDrawingHelper, TSAGalleryLayout, NSString;

@interface TSAGalleryRep : TSDRep <TSWPContainerTextEditingRep, TSDImageDrawingDataSource, TSKChangeSourceObserver> {

	TSDImageDrawingHelper* _drawingHelper;
	TSWPRep* _captionRep;

}

@property (nonatomic,readonly) TSAGalleryLayout * galleryLayout; 
@property (nonatomic,readonly) TSWPRep * captionRep;                                   //@synthesize captionRep=_captionRep - In the implementation block
@property (nonatomic,readonly) TSWPRep * containedRep; 
@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3 ;
+(CGRect)p_textureRectForLayout:(id)arg1 viewScale:(double)arg2 isMagicMove:(char)arg3 ;
+(CGAffineTransform)p_textureRenderTransformRelativeToTextureRect:(CGRect)arg1 forLayout:(id)arg2 viewScale:(double)arg3 isMagicMove:(char)arg4 ;
+(CGAffineTransform)p_textureLayoutTransformInRootForLayout:(id)arg1 isMagicMove:(char)arg2 ;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)willBeRemoved;
-(NSObject*<TSDContainerInfo>)containerInfo;
-(id)childReps;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)updateChildrenFromLayout;
-(TSWPRep *)containedRep;
-(id)textureForDescription:(id)arg1 ;
-(void)addChildTexturesToTextureSet:(id)arg1 forDescription:(id)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)updateHitTestingForTextureStage:(unsigned long long)arg1 isAtEndOfBuild:(char)arg2 ;
-(void)invalidateCurrentItem;
-(TSAGalleryLayout *)galleryLayout;
-(id)galleryInfo;
-(char)p_isEmpty;
-(void)p_drawImageInContext:(CGContextRef)arg1 forLayer:(char)arg2 ;
-(CGRect)p_imageContainerRectForContext:(CGContextRef)arg1 ;
-(id)p_emptyPlaceholderBackgroundColor;
-(id)p_emptyPlaceholderImage;
-(id)layoutsForChildReps;
-(char)p_shouldIncludeItemCaptionTextForStage:(unsigned long long)arg1 isIncoming:(char)arg2 ;
-(id)p_newTextureForStage:(unsigned long long)arg1 isIncoming:(char)arg2 includeImage:(char)arg3 includeCaption:(char)arg4 size:(CGSize)arg5 offset:(CGPoint)arg6 renderTransform:(CGAffineTransform)arg7 ;
-(id)p_galleryItemForTextureStage:(unsigned long long)arg1 isIncoming:(char)arg2 ;
-(void)p_renderTextureInContext:(CGContextRef)arg1 includeImage:(char)arg2 includeCaption:(char)arg3 renderTransform:(CGAffineTransform)arg4 ;
-(id)imageDrawingHelperImageData:(id)arg1 ;
-(id)imageDrawingHelperThumbnailImageData:(id)arg1 ;
-(CGRect)imageDrawingHelperImageRect:(id)arg1 ;
-(CGAffineTransform)imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)arg1 ;
-(char)imageDrawingHelperImageHasAlpha:(id)arg1 ;
-(id)imageDrawingHelperAdjustedImageData:(id)arg1 ;
-(id)imageDrawingHelperThumbnailAdjustedImageData:(id)arg1 ;
-(void)p_announceNewItemForAccessibilityIfNeeded;
-(TSWPRep *)captionRep;
@end
