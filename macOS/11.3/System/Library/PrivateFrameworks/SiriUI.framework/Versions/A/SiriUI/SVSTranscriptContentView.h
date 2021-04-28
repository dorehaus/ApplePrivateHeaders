/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <AppKit/NSView.h>

@class SiriUIKeyline, SiriUITranscriptClumpView, NSView;

@interface SVSTranscriptContentView : NSView {

	SiriUIKeyline* _bottomKeyline;
	SiriUIKeyline* _topKeyline;
	char _bottomKeylineHidden;
	char _topKeylineHidden;
	SiriUITranscriptClumpView* _transcriptClumpView;
	NSView* _suggestionsView;
	double _topMargin;

}

@property (nonatomic,readonly) SiriUITranscriptClumpView * transcriptClumpView;              //@synthesize transcriptClumpView=_transcriptClumpView - In the implementation block
@property (nonatomic,retain) NSView * suggestionsView;                                       //@synthesize suggestionsView=_suggestionsView - In the implementation block
@property (assign,nonatomic) double topMargin;                                               //@synthesize topMargin=_topMargin - In the implementation block
@property (nonatomic,readonly) double bottomMargin; 
@property (assign,nonatomic) char bottomKeylineHidden;                                       //@synthesize bottomKeylineHidden=_bottomKeylineHidden - In the implementation block
@property (assign,nonatomic) char topKeylineHidden;                                          //@synthesize topKeylineHidden=_topKeylineHidden - In the implementation block
-(void)layout;
-(char)isFlipped;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)topMargin;
-(double)bottomMargin;
-(void)setTopMargin:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 transcriptClumpView:(id)arg2 ;
-(SiriUITranscriptClumpView *)transcriptClumpView;
-(NSView *)suggestionsView;
-(void)setSuggestionsView:(NSView *)arg1 ;
-(void)setBottomKeylineHidden:(char)arg1 ;
-(void)setTopKeylineHidden:(char)arg1 ;
-(char)bottomKeylineHidden;
-(char)topKeylineHidden;
@end

