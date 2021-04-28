/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSTableColumn;

@interface NSOutlineColumnMockGroup : NSObject {

	long long _row;
	NSTableColumn* _tableColumn;

}
+(id)outlineColumnGroupForRow:(long long)arg1 column:(long long)arg2 tableView:(id)arg3 ;
+(id)outlineColumnGroupForRow:(long long)arg1 tableColumn:(id)arg2 ;
-(void)dealloc;
-(id)accessibilityAttributeNames;
-(id)accessibilityWindowAttribute;
-(id)accessibilityParentAttribute;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
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
-(long long)row;
-(long long)column;
-(id)accessibilityChildrenAttribute;
-(id)accessibilityChildrenInNavigationOrderAttribute;
-(char)accessibilityIsChildrenAttributeSettable;
-(long long)accessibilityColumnIndex;
-(id)initWithRow:(long long)arg1 tableColumn:(id)arg2 ;
-(id)initWithRow:(long long)arg1 column:(long long)arg2 tableView:(id)arg3 ;
-(id)_cellProxyForRow:(long long)arg1 tableColumn:(id)arg2 ;
-(CGRect)_groupRect;
@end

