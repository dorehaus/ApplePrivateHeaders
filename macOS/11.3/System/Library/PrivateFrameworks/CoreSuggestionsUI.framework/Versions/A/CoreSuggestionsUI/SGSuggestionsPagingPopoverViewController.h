/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/Versions/A/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestionsUI/CoreSuggestionsUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSPageControllerDelegate.h>

@class NSViewController, SGSuggestionStore, NSView, NSButton, NSTextField, NSString, NSArray;

@interface SGSuggestionsPagingPopoverViewController : NSViewController <NSPageControllerDelegate> {

	NSViewController* _currentSuggestionViewController;
	SGSuggestionStore* _suggestionStore;
	NSView* _containerView;
	NSButton* _prevButton;
	NSButton* _nextButton;
	NSTextField* _pagingTitleView;
	long long _currentSuggestionIndex;

}

@property (assign,nonatomic) NSView * containerView;                           //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) NSButton * prevButton;                            //@synthesize prevButton=_prevButton - In the implementation block
@property (assign,nonatomic) NSButton * nextButton;                            //@synthesize nextButton=_nextButton - In the implementation block
@property (assign,nonatomic) NSTextField * pagingTitleView;                    //@synthesize pagingTitleView=_pagingTitleView - In the implementation block
@property (nonatomic,readonly) char hasPreviousSuggestion; 
@property (nonatomic,readonly) char hasNextSuggestion; 
@property (nonatomic,readonly) NSString * pagingTitle; 
@property (nonatomic,readonly) NSArray * suggestions; 
@property (assign,nonatomic) long long currentSuggestionIndex;                 //@synthesize currentSuggestionIndex=_currentSuggestionIndex - In the implementation block
@property (nonatomic,retain) SGSuggestionStore * suggestionStore;              //@synthesize suggestionStore=_suggestionStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingPagingUI;
+(id)keyPathsForValuesAffectingPagingTitle;
+(id)keyPathsForValuesAffectingHasNextSuggestion;
+(id)keyPathsForValuesAffectingHasPreviousSuggestion;
-(void)dealloc;
-(id)nibBundle;
-(NSView *)containerView;
-(void)setContainerView:(NSView *)arg1 ;
-(void)viewDidLoad;
-(NSArray *)suggestions;
-(NSButton *)nextButton;
-(void)setNextButton:(NSButton *)arg1 ;
-(void)setSuggestionStore:(SGSuggestionStore *)arg1 ;
-(void)listDidChangeNotification:(id)arg1 ;
-(id)viewControllerForItemAtIndex:(unsigned long long)arg1 ;
-(char)hasPreviousSuggestion;
-(char)hasNextSuggestion;
-(NSString *)pagingTitle;
-(void)nextSuggestion:(id)arg1 ;
-(void)prevSuggestion:(id)arg1 ;
-(void)_updateSuggestion;
-(SGSuggestionStore *)suggestionStore;
-(NSButton *)prevButton;
-(void)setPrevButton:(NSButton *)arg1 ;
-(NSTextField *)pagingTitleView;
-(void)setPagingTitleView:(NSTextField *)arg1 ;
-(long long)currentSuggestionIndex;
-(void)setCurrentSuggestionIndex:(long long)arg1 ;
@end

