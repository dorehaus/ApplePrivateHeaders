/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationCenter/_NCFlippedView.h>

@class NCVerticalListController, NSLayoutConstraint, NSArray, NSView;

@interface _NCVerticalListContainer : _NCFlippedView {

	NCVerticalListController* _owner;
	NSLayoutConstraint* _contentBottomConstraint;
	NSArray* _sideConstraints;
	NSView* _view;

}

@property (assign,nonatomic,__weak) NCVerticalListController * owner;                   //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentBottomConstraint;              //@synthesize contentBottomConstraint=_contentBottomConstraint - In the implementation block
@property (nonatomic,retain) NSArray * sideConstraints;                                 //@synthesize sideConstraints=_sideConstraints - In the implementation block
@property (nonatomic,retain) NSView * view;                                             //@synthesize view=_view - In the implementation block
-(void)setOwner:(NCVerticalListController *)arg1 ;
-(NCVerticalListController *)owner;
-(NSView *)view;
-(void)setView:(NSView *)arg1 ;
-(id)makeBackingLayer;
-(void)willRemoveSubview:(id)arg1 ;
-(NSLayoutConstraint *)contentBottomConstraint;
-(void)setSideConstraints:(NSArray *)arg1 ;
-(void)setContentBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSArray *)sideConstraints;
@end

