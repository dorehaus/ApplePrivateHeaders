/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@class QCKeyFrameEditor, NSButton, NSScrollView, QCTimeLineView;

@interface QCTimeLineEditorView : NSView {

	QCKeyFrameEditor* keyFrameEditor;
	NSButton* createNewTimeLine;
	NSButton* removeSelectedTimeLine;
	NSButton* curveHullsButton;
	NSButton* legendVisibleButton;
	NSButton* controlPointsButton;
	NSButton* fitSelectedButton;
	NSButton* fitAllButton;
	NSScrollView* _scrollView;
	QCTimeLineView* _timeLineView;

}
-(void)dealloc;
-(char)isOpaque;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)setPatch:(id)arg1 ;
-(void)updateUI:(id)arg1 ;
-(void)createNewTimeLine:(id)arg1 ;
-(void)removeSelectedTimeLine:(id)arg1 ;
-(void)toggleCurveHulls:(id)arg1 ;
-(void)toggleLegendVisible:(id)arg1 ;
-(void)tlZoomToFitAll:(id)arg1 ;
-(void)tlZoomToFitSelection:(id)arg1 ;
-(void)tlZoomIn:(id)arg1 ;
-(void)tlZoomOut:(id)arg1 ;
@end
