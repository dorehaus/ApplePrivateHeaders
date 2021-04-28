/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSScrollView.h>

@class NSString;

@interface CalUIAXScrollView : NSScrollView {

	char _accessibiltyIgnoredForNodeAndChildren;
	char _accessibiltyIgnoredForNode;
	NSString* _axRoleDescription;

}

@property (assign) char accessibiltyIgnoredForNodeAndChildren;              //@synthesize accessibiltyIgnoredForNodeAndChildren=_accessibiltyIgnoredForNodeAndChildren - In the implementation block
@property (assign) char accessibiltyIgnoredForNode;                         //@synthesize accessibiltyIgnoredForNode=_accessibiltyIgnoredForNode - In the implementation block
@property (retain) NSString * axRoleDescription;                            //@synthesize axRoleDescription=_axRoleDescription - In the implementation block
-(id)init;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)setAccessibiltyIgnoredForNodeAndChildren:(char)arg1 ;
-(void)setAxRoleDescription:(NSString *)arg1 ;
-(char)accessibiltyIgnoredForNodeAndChildren;
-(char)accessibiltyIgnoredForNode;
-(NSString *)axRoleDescription;
-(void)setAccessibiltyIgnoredForNode:(char)arg1 ;
@end

