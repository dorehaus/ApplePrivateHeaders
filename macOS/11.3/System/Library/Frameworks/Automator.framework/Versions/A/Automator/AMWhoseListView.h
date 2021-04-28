/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSView.h>

@class NSMutableSet, NSStackView;

@interface AMWhoseListView : NSView {

	NSMutableSet* _expandedSubviews;
	NSStackView* _stackView;
	struct {
		unsigned isDeallocating : 1;
		unsigned ignoreSubviewAdditionAndRemoval : 1;
		unsigned RESERVED : 29;
	}  _vlvFlags;

}

@property (retain) NSStackView * stackView;                       //@synthesize stackView=_stackView - In the implementation block
@property (retain) NSMutableSet * _expandedSubviews;              //@synthesize expandedSubviews=_expandedSubviews - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)addSubview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)_commonInit;
-(NSStackView *)stackView;
-(void)setStackView:(NSStackView *)arg1 ;
-(void)insertSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)expandSubview:(id)arg1 ;
-(void)removeSubviewAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSubview:(id)arg1 ;
-(void)set_expandedSubviews:(NSMutableSet *)arg1 ;
-(unsigned long long)numberOfSubviews;
-(NSMutableSet *)_expandedSubviews;
-(void)_configureNewSubview:(id)arg1 ;
@end

