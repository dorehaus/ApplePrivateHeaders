/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Shortcut/Shortcut-Structs.h>
#import <Shortcut/SCTGRL.h>

@protocol NSUserInterfaceItemSearchingNSUserInterfaceItemSearching_Private;
@interface SCTCustomSearchResultGRL : SCTGRL {

	id<NSUserInterfaceItemSearching><NSUserInterfaceItemSearching_Private> mSearchHandler;
	id mUserInterfaceItem;
	char mHasHideItem;
	char mHasIconForItem;
	char mHasLocalizedCategoryForItem;
	char mHasPerformActionForItem;
	char mHasShowItem;
	char mHasShowAllHelpTopicsForSearchString;
	char isShowAllHelpTopicsItem;

}

@property (assign) char isShowAllHelpTopicsItem; 
@property (readonly) id<NSUserInterfaceItemSearching> searchHandler; 
-(void)dealloc;
-(void)hide:(id)arg1 ;
-(void)perform;
-(void)show;
-(id)localizedCategory;
-(id)initWithItem:(id)arg1 searchHandler:(id)arg2 ;
-(void)setIsShowAllHelpTopicsItem:(char)arg1 ;
-(id)representativeIconForSelectedState:(char)arg1 ;
-(id)fullTitle;
-(CGRect)screenRectForResource;
-(id)titlePathToString:(id)arg1 ;
-(id<NSUserInterfaceItemSearching>)searchHandler;
-(char)isShowAllHelpTopicsItem;
@end

