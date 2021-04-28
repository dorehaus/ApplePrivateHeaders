/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSPredicate, NSPredicateEditor;

@interface AMSmartGroupsPredicateViewController : NSViewController {

	NSPredicate* _criteria;
	NSPredicateEditor* _editor;

}

@property (__weak) NSPredicateEditor * _editor;                   //@synthesize editor=_editor - In the implementation block
@property (nonatomic,retain) NSPredicate * criteria;              //@synthesize criteria=_criteria - In the implementation block
-(void)awakeFromNib;
-(NSPredicate *)criteria;
-(void)setCriteria:(NSPredicate *)arg1 ;
-(NSPredicateEditor *)_editor;
-(void)set_editor:(NSPredicateEditor *)arg1 ;
@end

