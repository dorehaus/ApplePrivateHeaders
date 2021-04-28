/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/StartPageViewItem.h>

@protocol StartPageFullDescriptionViewItemDelegate;
@class FullDescriptionViewItemImageView, NSTextField, NSImage;

@interface StartPageFullDescriptionViewItem : StartPageViewItem {

	FullDescriptionViewItemImageView* _imageView;
	NSTextField* _titleLabel;
	NSTextField* _descriptionLabel;
	NSImage* _image;
	id<StartPageFullDescriptionViewItemDelegate> _delegate;
	id _target;
	SEL _action;

}

@property (nonatomic,retain) NSImage * image;                                                           //@synthesize image=_image - In the implementation block
@property (assign,nonatomic,__weak) id<StartPageFullDescriptionViewItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id target;                                                          //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                                                //@synthesize action=_action - In the implementation block
-(id<StartPageFullDescriptionViewItemDelegate>)delegate;
-(void)setDelegate:(id<StartPageFullDescriptionViewItemDelegate>)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)setImage:(NSImage *)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(NSImage *)image;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityLabel;
-(char)accessibilityPerformShowMenu;
-(void)rightMouseDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewDidLoad;
-(void)configureViewWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 ;
@end
