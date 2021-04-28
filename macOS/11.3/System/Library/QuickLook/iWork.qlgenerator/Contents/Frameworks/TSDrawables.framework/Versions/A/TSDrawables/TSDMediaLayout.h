/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDStyledLayout.h>
#import <TSDrawables/TSDMediaSizeResetting.h>

@class TSDMutableStroke, TSDMediaInfo;

@interface TSDMediaLayout : TSDStyledLayout <TSDMediaSizeResetting> {

	CGRect _cachedAlignmentFrame;
	struct {
		unsigned alignmentFrame : 1;
	}  _mediaInvalidFlags;
	TSDMutableStroke* _dynamicStroke;
	char _shouldRenderFrameStroke;
	CGRect _boundsForStandardKnobs;

}

@property (nonatomic,readonly) TSDMediaInfo * mediaInfo; 
@property (nonatomic,readonly) CGRect alignmentFrameInRoot; 
-(id)initWithInfo:(id)arg1 ;
-(id)stroke;
-(void)setGeometry:(id)arg1 ;
-(TSDMediaInfo *)mediaInfo;
-(void)processChangedProperty:(int)arg1 ;
-(CGRect)boundsForStandardKnobs;
-(char)supportsRotation;
-(CGRect)alignmentFrame;
-(char)isStrokeBeingManipulated;
-(CGRect)alignmentFrameInRoot;
-(void)invalidateAlignmentFrame;
-(char)shouldRenderFrameStroke;
-(void)setShouldRenderFrameStroke:(char)arg1 ;
-(void)setBoundsForStandardKnobs:(CGRect)arg1 ;
-(CGRect)computeAlignmentFrameInRoot:(char)arg1 ;
@end

