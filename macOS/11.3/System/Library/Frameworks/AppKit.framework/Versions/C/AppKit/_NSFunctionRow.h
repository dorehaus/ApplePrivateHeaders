/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSFunctionRow.h>

@class NSViewController, NSDictionary, _NSFunctionRowPanel, NSFunctionRowBackgroundColorView, NSLayoutXAxisAnchor, NSLayoutConstraint;

@interface _NSFunctionRow : NSFunctionRow {

	NSViewController* _viewController;
	DFRElementRef _DFRElement;
	NSDictionary* _attributes;
	_NSFunctionRowPanel* _window;
	NSFunctionRowBackgroundColorView* _rootView;
	NSLayoutXAxisAnchor* _visualCenterXAnchor;
	NSLayoutConstraint* _rootWidth;
	NSLayoutConstraint* _rootHeight;
	NSLayoutConstraint* _rootVisualCenterX;
	unsigned long long _status;

}
-(void)dealloc;
-(id)description;
-(id)init;
-(char)isActive;
-(unsigned long long)status;
-(void)activate;
-(id)initWithType:(long long)arg1 ;
-(CGRect)frame;
-(id)accessibilityAttributeNames;
-(id)accessibilityParentAttribute;
-(void)setActive:(char)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityShouldUseUniqueId;
-(id)accessibilityRoleAttribute;
-(id)accessibilityRoleDescriptionAttribute;
-(id)accessibilityPositionAttribute;
-(id)accessibilitySizeAttribute;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityChildrenAttribute;
-(void)deactivate;
-(void)setViewController:(id)arg1 ;
-(id)visualCenterXAnchor;
-(char)wantsEscKeyOverrides;
-(const DFRElementRef)DFRElement;
-(id)touches;
-(const DFRTouchBarRef)DFRTouchBar;
-(double)escapeKeyPaddingForCloseButton:(char)arg1 ;
-(double)closeButtonPadding;
-(id)viewController;
-(id)CAContext;
-(id)_dumpLayer;
-(void)dim;
-(id)initWithDFRElementAttributes:(id)arg1 ;
-(char)requiresCompactLayout;
-(void)_setStatus:(unsigned long long)arg1 ;
-(void)presentSystemModalWithSystemTrayIdentifier:(id)arg1 ;
-(void)dismissSystemModal;
-(void)minimizeSystemModal;
@end

