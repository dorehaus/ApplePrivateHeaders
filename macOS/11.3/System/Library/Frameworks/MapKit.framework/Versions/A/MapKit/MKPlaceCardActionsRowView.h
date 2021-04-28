/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>
#import <libobjc.A.dylib/MKActionRowItemViewDelegate.h>

@protocol MKPlaceActionManagerProtocol, _MKPlaceViewControllerDelegate;
@class NSArray, NSLayoutGuide;

@interface MKPlaceCardActionsRowView : NSView <MKActionRowItemViewDelegate> {

	NSArray* _actionButtons;
	NSArray* _constraints;
	NSArray* _actionRowsArray;
	unsigned long long _maxButtonsPerRow;
	unsigned long long _style;
	NSLayoutGuide* _marginLayoutguide;
	NSArray* _items;
	id<MKPlaceActionManagerProtocol> _actionManager;
	id<_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;

}

@property (nonatomic,copy) NSArray * items;                                                                      //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceActionManagerProtocol> actionManager;                              //@synthesize actionManager=_actionManager - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;              //@synthesize placeViewControllerDelegate=_placeViewControllerDelegate - In the implementation block
-(id)initWithStyle:(unsigned long long)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)createConstraints;
-(void)infoCardThemeChanged;
-(id<_MKPlaceViewControllerDelegate>)placeViewControllerDelegate;
-(void)setActionManager:(id<MKPlaceActionManagerProtocol>)arg1 ;
-(void)setPlaceViewControllerDelegate:(id<_MKPlaceViewControllerDelegate>)arg1 ;
-(void)actionRowSelected:(id)arg1 ;
-(void)createActions;
-(id<MKPlaceActionManagerProtocol>)actionManager;
-(void)createActionViews;
-(unsigned long long)maxButtonsPerRow;
-(void)layoutButtons;
-(void)invalidateActionButtons;
@end

