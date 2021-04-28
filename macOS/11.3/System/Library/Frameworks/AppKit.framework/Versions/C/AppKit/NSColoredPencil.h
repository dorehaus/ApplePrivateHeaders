/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSColor, NSImage;

@interface NSColoredPencil : NSObject {

	NSString* _name;
	NSColor* _color;
	NSImage* _image;

}

@property (copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) NSImage * image;                   //@synthesize image=_image - In the implementation block
@property (copy,readonly) NSColor * color;              //@synthesize color=_color - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(NSString *)name;
-(id)accessibilityAttributeNames;
-(id)accessibilityWindowAttribute;
-(id)accessibilityParentAttribute;
-(NSImage *)image;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsRoleAttributeSettable;
-(id)accessibilityRoleDescriptionAttribute;
-(char)accessibilityIsRoleDescriptionAttributeSettable;
-(char)accessibilityIsParentAttributeSettable;
-(char)accessibilityIsWindowAttributeSettable;
-(id)accessibilityTopLevelUIElementAttribute;
-(char)accessibilityIsTopLevelUIElementAttributeSettable;
-(id)accessibilityPositionAttribute;
-(char)accessibilityIsPositionAttributeSettable;
-(id)accessibilitySizeAttribute;
-(char)accessibilityIsSizeAttributeSettable;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityDescriptionAttribute;
-(char)accessibilityIsDescriptionAttributeSettable;
-(NSColor *)color;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(void)setOwningPencilView:(id)arg1 ;
-(id)initWithName:(id)arg1 color:(id)arg2 image:(id)arg3 ;
-(id)owningPencilView;
@end
