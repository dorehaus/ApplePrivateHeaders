/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/CloudTabsStartPageViewItemDelegate.h>
#import <libobjc.A.dylib/StartPageCollectionSectionTitleViewDelegate.h>
#import <libobjc.A.dylib/StartPageCollectionSectionProvider.h>

@protocol StartPageCollectionSectionProviderDelegate;
@class NSArray, WBSCloudTabDevice, NSButton, NSString;

@interface StartPageCloudTabsSectionProvider : NSObject <CloudTabsStartPageViewItemDelegate, StartPageCollectionSectionTitleViewDelegate, StartPageCollectionSectionProvider> {

	NSArray* _cachedCloudTabDevices;
	WBSCloudTabDevice* _selectedCloudTabDevice;
	NSButton* _deviceButton;
	char _usesPrivateBrowsing;
	char _usesCompactAppearance;
	id<StartPageCollectionSectionProviderDelegate> _sectionProviderDelegate;
	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                                                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<StartPageCollectionSectionProviderDelegate> sectionProviderDelegate;              //@synthesize sectionProviderDelegate=_sectionProviderDelegate - In the implementation block
@property (assign,nonatomic) char usesPrivateBrowsing;                                                                   //@synthesize usesPrivateBrowsing=_usesPrivateBrowsing - In the implementation block
@property (nonatomic,readonly) char usesCompactAppearance;                                                               //@synthesize usesCompactAppearance=_usesCompactAppearance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * draggedTypes; 
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)reloadData;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingItem:(id)arg2 forRepresentedObjectAtIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)_sectionIndex;
-(char)usesPrivateBrowsing;
-(void)setUsesPrivateBrowsing:(char)arg1 ;
-(void)didPerformContextMenuShowingEventForItem:(id)arg1 withEvent:(id)arg2 ;
-(id)_browserWindowController;
-(id)_titleViewForSectionAtIndex:(long long)arg1 ;
-(TabPlacementHint)_tabPlacementHint;
-(void)startPageCollectionSectionTitleView:(id)arg1 collapseSection:(char)arg2 ;
-(long long)columnTypeForLayoutSectionAtIndex:(long long)arg1 withLayoutEnvironment:(id)arg2 ;
-(id)layoutSectionAtIndex:(long long)arg1 withLayoutEnvironment:(id)arg2 ;
-(void)setUpReusableViewsUsingRegister:(id)arg1 ;
-(id<StartPageCollectionSectionProviderDelegate>)sectionProviderDelegate;
-(void)setSectionProviderDelegate:(id<StartPageCollectionSectionProviderDelegate>)arg1 ;
-(void)highlightSectionAtIndex:(long long)arg1 ;
-(void)unhighlightSectionAtIndex:(long long)arg1 ;
-(id)accessibilityTitleForSection:(long long)arg1 ;
-(id)accessibilityIdentifierForSection:(long long)arg1 ;
-(char)usesCompactAppearance;
-(id)initWithCompactAppearance:(char)arg1 ;
-(void)_cloudTabsItemsDidChange:(id)arg1 ;
-(void)_updateTitleViewIfNeeded;
-(void)_showDeviceMenu:(id)arg1 ;
-(void)_changeSelectedTabItem:(id)arg1 ;
-(char)_canCollapseSection:(long long)arg1 ;
-(char)_isCollapsedSection:(long long)arg1 ;
-(id)_makeDeviceMenu;
-(id)_sectionTitleForSelectedTabDevice;
-(void)navigateToCloudTab:(id)arg1 ;
-(void)_updateDeviceButton;
-(id)_contextMenuForCloudTab:(id)arg1 ;
@end

