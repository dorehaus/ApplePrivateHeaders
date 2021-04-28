/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKUIViewController.h>
#import <libobjc.A.dylib/MKPlaceAttributionCellDelegate.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKPlaceCardPhotosControllerDelegateMKPlaceCardActionControllerDelegate;
@class MKPhotoBigAttributionView, NSArray, NSScrollView, NSView, MKPassthroughView, MKMapItem, NSLayoutConstraint, MKPlaceAttributionCell, NSButton, _MKPlaceViewController, NSString;

@interface MKPlacePhotosViewController : _MKUIViewController <MKPlaceAttributionCellDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	MKPhotoBigAttributionView* _primaryAttributionView;
	MKPhotoBigAttributionView* _secondaryAttributionView;
	NSArray* _photoViews;
	NSScrollView* _photosContainerScrollView;
	NSView* _photosContainer;
	NSView* _photosSmallAttributionsView;
	MKPassthroughView* _attributionClippingview;
	double _lastPhotoScrollOffset;
	char _photoScrollViewScrollingLeft;
	char _photoScrollViewScrollingRight;
	char _canUseFullscreenViewer;
	char _photoLoaded;
	char _loadAppImageCanceledOrFailed;
	char _isRTL;
	unsigned long long _photosCount;
	NSView* _externalView;
	MKMapItem* _mapItem;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSArray* _photos;
	unsigned long long _mode;
	unsigned long long _originalMode;
	unsigned long long _options;
	MKPlaceAttributionCell* _attributionCell;
	NSButton* _previousPageButton;
	NSButton* _nextPageButton;
	NSScrollView* _parentScrollView;
	unsigned long long _initialAppearanceSignpostID;
	char _isDisappearing;
	char _hoverActive;
	_MKPlaceViewController* _owner;
	id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> _photosControllerDelegate;

}

@property (nonatomic,readonly) char isFirstParty; 
@property (nonatomic,readonly) char isCompactMode; 
@property (nonatomic,readonly) char shouldShowAddPhotoButtons; 
@property (nonatomic,readonly) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate; 
@property (nonatomic,readonly) unsigned long long numberOfBigAttributionViews; 
@property (assign,nonatomic) char hoverActive;                                                                                                          //@synthesize hoverActive=_hoverActive - In the implementation block
@property (assign,nonatomic,__weak) _MKPlaceViewController * owner;                                                                                     //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> photosControllerDelegate;              //@synthesize photosControllerDelegate=_photosControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setOwner:(_MKPlaceViewController *)arg1 ;
-(_MKPlaceViewController *)owner;
-(void)viewDidLayout;
-(void)viewDidLoad;
-(void)viewWillAppear:(char)arg1 ;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)infoCardThemeChanged;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(char)_canShowWhileLocked;
-(void)viewWillDisappear:(char)arg1 ;
-(char)isSafariProcess;
-(char)isFirstParty;
-(char)shouldShowAddPhotoButtons;
-(id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate>)photosControllerDelegate;
-(unsigned long long)numberOfBigAttributionViews;
-(void)scrollBoundsDidChange:(id)arg1 ;
-(void)scrollDidEndScrolling:(id)arg1 ;
-(void)_photoSelected:(id)arg1 ;
-(void)_createImageViews;
-(void)viewDidAppear:(char)arg1 ;
-(void)_cancelLoadPhotos;
-(void)updateAttributionCell;
-(id)formattedAttributionString;
-(id)attributionString;
-(id)_firstPartyMorePhotosAttributionString;
-(void)addAttributionCell;
-(void)_updatePhotoBackgroundColor:(id)arg1 ;
-(void)layoutImages;
-(void)_applyCornerRadius;
-(CGSize)sizeForIndex:(unsigned long long)arg1 ;
-(CGSize)_photoActionSize;
-(CGSize)_photoSizeForIndex:(unsigned long long)arg1 ;
-(void)updateAttributionPositionWithOffset:(double)arg1 ;
-(void)_photoTappedAtIndex:(unsigned long long)arg1 ;
-(void)openURL;
-(void)didTapSecondaryAttributionViewWithPresentingViewController:(id)arg1 ;
-(void)didTapPrimaryAttributionViewWithPresentingViewController:(id)arg1 ;
-(void)_didTapAttributionViewWithPresentingViewController:(id)arg1 photoAttributionView:(id)arg2 ;
-(void)_loadPhotos;
-(char)isSiriProcess;
-(char)isParsecProcess;
-(char)isCompactMode;
-(id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(void)_logUGCAction:(int)arg1 ;
-(void)setPhotosControllerDelegate:(id<MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate>)arg1 ;
-(char)hoverActive;
-(void)setHoverActive:(char)arg1 ;
@end
