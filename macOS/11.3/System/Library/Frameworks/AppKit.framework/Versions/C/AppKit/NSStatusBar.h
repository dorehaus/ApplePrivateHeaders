/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSStatusBar : NSObject {

	id _items;
	void* _fReserved1;
	long long _registeredForNote;

}

@property (readonly) double contentPadding; 
@property (readonly) CGSize backgroundSelectionInset; 
@property (getter=isVertical,readonly) char vertical; 
@property (readonly) double thickness; 
+(char)_performKeyEquivalent:(id)arg1 ;
+(id)systemStatusBar;
-(void)dealloc;
-(id)init;
-(id)_name;
-(char)isVertical;
-(id)_statusItems;
-(void)_updateItemsForMetrics:(id)arg1 ;
-(void)_setRegisteredForNotifications:(char)arg1 ;
-(id)_statusItemWithLength:(double)arg1 withPriority:(long long)arg2 ;
-(void)_removeStatusItem:(id)arg1 ;
-(void)_insertStatusItem:(id)arg1 ;
-(double)thickness;
-(void)_insertObjectInItemArray:(id)arg1 ;
-(void)_removeObjectFromItemArray:(id)arg1 ;
-(char)_performKeyEquivalent:(id)arg1 ;
-(id)statusItemWithLength:(double)arg1 ;
-(void)removeStatusItem:(id)arg1 ;
-(double)contentPadding;
-(CGSize)backgroundSelectionInset;
-(id)_statusItemWithLength:(double)arg1 systemInsertOrder:(long long)arg2 ;
-(void)_statusItemIsDeallocing:(id)arg1 ;
-(id)_createStatusItemControlInWindow:(id)arg1 ;
-(void)drawBackgroundInRect:(CGRect*)arg1 inView:(id)arg2 highlight:(char)arg3 ;
-(long long)backgroundStyleForHighlight:(char)arg1 ;
-(void)_navigationCtrlF8Pressed;
-(void)_userRemoveStatusItem:(id)arg1 ;
@end

