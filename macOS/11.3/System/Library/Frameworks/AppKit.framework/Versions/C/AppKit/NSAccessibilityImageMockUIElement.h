/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSAccessibilityIndexedMockUIElement.h>

@class NSString;

@interface NSAccessibilityImageMockUIElement : NSAccessibilityIndexedMockUIElement {

	CGRect _bounds;
	NSString* _description;
	NSString* _help;

}
-(void)dealloc;
-(CGRect)bounds;
-(id)accessibilityAttributeNames;
-(id)accessibilityHelpAttribute;
-(char)accessibilityIsFocusedAttributeSettable;
-(id)accessibilityPositionAttribute;
-(id)accessibilitySizeAttribute;
-(id)initWithParent:(id)arg1 index:(long long)arg2 bounds:(CGRect)arg3 description:(id)arg4 help:(id)arg5 ;
-(id)accessibilityDescriptionAttribute;
-(char)accessibilityIsDescriptionAttributeSettable;
-(id)accessibilityEnabledAttribute;
-(char)accessibilityIsEnabledAttributeSettable;
@end

