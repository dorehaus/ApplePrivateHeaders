/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/_NSQuickActionTouchBarItemDelegate.h>
#import <libobjc.A.dylib/NSCollectionViewDataSource.h>
#import <libobjc.A.dylib/NSCollectionViewDelegateFlowLayout.h>

@protocol _NSQuickActionTouchBarCollectionViewControllerDelegate;
@class NSOrderedSet, NSCollectionView, _NSQuickActionTouchBarItem, NSString;

@interface _NSQuickActionTouchBarCollectionViewController : NSViewController <_NSQuickActionTouchBarItemDelegate, NSCollectionViewDataSource, NSCollectionViewDelegateFlowLayout> {

	NSOrderedSet* _orderedDataSources;
	NSCollectionView* _collectionView;
	_NSQuickActionTouchBarItem* _prototypeItem;
	char _collectionViewIsVisible;
	id<_NSQuickActionTouchBarCollectionViewControllerDelegate> _delegate;

}

@property (__weak) id<_NSQuickActionTouchBarCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_NSQuickActionTouchBarCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_NSQuickActionTouchBarCollectionViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(void)invokeQuickActionForItem:(id)arg1 ;
-(void)updateOrderedDataSources:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end
