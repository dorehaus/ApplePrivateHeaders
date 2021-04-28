/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/EKUILabeledGadget.h>
#import <libobjc.A.dylib/NSSharingServicePickerDelegate.h>

@class NSView, CalUILabel, NSButton, NSSharingServicePicker, NSString;

@interface EKUISubscriptionURLGadget : EKUILabeledGadget <NSSharingServicePickerDelegate> {

	NSView* _containerView;
	CalUILabel* _urlField;
	NSButton* _shareButton;
	NSSharingServicePicker* _sharingServicePicker;

}

@property (retain) NSView * containerView;                                     //@synthesize containerView=_containerView - In the implementation block
@property (retain) CalUILabel * urlField;                                      //@synthesize urlField=_urlField - In the implementation block
@property (retain) NSButton * shareButton;                                     //@synthesize shareButton=_shareButton - In the implementation block
@property (retain) NSSharingServicePicker * sharingServicePicker;              //@synthesize sharingServicePicker=_sharingServicePicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSView *)containerView;
-(void)setContainerView:(NSView *)arg1 ;
-(id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3 ;
-(id)control;
-(id)labelString;
-(id)initWithViewController:(id)arg1 ;
-(NSButton *)shareButton;
-(void)setShareButton:(NSButton *)arg1 ;
-(void)setSharingServicePicker:(NSSharingServicePicker *)arg1 ;
-(NSSharingServicePicker *)sharingServicePicker;
-(char)shouldDisplay;
-(void)updateWithChanges:(id)arg1 ;
-(double)pixelsBetweenLabelAndControl;
-(id)viewForBaselineAlignment;
-(void)shareButtonClicked:(id)arg1 ;
-(CalUILabel *)urlField;
-(id)infoViewPublicURLString;
-(id)publicURLSharingServices;
-(id)menuItemTitleForSharingService:(id)arg1 ;
-(id)servicesForShareButtonMenu;
-(void)setUrlField:(CalUILabel *)arg1 ;
@end

