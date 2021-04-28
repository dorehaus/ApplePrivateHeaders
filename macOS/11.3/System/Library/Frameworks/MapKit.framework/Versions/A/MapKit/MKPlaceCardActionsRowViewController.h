/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKUIViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol _MKPlaceViewControllerDelegate;
@class MKPlaceSectionItemView, MKPlaceCardActionsRowView, NSArray, MKPlaceActionManager, NSString;

@interface MKPlaceCardActionsRowViewController : _MKUIViewController <MKModuleViewControllerProtocol> {

	MKPlaceSectionItemView* _hairlineView;
	MKPlaceCardActionsRowView* _actionsRowView;
	NSArray* _items;
	MKPlaceActionManager* _actionManager;
	id<_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;

}

@property (nonatomic,copy) NSArray * items;                                                                      //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) MKPlaceActionManager * actionManager;                                        //@synthesize actionManager=_actionManager - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;              //@synthesize placeViewControllerDelegate=_placeViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLayout;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)loadView;
-(NSArray *)items;
-(void)viewDidLoad;
-(void)setItems:(NSArray *)arg1 ;
-(void)infoCardThemeChanged;
-(char)_canShowWhileLocked;
-(id<_MKPlaceViewControllerDelegate>)placeViewControllerDelegate;
-(void)setActionManager:(MKPlaceActionManager *)arg1 ;
-(void)setPlaceViewControllerDelegate:(id<_MKPlaceViewControllerDelegate>)arg1 ;
-(MKPlaceActionManager *)actionManager;
@end

