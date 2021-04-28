/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/Versions/A/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class AKTrustedDeviceViewItem;

@interface AKAccessibleContainerView : NSView {

	AKTrustedDeviceViewItem* _item;

}

@property (assign) AKTrustedDeviceViewItem * item;              //@synthesize item=_item - In the implementation block
-(void)setItem:(AKTrustedDeviceViewItem *)arg1 ;
-(AKTrustedDeviceViewItem *)item;
-(id)accessibilityAttributeNames;
-(id)accessibilityFocusedUIElement;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
@end

