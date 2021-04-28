/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PreferencePanesSupport.framework/Versions/A/PreferencePanesSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencePanesSupport/PreferencePanesSupport-Structs.h>
#import <AppKit/NSTableCellView.h>

@class NSTextField, NSButton, NSImageView, NSLayoutConstraint;

@interface PPSpecifierTableCellView : NSTableCellView {

	char _selected;
	char _enabled;
	NSTextField* _subtitleTextField;
	NSButton* _badge;
	NSImageView* _badgeImageView;
	NSLayoutConstraint* _labelToBadgeImageConstraint;
	NSLayoutConstraint* _labelToBadgeConstraint;

}

@property (getter=isSelected) char selected; 
@property (getter=isEnabled) char enabled; 
@property (assign) NSTextField * subtitleTextField;                               //@synthesize subtitleTextField=_subtitleTextField - In the implementation block
@property (assign) NSButton * badge;                                              //@synthesize badge=_badge - In the implementation block
@property (assign) NSImageView * badgeImageView;                                  //@synthesize badgeImageView=_badgeImageView - In the implementation block
@property (retain) NSLayoutConstraint * labelToBadgeImageConstraint;              //@synthesize labelToBadgeImageConstraint=_labelToBadgeImageConstraint - In the implementation block
@property (retain) NSLayoutConstraint * labelToBadgeConstraint;                   //@synthesize labelToBadgeConstraint=_labelToBadgeConstraint - In the implementation block
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NSButton *)badge;
-(void)drawRect:(CGRect)arg1 ;
-(void)awakeFromNib;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setSelected:(char)arg1 ;
-(char)isSelected;
-(void)setBadge:(NSButton *)arg1 ;
-(void)setBadgeImage:(id)arg1 ;
-(void)setBadgeCount:(id)arg1 ;
-(NSImageView *)badgeImageView;
-(void)setBadgeImageView:(NSImageView *)arg1 ;
-(NSLayoutConstraint *)labelToBadgeConstraint;
-(NSLayoutConstraint *)labelToBadgeImageConstraint;
-(NSTextField *)subtitleTextField;
-(void)setSubtitleTextField:(NSTextField *)arg1 ;
-(void)setLabelToBadgeImageConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLabelToBadgeConstraint:(NSLayoutConstraint *)arg1 ;
@end
