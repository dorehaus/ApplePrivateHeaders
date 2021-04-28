/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _NSPredicateEditorTree, NSMutableArray, NSArray;

@interface _NSPredicateEditorRowNode : NSObject {

	_NSPredicateEditorTree* tree;
	NSMutableArray* templateViews;
	NSMutableArray* copiedTemplateContainer;
	NSArray* children;

}

@property (readonly) _NSPredicateEditorTree * tree; 
@property (nonatomic,retain) NSMutableArray * copiedTemplateContainer; 
@property (nonatomic,retain) NSMutableArray * templateViews; 
@property (nonatomic,copy) NSArray * children; 
+(id)_rowNodeFromTree:(id)arg1 withTemplateTable:(id)arg2 ;
+(id)rowNodeFromTree:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(id)title;
-(NSMutableArray *)templateViews;
-(void)copyTemplateIfNecessary;
-(_NSPredicateEditorTree *)tree;
-(id)templateView;
-(char)applyTemplate:(id)arg1 withViews:(id)arg2 forOriginalTemplate:(id)arg3 ;
-(id)templateForRow;
-(id)displayValue;
-(NSMutableArray *)copiedTemplateContainer;
-(void)setCopiedTemplateContainer:(NSMutableArray *)arg1 ;
-(void)setTemplateViews:(NSMutableArray *)arg1 ;
@end

