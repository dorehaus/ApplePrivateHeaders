/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/OutlineViewPlus.h>

@class SidebarSearchFieldView, NSSearchField;

@interface BookmarksOutlineView : OutlineViewPlus {

	SidebarSearchFieldView* _searchFieldView;

}

@property (__weak) id<BookmarksOutlineViewDelegate> delegate; 
@property (nonatomic,readonly) NSSearchField * searchField; 
@property (nonatomic,readonly) SidebarSearchFieldView * searchFieldView;              //@synthesize searchFieldView=_searchFieldView - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(CGRect)accessibilityFrame;
-(void)keyDown:(id)arg1 ;
-(NSSearchField *)searchField;
-(CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2 ;
-(char)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2 ;
-(double)_totalHeightOfTableView;
-(void)drawGridInClipRect:(CGRect)arg1 ;
-(void)_commonBookmarksOutlineViewInit;
-(void)_didRecogizeLongPress:(id)arg1 ;
-(SidebarSearchFieldView *)searchFieldView;
@end
