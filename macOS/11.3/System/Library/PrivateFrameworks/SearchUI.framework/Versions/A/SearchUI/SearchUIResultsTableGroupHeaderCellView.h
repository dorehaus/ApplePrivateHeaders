/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKTableCellView.h>

@class NSView, NSTextField, NSTrackingArea, NSTimer;

@interface SearchUIResultsTableGroupHeaderCellView : TLKTableCellView {

	NSView* _separatorView;
	NSTextField* _rolloverField;
	NSTrackingArea* _trackingArea;
	NSTimer* _trackingTimer;

}

@property (retain) NSView * separatorView;                     //@synthesize separatorView=_separatorView - In the implementation block
@property (retain) NSTextField * rolloverField;                //@synthesize rolloverField=_rolloverField - In the implementation block
@property (retain) NSTrackingArea * trackingArea;              //@synthesize trackingArea=_trackingArea - In the implementation block
@property (retain) NSTimer * trackingTimer;                    //@synthesize trackingTimer=_trackingTimer - In the implementation block
-(void)prepareForReuse;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(NSTrackingArea *)trackingArea;
-(void)updateTrackingAreas;
-(NSView *)separatorView;
-(void)setTrackingArea:(NSTrackingArea *)arg1 ;
-(void)setSeparatorView:(NSView *)arg1 ;
-(char)mouseInView;
-(void)handleMouseEnterStatus;
-(void)clearTimerAndHide;
-(NSTextField *)rolloverField;
-(void)toggleShowAll:(id)arg1 ;
-(void)setRolloverField:(NSTextField *)arg1 ;
-(NSTimer *)trackingTimer;
-(void)setTrackingTimer:(NSTimer *)arg1 ;
@end

