/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class NSMutableArray, NSDictionary;

@interface IKFilterBrowserView : NSView {

	id _actionButton;
	id _addCollectionButton;
	id _browser;
	id _descriptionField;
	id _previewView;
	id _removeCollectionButton;
	id _searchField;
	id _OKButton;
	id _CancelButton;
	NSMutableArray* _foundFilters;
	NSDictionary* _options;
	char _showPreviewView;
	char _useNarrowLayout;
	id _modalDelegate;
	void** _priv[8];

}
-(void)setupViewWithOptions:(id)arg1 modal:(char)arg2 ;
-(void)browserSingleClick:(id)arg1 ;
-(void)browserDoubleClick:(id)arg1 ;
-(void)_filterAddedNotificationHandler:(id)arg1 ;
-(void)setPreviewState:(char)arg1 ;
-(id)_distillFilterList:(id)arg1 ;
-(void)_makeAllCollectionsNonEditable;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
-(void)browser:(id)arg1 willDisplayCell:(id)arg2 atRow:(int)arg3 column:(int)arg4 ;
-(int)browser:(id)arg1 numberOfRowsInColumn:(int)arg2 ;
-(char)browser:(id)arg1 writeRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 toPasteboard:(id)arg4 ;
-(char)browser:(id)arg1 canDragRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 withEvent:(id)arg4 ;
-(unsigned long long)browser:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long*)arg3 column:(long long*)arg4 dropOperation:(unsigned long long*)arg5 ;
-(char)browser:(id)arg1 acceptDrop:(id)arg2 atRow:(long long)arg3 column:(long long)arg4 dropOperation:(unsigned long long)arg5 ;
-(void)removeCollection:(id)arg1 ;
-(id)_categories;
-(void)addCollection:(id)arg1 ;
-(void)setDefaultImage:(id)arg1 ;
-(void)removeFromCollection:(id)arg1 ;
-(id)filterName;
-(void)finish:(id)arg1 ;
-(void)togglePreview:(id)arg1 ;
-(void)setModalDelegate:(id)arg1 ;
-(void)doSearch:(id)arg1 ;
-(void)addToCollection:(id)arg1 ;
@end

