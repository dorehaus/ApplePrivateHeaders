/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginUIKit/LUI2ViewController.h>
#import <libobjc.A.dylib/LUIStripViewDelegate.h>
#import <libobjc.A.dylib/LUIStripViewDataSource.h>

@protocol LUI2UserListDataSource, LUI2UserListDelegate;
@class LUI2ScrollView, LUIStripView, NSButton, NSLayoutConstraint, NSImageView, NSString;

@interface LUI2UserListViewController : LUI2ViewController <LUIStripViewDelegate, LUIStripViewDataSource> {

	id<LUI2UserListDataSource> _dataSource;
	id<LUI2UserListDelegate> _delegate;
	char _delegateSupportsIndexOfUserMatchingSearchString;
	LUI2ScrollView* _scrollView;
	LUIStripView* _stripView;
	NSButton* _prevButton;
	NSButton* _nextButton;
	double _userWidth;
	NSLayoutConstraint* _widthConstraint;
	NSImageView* _leftShadow;
	NSImageView* _rightShadow;

}

@property (assign) char delegateSupportsIndexOfUserMatchingSearchString;              //@synthesize delegateSupportsIndexOfUserMatchingSearchString=_delegateSupportsIndexOfUserMatchingSearchString - In the implementation block
@property (assign) double userWidth;                                                  //@synthesize userWidth=_userWidth - In the implementation block
@property (assign) NSLayoutConstraint * widthConstraint;                              //@synthesize widthConstraint=_widthConstraint - In the implementation block
@property (retain) NSImageView * leftShadow;                                          //@synthesize leftShadow=_leftShadow - In the implementation block
@property (retain) NSImageView * rightShadow;                                         //@synthesize rightShadow=_rightShadow - In the implementation block
@property (readonly) LUI2ScrollView * scrollView;                                     //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) LUIStripView * stripView;                                        //@synthesize stripView=_stripView - In the implementation block
@property (readonly) NSButton * prevButton;                                           //@synthesize prevButton=_prevButton - In the implementation block
@property (readonly) NSButton * nextButton;                                           //@synthesize nextButton=_nextButton - In the implementation block
@property (assign) id<LUI2UserListDataSource> dataSource; 
@property (assign) id<LUI2UserListDelegate> delegate; 
@property (readonly) char isFocusedOnUser; 
@property (readonly) id focusedUser; 
@property (readonly) long long selectedUser; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewForPopover;
-(long long)numberOfItemsInStripView:(id)arg1 ;
-(id)stripView:(id)arg1 itemForColumn:(long long)arg2 ;
-(long long)stripView:(id)arg1 indexOfItemMatchingSearchString:(id)arg2 ;
-(double)_widthForMaxUsers:(long long)arg1 ;
-(void)_userPressed:(id)arg1 ;
-(void)_updatePrevNextButtons;
-(char)isFocusedOnUser;
-(char)_voiceOverEnabled;
-(void)_prevButtonPressed:(id)arg1 ;
-(void)_nextButtonPressed:(id)arg1 ;
-(void)_userSelected:(id)arg1 ;
-(long long)_maxUsersForMainScreen;
-(void)_stripViewPositionChanged:(id)arg1 ;
-(void)endFocusOnUser;
-(void)focusOnUserAtIndex:(long long)arg1 ;
-(id)focusedUser;
-(void)setUserLoggedInIndicatorAtIndex:(long long)arg1 hidden:(char)arg2 ;
-(void)setUserNameAtIndex:(long long)arg1 hidden:(char)arg2 ;
-(void)setUserPictureAtIndex:(long long)arg1 hidden:(char)arg2 ;
-(LUIStripView *)stripView;
-(char)delegateSupportsIndexOfUserMatchingSearchString;
-(void)setDelegateSupportsIndexOfUserMatchingSearchString:(char)arg1 ;
-(double)userWidth;
-(void)setUserWidth:(double)arg1 ;
-(void)dealloc;
-(id<LUI2UserListDelegate>)delegate;
-(void)setDelegate:(id<LUI2UserListDelegate>)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)viewDidLayout;
-(id<LUI2UserListDataSource>)dataSource;
-(void)reloadData;
-(void)setDataSource:(id<LUI2UserListDataSource>)arg1 ;
-(LUI2ScrollView *)scrollView;
-(void)viewWillLayout;
-(void)viewDidLoad;
-(void)viewDidAppear;
-(NSLayoutConstraint *)widthConstraint;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSButton *)nextButton;
-(NSButton *)prevButton;
-(NSImageView *)leftShadow;
-(NSImageView *)rightShadow;
-(void)setLeftShadow:(NSImageView *)arg1 ;
-(void)setRightShadow:(NSImageView *)arg1 ;
-(long long)selectedUser;
@end

