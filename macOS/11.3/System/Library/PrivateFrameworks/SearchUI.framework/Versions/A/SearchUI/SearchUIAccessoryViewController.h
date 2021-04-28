/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/Versions/A/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIDetailedRowComponent.h>

@protocol SearchUIFeedbackDelegate, SearchUIAccessoryViewDelegate;
@class NSView, SearchUIDetailedRowModel, NSString;

@interface SearchUIAccessoryViewController : NSObject <SearchUIDetailedRowComponent> {

	SearchUIDetailedRowModel* rowModel;
	NSView* view;
	id<SearchUIFeedbackDelegate> feedbackDelegate;
	id<SearchUIAccessoryViewDelegate> _delegate;

}

@property (nonatomic,retain) NSView * view; 
@property (__weak) id<SearchUIAccessoryViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long type; 
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsRowModel:(id)arg1 ;
+(Class)accessoryViewClassForRowModel:(id)arg1 ;
-(id)init;
-(id<SearchUIAccessoryViewDelegate>)delegate;
-(void)setDelegate:(id<SearchUIAccessoryViewDelegate>)arg1 ;
-(unsigned long long)type;
-(NSView *)view;
-(void)setView:(NSView *)arg1 ;
-(void)hide;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(id)setupView;
-(void)updateWithRowModel:(id)arg1 ;
-(SearchUIDetailedRowModel *)rowModel;
-(id)controlInView:(id)arg1 ;
-(void)buttonPressed;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(void)setRowModel:(SearchUIDetailedRowModel *)arg1 ;
-(char)shouldVerticallyCenter;
-(void)updateWithContacts:(id)arg1 ;
-(void)didEngageAction:(unsigned long long)arg1 destination:(unsigned long long)arg2 ;
-(char)shouldTopAlignForAccessibilityContentSizes;
@end
