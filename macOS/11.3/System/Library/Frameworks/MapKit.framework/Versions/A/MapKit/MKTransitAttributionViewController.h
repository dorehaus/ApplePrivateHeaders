/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKClickableTableViewController.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol GEOTransitLineItem, MKTransitAttributionViewControllerDelegate;
@class MKMapItem, NSString;

@interface MKTransitAttributionViewController : _MKClickableTableViewController <GEOResourceManifestTileGroupObserver, MKModuleViewControllerProtocol> {

	char _isAttributionURLAvailable;
	MKMapItem* _mapItem;
	id<GEOTransitLineItem> _lineItem;
	id<MKTransitAttributionViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) id<GEOTransitLineItem> lineItem;                                             //@synthesize lineItem=_lineItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitAttributionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<MKTransitAttributionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKTransitAttributionViewControllerDelegate>)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)_commonInit;
-(void)viewDidLoad;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(id)_attribution;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(char)_canShowWhileLocked;
-(char)requiresPreferredContentSizeInStackingView;
-(char)tableView:(id)arg1 shouldClickRow:(long long)arg2 ;
-(void)tableView:(id)arg1 mouseUpOnRow:(long long)arg2 ;
-(id)_attributionCell;
-(void)_transitInfoUpdated;
-(void)setLineItem:(id<GEOTransitLineItem>)arg1 ;
-(id<GEOTransitLineItem>)lineItem;
-(char)_hasAttribution;
-(void)_presentTransitAttributionDetails;
-(id)initWithTransitLineItem:(id)arg1 ;
@end

