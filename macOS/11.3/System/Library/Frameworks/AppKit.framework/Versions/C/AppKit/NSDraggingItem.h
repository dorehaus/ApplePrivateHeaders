/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSArray;

@interface NSDraggingItem : NSObject {

	id _item;
	CGRect _frame;
	NSArray* _components;
	/*^block*/id _componentsProvider;

}

@property (copy) NSArray * imageComponents; 
@property (readonly) id item;                             //@synthesize item=_item - In the implementation block
@property (assign) CGRect draggingFrame; 
@property (copy) id imageComponentsProvider;              //@synthesize componentsProvider=_componentsProvider - In the implementation block
-(void)dealloc;
-(id)description;
-(id)item;
-(id)initWithPasteboardWriter:(id)arg1 ;
-(void)setDraggingFrame:(CGRect)arg1 contents:(id)arg2 ;
-(CGRect)draggingFrame;
-(void)setDraggingFrame:(CGRect)arg1 ;
-(id)_initWithItem:(id)arg1 ;
-(void)setImageComponentsProvider:(id)arg1 ;
-(id)imageComponentsProvider;
-(NSArray *)imageComponents;
-(id)initWithPasteboardWriter:(id)arg1 frame:(CGRect)arg2 contents:(id)arg3 ;
-(void)setImageComponents:(NSArray *)arg1 ;
@end
