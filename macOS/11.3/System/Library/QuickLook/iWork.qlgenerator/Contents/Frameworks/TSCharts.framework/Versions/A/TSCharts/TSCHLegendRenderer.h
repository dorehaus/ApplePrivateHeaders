/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCHRenderer.h>

@interface TSCHLegendRenderer : TSCHRenderer {

	CGPoint _textEditingPixelAlignmentOffset;

}

@property (assign,nonatomic) CGPoint textEditingPixelAlignmentOffset;              //@synthesize textEditingPixelAlignmentOffset=_textEditingPixelAlignmentOffset - In the implementation block
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(char)canRenderSelectionPath:(id)arg1 ;
-(void)renderIntoContext:(CGContextRef)arg1 selection:(id)arg2 ;
-(void)addSelection:(id)arg1 toCGPath:(CGPathRef)arg2 useWrapWidth:(char)arg3 ;
-(void)p_drawLineAreaBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(void)p_drawPieBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(void)p_draw3DLineBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(void)p_drawDefaultBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(id)p_selectionPathForCell:(id)arg1 ;
-(void)p_drawBadgeForCell:(id)arg1 intoContext:(CGContextRef)arg2 ;
-(void)p_drawLabelForCell:(id)arg1 intoContext:(CGContextRef)arg2 rangePtr:(NSRange*)arg3 ;
-(void)p_drawDonutBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(CGPoint)textEditingPixelAlignmentOffset;
-(void)setTextEditingPixelAlignmentOffset:(CGPoint)arg1 ;
@end
